#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, d;

    printf("Entrer la valeur de A : ");
    scanf("%f", &a);
    
    printf("Entrer la valeur de B : ");
    scanf("%f", &b);
    
    printf("Entrer la valeur de C : ");
    scanf("%f", &c);
    
    d = pow(a * b * c, 1.0 / 3.0); 
    printf("La moyenne géométrique de trois nombres donnés : %.2f\n", d);
    
    return 0;
}
