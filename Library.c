/*
Name:Lennis Bahati
Reg no:PA106/G/28806/25
Description :
Date:Week 
*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char title[50];

    file = fopen("borrowed_books.txt", "a");
    if (file == NULL) {
        perror("Error opening borrowed_books.txt");
        exit(EXIT_FAILURE);
    }

    printf("Enter the title of the borrowed book: ");
    fgets(title, sizeof(title), stdin);

    fprintf(file, "%s", title);

    
    fclose(file);

    printf("? Book title successfully stored in borrowed_books.txt\n");

    return 0;
}
