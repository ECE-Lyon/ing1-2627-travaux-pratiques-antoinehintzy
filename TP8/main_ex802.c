#include <stdio.h>

int main() {
    int largeur = 0, hauteur = 0;   // Initialisations facultatives
    int perimetre = 0;              // Initialisation facultative

    // // // // // // // // // // ATTENTION // // // // // // // // // //
    // Ne pas faire :
    // perimetre = (largeur+hauteur) * 2;
    // ici, car perimetre ne se mettre pas à jour plus tard si largeur ou hauteur change.

    printf("Largeur du rectangle ?\n");
    scanf("%d", &largeur);

    printf("Hauteur du rectangle ?\n");
    scanf("%d", &hauteur);

    perimetre = (largeur+hauteur) * 2; // on ne peut calculer le périmètre que quand largeur et hauteur ont leur valeur

    printf("Aire : %d, perimetre : %d.\n", largeur * hauteur, perimetre); // on ne stocke par l'aire dans une variable

    for(int j = 0; j < hauteur; j++) { // Pour chaque ligne

        for(int i = 0; i < largeur; i++) { // Pour chaque colonne de la ligne
            printf("* "); // on dessine une étoile
        }
        printf("\n"); // on finit la ligne par un retour à la ligne
    }

    return 0;
}
