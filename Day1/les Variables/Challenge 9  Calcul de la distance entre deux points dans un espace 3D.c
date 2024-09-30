#include <stdio.h>
#include <math.h>

int main(){

    float X1 ,X2 ,Y1 ,Y2 ,Z1 ,Z2 ,Distance;
    printf("Entrer X1 : ");
    scanf("%f",&X1);
    printf("Entrer X2 : ");
    scanf("%f",&X2);
    printf("Entrer Y1 : ");
    scanf("%f",&Y1);
    printf("Entrer Y2 : ");
    scanf("%f",&Y2);
    printf("Entrer Z1 : ");
    scanf("%f",&Z1);
    printf("Entrer Z2 : ");
    scanf("%f",&Z2);

    Distance = sqrt((pow(X2-X1,2)) + (pow(Y2-Y1,2)) + (pow(Z2-Z1,2)));

    printf("la distance entre deux points donnés dans un espace 3D : %.2f",Distance);
    
    return 0;
}