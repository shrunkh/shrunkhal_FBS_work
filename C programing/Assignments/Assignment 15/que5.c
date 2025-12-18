#include <stdio.h>
#include <string.h>

#define MAX_MOVIES 50


struct Movie {
    char title[50];
    char director[30];
    int releaseYear;
    char genre[20];
};


void addMovie(struct Movie movies[], int *count) {
    if(*count >= MAX_MOVIES) {
        printf("Movie database is full!\n");
        return;
    }

    printf("\nEnter Movie Title: ");
    scanf(" %[^\n]%*c", movies[*count].title);
    printf("Enter Director: ");
    scanf(" %[^\n]%*c", movies[*count].director);
    printf("Enter Release Year: ");
    scanf("%d", &movies[*count].releaseYear);
    printf("Enter Genre: ");
    scanf(" %[^\n]%*c", movies[*count].genre);

    (*count)++;
    printf("Movie added successfully!\n");
}


void displayMovies(struct Movie movies[], int count) {
    if(count == 0) {
        printf("No movies in database.\n");
        return;
    }

    printf("\n--- Movie Database ---\n");
    for(int i=0;i<count;i++) {
        printf("\nMovie %d:\n", i+1);
        printf("Title       : %s\n", movies[i].title);
        printf("Director    : %s\n", movies[i].director);
        printf("Release Year: %d\n", movies[i].releaseYear);
        printf("Genre       : %s\n", movies[i].genre);
    }
}


void searchMovie(struct Movie movies[], int count) {
    char searchTitle[50];
    printf("\nEnter movie title to search: ");
    scanf(" %[^\n]%*c", searchTitle);

    for(int i=0;i<count;i++) {
        if(strcmpi(movies[i].title, searchTitle) == 0) { // case-insensitive
            printf("\nMovie Found:\n");
            printf("Title       : %s\n", movies[i].title);
            printf("Director    : %s\n", movies[i].director);
            printf("Release Year: %d\n", movies[i].releaseYear);
            printf("Genre       : %s\n", movies[i].genre);
            return;
        }
    }
    printf("Movie not found.\n");
}


void updateMovie(struct Movie movies[], int count) {
    char searchTitle[50];
    printf("\nEnter movie title to update: ");
    scanf(" %[^\n]%*c", searchTitle);

    for(int i=0;i<count;i++) {
        if(strcmpi(movies[i].title, searchTitle) == 0) {
            printf("Enter new Director: ");
            scanf(" %[^\n]%*c", movies[i].director);
            printf("Enter new Release Year: ");
            scanf("%d", &movies[i].releaseYear);
            printf("Enter new Genre: ");
            scanf(" %[^\n]%*c", movies[i].genre);
            printf("Movie updated successfully!\n");
            return;
        }
    }
    printf("Movie not found.\n");
}

int main() {
    struct Movie movies[MAX_MOVIES];
    int count = 0;
    int choice;

    do {
        printf("\n--- Movie Database Menu ---\n");
        printf("1. Add Movie\n");
        printf("2. Display All Movies\n");
        printf("3. Search Movie by Title\n");
        printf("4. Update Movie\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: addMovie(movies, &count); break;
            case 2: displayMovies(movies, count); break;
            case 3: searchMovie(movies, count); break;
            case 4: updateMovie(movies, count); break;
            case 0: printf("Exiting program.\n"); break;
            default: printf("Invalid choice!\n");
        }
    } while(choice != 0);

    return 0;
}
