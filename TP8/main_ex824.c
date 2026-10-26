#include <stdio.h>

int main() {
    int nbPierresADisposition = 0, nbPierresRestantes; // Initialisations facultatives
    int nbEtages = 0; // Initialisation OBLIGATOIRE

    printf("De combien de pierres disposez-vous ?\n");
    scanf("%d", &nbPierresADisposition);
    nbPierresRestantes = nbPierresADisposition;

    while (nbPierresRestantes >= (nbEtages + 1) * (nbEtages + 1)) {
        nbEtages++;
        nbPierresRestantes -= nbEtages * nbEtages;
    }

    printf("Avec %d pierre(s), il est possible de construire %d etage(s) et il restera %d pierre(s).\n",
           nbPierresADisposition, nbEtages, nbPierresRestantes);

    return 0;
}
