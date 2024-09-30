#include <stdio.h>

int Multiplication(int a, int b) {
    return a * b;
}

int main() {
    int num1, num2, resultat;

    printf("Entrez le premier nombre: ");
    scanf("%d", &num1);
    printf("Entrez le deuxième nombre: ");
    scanf("%d", &num2);

    resultat = Multiplication(num1, num2);

    printf("La Multiplication de %d et %d est %d.\n", num1, num2, resultat);

    return 0;
}
