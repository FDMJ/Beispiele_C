#include <stdio.h>
#include "func.h"

int main(int argc, char* argv[]) {
    int input;
    printf("Ganze Zahl: ");
    scanf("%d", &input);
    if (is_prime(input)) {
        printf("%d ist eine Primzahl.\n", input);
    } else {
        printf("%d ist keine Primzahl.\n", input);
    }
    return 0;
}