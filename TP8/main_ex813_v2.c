#include <stdio.h>

int main() {
    int n = 0; // Initialisations facultatives

    printf("Combien d'entiers naturels impairs voulez-vous afficher ?\n");
    scanf("%d", &n);

    printf("Les %d premiers entiers naturels impairs sont :\n", n);
    for (int i = 0, j = 1; i < n; i++, j += 2) {
        printf("%d\n", j);
    }
    return 0;
}
