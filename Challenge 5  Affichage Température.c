#include <stdio.h>

int main() {
    float tmp;

    printf("Veuillez entrer la température en Celsius : ");
    scanf("%f", &tmp);

    if (tmp < 0) {
        printf("L'état de l'eau à %.2f°C est : Solide\n", tmp);
    } else if (tmp < 100) {
        printf("L'état de l'eau à %.2f°C est : Liquide\n", tmp);
    } else {
        printf("L'état de l'eau à %.2f°C est : Gaz\n", tmp);
    }

    return 0;
}
