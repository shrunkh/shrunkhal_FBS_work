#include <stdio.h>


void mystrcpy(char *dest, const char *src) {
    while(*src) *dest++ = *src++;
    *dest = '\0';
}

int mystrlen(const char *str) {
    int len = 0;
    while(*str++) len++;
    return len;
}


int mystrcmp(const char *s1, const char *s2) {
    while(*s1 && (*s1 == *s2)) { s1++; s2++; }
    return *(unsigned char*)s1 - *(unsigned char*)s2;
}


void mystrcat(char *dest, const char *src) {
    while(*dest) dest++;
    while(*src) *dest++ = *src++;
    *dest = '\0';
}


void mystrncpy(char *dest, const char *src, int n) {
    int i;
    for(i = 0; i < n && src[i]; i++) dest[i] = src[i];
    for(; i < n; i++) dest[i] = '\0';
}


void mystrupper(char *str) {
    while(*str) {
        if(*str >= 'a' && *str <= 'z') *str -= 32;
        str++;
    }
}


void mystrlower(char *str) {
    while(*str) {
        if(*str >= 'A' && *str <= 'Z') *str += 32;
        str++;
    }
}


void mystrrev(char *str) {
    int i = 0, j = mystrlen(str) - 1;
    char temp;
    while(i < j) {
        temp = str[i]; str[i] = str[j]; str[j] = temp;
        i++; j--;
    }
}


char* mystrstr(const char *haystack, const char *needle) {
    if(!*needle) return (char*)haystack;
    for(; *haystack; haystack++) {
        const char *h = haystack, *n = needle;
        while(*h && *n && *h == *n) { h++; n++; }
        if(!*n) return (char*)haystack;
    }
    return NULL;
}


int mystrcasecmp(const char *s1, const char *s2) {
    char c1, c2;
    while(*s1 && *s2) {
        c1 = (*s1 >= 'A' && *s1 <= 'Z') ? *s1 + 32 : *s1;
        c2 = (*s2 >= 'A' && *s2 <= 'Z') ? *s2 + 32 : *s2;
        if(c1 != c2) return c1 - c2;
        s1++; s2++;
    }
    return *s1 - *s2;
}


char* mystrchr(const char *str, char c) {
    while(*str) { if(*str == c) return (char*)str; str++; }
    return NULL;
}


char* mystrrchr(const char *str, char c) {
    char *last = NULL;
    while(*str) { if(*str == c) last = (char*)str; str++; }
    return last;
}


int mystrncmp(const char *s1, const char *s2, int n) {
    int i;
    for(i = 0; i < n && s1[i] && s2[i]; i++)
        if(s1[i] != s2[i]) return (unsigned char)s1[i] - (unsigned char)s2[i];
    if(i < n) return (unsigned char)s1[i] - (unsigned char)s2[i];
    return 0;
}


char* mystrnstr(const char *haystack, const char *needle, int n) {
    int needleLen = mystrlen(needle);
    for(int i = 0; i <= n - needleLen; i++) {
        int j;
        for(j = 0; j < needleLen; j++)
            if(haystack[i+j] != needle[j]) break;
        if(j == needleLen) return (char*)(haystack + i);
    }
    return NULL;
}


void mystrncat(char *dest, const char *src, int n) {
    while(*dest) dest++;
    int i;
    for(i = 0; i < n && src[i]; i++) dest[i] = src[i];
    dest[i] = '\0';
}


int mystrncasecmp(const char *s1, const char *s2, int n) {
    int i;
    char c1, c2;
    for(i = 0; i < n && s1[i] && s2[i]; i++) {
        c1 = (s1[i] >= 'A' && s1[i] <= 'Z') ? s1[i] + 32 : s1[i];
        c2 = (s2[i] >= 'A' && s2[i] <= 'Z') ? s2[i] + 32 : s2[i];
        if(c1 != c2) return c1 - c2;
    }
    if(i < n) return (unsigned char)s1[i] - (unsigned char)s2[i];
    return 0;
}


int main() {
    char str1[100], str2[100], str3[100];

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';

    printf("\nmystrcpy: "); mystrcpy(str3, str1); printf("%s\n", str3);
    printf("mystrlen(str1): %d\n", mystrlen(str1));
    printf("mystrcmp(str1, str2): %d\n", mystrcmp(str1, str2));
    printf("mystrcat(str3, str2): "); mystrcat(str3, str2); printf("%s\n", str3);
    printf("mystrncpy(str3, str2, 4): "); mystrncpy(str3, str2, 4); str3[4]='\0'; printf("%s\n", str3);
    printf("mystrupper(str3): "); mystrupper(str3); printf("%s\n", str3);
    printf("mystrlower(str3): "); mystrlower(str3); printf("%s\n", str3);
    printf("mystrrev(str3): "); mystrrev(str3); printf("%s\n", str3);
    printf("mystrstr(str1, str2): %s\n", mystrstr(str1, str2));
    printf("mystrcasecmp(str1, str2): %d\n", mystrcasecmp(str1, str2));
    printf("mystrchr(str1, '%c'): %s\n", str1[0], mystrchr(str1, str1[0]));
    printf("mystrrchr(str1, '%c'): %s\n", str1[0], mystrrchr(str1, str1[0]));
    printf("mystrncmp(str1, str2, 3): %d\n", mystrncmp(str1, str2, 3));
    printf("mystrnstr(str1, str2, mystrlen(str1)): %s\n", mystrnstr(str1, str2, mystrlen(str1)));
    printf("mystrncat(str3, str2, 3): "); mystrncat(str3, str2, 3); printf("%s\n", str3);
    printf("mystrncasecmp(str1, str2, 3): %d\n", mystrncasecmp(str1, str2, 3));

    return 0;
}
