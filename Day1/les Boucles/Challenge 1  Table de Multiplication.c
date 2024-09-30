#include <stdio.h>

int main(){

    int nombre ,result,i;

    printf("Entrer un nombre : ");
    scanf("%d",&nombre);

    for ( i = 1; i < 11; i++)
    {
        result = i * nombre;
        printf("%d * %d =  %d\n",i,nombre,result);
    }
    
}