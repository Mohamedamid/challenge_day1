#include <stdio.h>

int maximum(int a, int b) {
    if(a > b){
        return a;
    }else{
         return b;
    }
}

int main() {
    int num1, num2, max;

    printf("Entrez le premier nombre: ");
    scanf("%d", &num1);
    printf("Entrez le deuxième nombre: ");
    scanf("%d", &num2);

    max = maximum(num1, num2);

    printf("La maximum de %d et %d est %d.\n", num1, num2, max);

    return 0;
}
