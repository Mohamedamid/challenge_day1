#include <stdio.h>

int Somme(int a, int b) {
    return a + b;
}

int main() {
    int num1, num2, resultat;

    printf("Entrez le premier nombre: ");
    scanf("%d", &num1);
    printf("Entrez le deuxième nombre: ");
    scanf("%d", &num2);

    resultat = Somme(num1, num2);

    printf("La somme de %d et %d est %d.\n", num1, num2, resultat);

    return 0;
}
