#include <stdio.h>

int main() {
    int hauteur = 0; // Initialisation facultative

    printf("Hauteur ?\n");
    scanf("%d", &hauteur);

    for (int i = 1; i <= hauteur; i++) {
        printf("%d ", i);
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
