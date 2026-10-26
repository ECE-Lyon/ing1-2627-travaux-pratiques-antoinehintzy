#include <stdio.h>

int main() {
    int nbPierresADisposition = 0, nbPierresRestantes; // Initialisations facultatives
    int nbEtages = 0; // Initialisation OBLIGATOIRE

    for (int i = 1; i <= 35; i++) {
        nbEtages = 0;
        nbPierresADisposition = i;
        nbPierresRestantes = nbPierresADisposition;

        while (nbPierresRestantes >= (nbEtages + 1) * (nbEtages + 1)) {
            nbEtages++;
            nbPierresRestantes -= nbEtages * nbEtages;
        }

        printf("Avec %d pierre(s), il est possible de construire %d etage(s) et il restera %d pierre(s).\n",
               nbPierresADisposition, nbEtages, nbPierresRestantes);
    }
    return 0;
}
