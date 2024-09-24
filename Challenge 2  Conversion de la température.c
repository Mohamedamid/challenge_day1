#include <stdio.h>

int main() {
    float c ,k;
    printf("Entre le température : ");
    scanf("%f", &c);
    k = c + 273.15;
    printf("la valeur Kelvin : %.2f ",k);
}