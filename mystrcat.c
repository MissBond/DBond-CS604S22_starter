#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//TODO: Modify function mystrcat so it does the following:
//This function should create a string allocated on heap. This string should be the two
//input strings combined (this is called "concatenation" or "concatenating" the strings)
//The function should return this combined string.
//You ARE NOT allowed to use strcat or strcpy
//You ARE allowed to use strlen
//Please only modify mystrcat
char* mystrcat(char * first, char * second){
    char *combined;
    combined = malloc(sizeof(char) * 42);
    char *temp = combined;

    if (combined == NULL) {
        printf("Error: malloc failed\n");
        exit(1);
    }

    while (*first != '\0') {
        *temp++ = *first++;
    }

    while (*second != '\0') {
        *temp++ = *second++;
    }
    *temp = '\0';
    return combined;
}

int main(void) {
    char first[21];
    printf("Please enter first string(less than 20 chars):\n");
    scanf("%s", first);
    char second[21];
    printf("Please enter second string(less than 20 chars):\n");
    scanf("%s", second);

    char * combined = mystrcat(first, second);

    printf("%s + %s = %s\n", first, second, combined);

    free(combined);
}
