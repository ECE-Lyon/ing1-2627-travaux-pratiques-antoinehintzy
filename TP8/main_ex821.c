#include <stdio.h>

int main() {
    int age = 0; // Initialisation facultative

    do {
        printf("Age du visiteur :\n");
        scanf("%d", &age);

        if (age < 0) {
            printf("Au revoir...\n");
        } else if (age < 12) { // de 0 à 11 inclus
            printf("Tarif enfant : 4 euros.\n");
        } else if (age < 18) { // de 12 à 17 inclus
            printf("Tarif jeune : 6 euros.\n");
        } else if (age <= 27) { // de 18 à 27 inclus
            int estEtudiant = 0; // Initialisation facultative
            printf("Le visiteur est-il etudiant ? (1 = oui, 0 = non)\n");
            scanf("%d", &estEtudiant);
            if (estEtudiant) { // de 18 à 27 inclus ET etudiant
                printf("Tarif jeune : 6 euros.\n");
            } else { // de 18 à 27 inclus ET NON etudiant
                printf("Plein tarif : 15 euros.\n");
            }
        } else if (age >= 65) { // de 65 à la valeur max de signed int
            printf("Tarif senior : 6 euros.\n");
        } else { // de 28 à 64 inclus
            printf("Plein tarif : 15 euros.\n");
        }
    } while (age >= 0);

    return 0;
}
