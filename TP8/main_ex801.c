#include <stdio.h>

int main(void) {
    int entier1 = 0, entier2 = 0; // Initialisations facultatives car lues au clavier après

    printf("Saisissez le premier entier :\n");
    scanf("%d", &entier1);

    printf("Saisissez le second entier :\n");
    scanf("%d", &entier2);

    // Sans if ternaire :
    printf("if-else classique :\n");
    if(entier1 > entier2) {
        printf("%d est le plus grand.\n", entier1);
    } else {
        printf("%d est le plus grand.\n", entier2);
    }

    // Avec if ternaire :
    printf("if ternaire :\n");
    printf("%d est le plus grand.\n", entier1 > entier2 ? entier1 : entier2);

    return 0;
}
