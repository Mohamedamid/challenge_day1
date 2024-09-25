#include <stdio.h>

int main() {
    char car;

    printf("Veuillez entrer un caractère : ");
    scanf(" %c", &car);

    if (car >= 'A' && car <= 'Z') {
        printf("%c est un alphabet majuscule.\n", car);
    } else {
        printf("%c n'est pas un alphabet majuscule.\n", car);
    }

    return 0;
}