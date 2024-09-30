#include <stdio.h>

int minimum(int a, int b) {
    if(a < b){
        return a;
    }else{
         return b;
    }
}

int main() {
    int num1, num2, min;

    printf("Entrez le premier nombre: ");
    scanf("%d", &num1);
    printf("Entrez le deuxième nombre: ");
    scanf("%d", &num2);

    min = minimum(num1, num2);

    printf("La minimum de %d et %d est %d.\n", num1, num2, min);

    return 0;
}
