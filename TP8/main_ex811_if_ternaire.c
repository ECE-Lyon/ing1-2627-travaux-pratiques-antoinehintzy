#include <stdio.h>

int main(void) {
    int entier1 = 0, entier2 = 0; // Initialisations facultatives

    printf("Saisissez le premier entier :\n");
    scanf("%d", &entier1);

    printf("Saisissez le second entier :\n");
    scanf("%d", &entier2);

    printf("%d est le plus grand.\n", entier1 > entier2 ? entier1 : entier2);

    return 0;
}
