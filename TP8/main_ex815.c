#include <stdio.h>

int main() {
    int A = 0, B = 0; // Initialisations facultatives
    int somme = 0; // Initialisation OBLIGATOIRE

    printf("Saisissez l'entier A :\n");
    scanf("%d", &A);

    printf("Saisissez l'entier B :\n");
    scanf("%d", &B);

    if (A > B) { // Inversion des valeurs
        int tmp = A;
        A = B;
        B = tmp;
    }

    for (int i = A; i <= B; i++) {
        somme += i;
    }

    printf("La somme des nombres entre %d et %d vaut %d.\n", A, B, somme);
    return 0;
}
