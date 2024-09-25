#include <stdio.h>

int main(){
    int nbr;

    printf("Entrer un number : ");
    scanf("%d",&nbr)

    if (nbr < 0){
        printf("ce nombre est Négatif");
    }else if (nbr > 0){
        printf("ce nombre est Positif");
    }else{
        printf("ce nombre est null");
    }
}