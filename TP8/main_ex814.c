#include <stdio.h>

int main() {
    int max = 0; // Initialisation facultative

    printf("Saisissez un nombre entier :\n");
    scanf("%d", &max);

    printf("Les premiers entiers naturels impairs inférieurs à %d sont :\n", max);

    for (int i = 1; i < max; i += 2) {
        printf("%d\n", i);
    }
    return 0;
}
