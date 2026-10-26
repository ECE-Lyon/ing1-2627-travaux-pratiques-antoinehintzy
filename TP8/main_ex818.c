#include <stdio.h>

int main() {
    float note1 = 0.0f, note2 = 0.0f, note3 = 0.0f; // Initialisations facultatives

    printf("Veuillez saisir la premiere note :\n");
    scanf("%f", &note1);
    while (note1 < 0.0f || note1 > 20.0f) {
        printf("La note doit etre entre 0 et 20. Recommencez :\n");
        scanf("%f", &note1);
    }

    printf("Veuillez saisir la deuxieme note :\n");
    scanf("%f", &note2);
    while (note2 < 0.0f || note2 > 20.0f) {
        printf("La note doit etre entre 0 et 20. Recommencez :\n");
        scanf("%f", &note2);
    }

    printf("Veuillez saisir la troisieme note :\n");
    scanf("%f", &note3);
    while (note3 < 0.0f || note3 > 20.0f) {
        printf("La note doit etre entre 0 et 20. Recommencez :\n");
        scanf("%f", &note3);
    }

    printf("Moyenne : %.2f\n", (note1 + note2 + note3) / 3.0f);

    return 0;
}
