#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

int main() {
    char name[20];
    puts("Hallo Welt");
    printf("Ihr Name bitte: ");
    fgets(name, 20, stdin);
    strtok(name, "\n");
    printf("Hallo %s\n", name);
    return EXIT_SUCCESS;
}