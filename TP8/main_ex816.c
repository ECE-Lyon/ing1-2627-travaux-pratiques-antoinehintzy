#include <stdio.h>

int main() {
    int nbClasses = 0, nbElevesDansLaClasse = 0; // Initialisations facultatives
    int nbElevesTotal = 0; // Initialisation OBLIGATOIRE

    printf("Combien y a-t-il de classes ?\n");
    scanf("%d", &nbClasses);

    for (int i = 0; i < nbClasses; i++) {
        printf("Combien y a-t-il d'eleves dans la classe %d ?\n", i + 1);
        scanf("%d", &nbElevesDansLaClasse);
        nbElevesTotal += nbElevesDansLaClasse;
    }

    printf("Il y a au total %d eleves, repartis dans %d classes.\n", nbElevesTotal, nbClasses);
    return 0;
}
