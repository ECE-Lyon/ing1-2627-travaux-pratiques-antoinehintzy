#include <stdio.h>

int main() {
    int n = 0; // Initialisation facultative

    printf("Combien d'entiers naturels impairs voulez-vous afficher ?\n");
    scanf("%d", &n);

    printf("Les %d premiers entiers naturels impairs sont :\n", n);
    for (int i = 0; i < n; i++) {
        printf("%d\n", i*2+1);
    }
    return 0;
}
