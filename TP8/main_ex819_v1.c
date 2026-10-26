#include <stdio.h>

int main() {
    int saisie = 0; // Initialisation facultative
    int somme = 0, nbValeurs = 0; // Initialisations OBLIGATOIRES


    do {
        printf("Saisissez un entier positif ou nul a ajouter a la moyenne, ou un nombre négatif pour quitter :\n");
        scanf("%d", &saisie);
        if (saisie >= 0) {
            somme += saisie;
            nbValeurs++;
        }
    } while (saisie >= 0);

    if (nbValeurs == 0) { // pour ne pas diviser par 0.
        printf("Vous n'avez saisi aucun entier positif.\n");
    }
    else {
        printf("Moyenne : %.2f.\n", (float) somme / (float) nbValeurs);
    }

    return 0;
}
