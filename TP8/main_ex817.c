#include <stdio.h>

int main() {
    int n = 0; // Initialisation facultative

    do {
        printf("Veuillez saisir un nombre multiple de 2 et 7 :\n");
        scanf("%d", &n);
    } while (n % 2 != 0 || n % 7 != 0);

    printf("%d est a la fois multiple de 2 et de 7.\n", n);

    return 0;
}
