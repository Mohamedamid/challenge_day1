#include <stdio.h>

int main() {
    float a, b, c, d;

    printf("Entrer la valeur de A : ");
    scanf("%f", &a);
    
    printf("Entrer la valeur de B : ");
    scanf("%f", &b);
    
    printf("Entrer la valeur de C : ");
    scanf("%f", &c);

    if (a != 0 || b != 0 || c != 0) {
        d = (a + b + c) / 3;
        printf("La moyenne pondérée de trois nombres donnés : %.2f\n", d);
    } else {
        printf("Les trois nombres égaux à 0.\n");
    }

    return 0;
}
