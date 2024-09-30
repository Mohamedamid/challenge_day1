#include <stdio.h>
#include <math.h>

const float Pi = 3.14;

int main(){

    float rayon ,volume ,d,r;

    printf("Entrer le rayon : ");
    scanf("%f",&rayon);
    
    d = (3.0/4.0);
    r = (pow(rayon,3));
    
    volume = d * Pi * r;

    printf("le volume d'une sphère : %.2f", volume);

}