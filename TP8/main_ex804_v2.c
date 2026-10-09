#include <stdio.h>

int main() {
    int nombre = 0; // Initialisation facultative

    printf("Veuillez saisir un entier :\n");
    scanf("%d", &nombre);

    // Ce qui est demandé :
    if(nombre % 3 == 0 && nombre >= 10) {
        printf("Le nombre %d est un multiple de 3 et il est superieur ou egal a 10.\n", nombre);
    }
    else {
        printf("Le nombre %d n'est pas un multiple de 3 ou n'est pas superieur ou egal a 10, ou les deux.\n", nombre);
    }

    // Pour aller plus loin :
    if(nombre % 3 == 0 && nombre >= 10) {
        printf("Le nombre %d est un multiple de 3 et il est superieur ou egal a 10.\n", nombre);
    }
    else if(nombre % 3 == 0 && nombre < 10) {
        printf("Le nombre %d est un multiple de 3 mais n'est pas superieur ou egal a 10.\n", nombre);
    }
    else if(nombre % 3 != 0 && nombre >= 10) { // Attention à ne pas faire nombre % 3 == 1, car le résultat de % 3 peut être 0, 1 ou 2.
        printf("Le nombre %d n'est pas un multiple de 3 mais il est bien superieur ou egal a 10.\n", nombre);
    }
    else {
        printf("Le nombre %d n'est pas un multiple de 3 et il n'est pas superieur ou egal a 10.\n", nombre);
    }

    return 0;
}
