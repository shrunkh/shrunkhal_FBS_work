#include <stdio.h>
#include <string.h>

#define SIZE 10


struct Player {
    char name[30];
    int matches;
    int runs;
    int wickets;
};


void acceptPlayers(struct Player players[], int n) {
    for(int i=0; i<n; i++) {
        printf("\nEnter details for Player %d:\n", i+1);
        printf("Name: ");
        scanf(" %[^\n]%*c", players[i].name);  // Accept spaces
        printf("Matches Played: ");
        scanf("%d", &players[i].matches);
        printf("Runs: ");
        scanf("%d", &players[i].runs);
        printf("Wickets: ");
        scanf("%d", &players[i].wickets);
    }
}


void displayPlayers(struct Player players[], int n) {
    printf("\n--- Players Information ---\n");
    printf("%-20s %-10s %-10s %-10s\n", "Name", "Matches", "Runs", "Wickets");
    for(int i=0; i<n; i++) {
        printf("%-20s %-10d %-10d %-10d\n", players[i].name, players[i].matches, players[i].runs, players[i].wickets);
    }
}


void displayMax(struct Player players[], int n) {
    int maxRunsIndex = 0;
    int maxWicketsIndex = 0;

    for(int i=1; i<n; i++) {
        if(players[i].runs > players[maxRunsIndex].runs)
            maxRunsIndex = i;
        if(players[i].wickets > players[maxWicketsIndex].wickets)
            maxWicketsIndex = i;
    }

    printf("\nPlayer with Maximum Runs:\n");
    printf("Name: %s, Runs: %d\n", players[maxRunsIndex].name, players[maxRunsIndex].runs);

    printf("\nPlayer with Maximum Wickets:\n");
    printf("Name: %s, Wickets: %d\n", players[maxWicketsIndex].name, players[maxWicketsIndex].wickets);
}

int main() {
    struct Player players[SIZE];

    
    acceptPlayers(players, SIZE);

    
    displayPlayers(players, SIZE);

    
    displayMax(players, SIZE);

    return 0;
}
