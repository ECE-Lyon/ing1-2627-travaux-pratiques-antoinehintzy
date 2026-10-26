#include <stdio.h>

int main() {
    int choix = 0; // Initialisation facultative

    do {
        printf("============ MENU ============\n");
        printf("1 : Coca-Cola\n");
        printf("2 : Coca-Cola\n");
        printf("3 : Iced-tea\n");
        printf("4 : Fanta\n");
        printf("5 : Evian\n");
        printf("6 : Evian\n");
        printf("7 : San Pellegrino\n");
        printf("0 : Quitter\n");
        scanf("%d", &choix);

        switch (choix) {
            case 1:
            case 2:
            {
                printf("Distribution d'un Coca-Cola en cours...\n");
                break; // Ne pas oublier les break;, sinon continue dans le case suivant.
            }
            case 3:
            {
                printf("Distribution d'un Iced-tea en cours...\n");
                break;
            }
            case 4:
            {
                printf("Distribution d'un Fanta en cours...\n");
                break;
            }
            case 5:
            case 6:
            {
                printf("Distribution d'une Evian en cours...\n");
                break;
            }
            case 7:
            {
                printf("Distribution d'une San Pellegrino en cours...\n");
                break;
            }
            case 0: {
                printf("Au revoir...\n");
                break;
            }
            default: {
                printf("Choix invalide. Recommencez.\n");
            }
        }
    } while (choix != 0);
    return 0;
}
