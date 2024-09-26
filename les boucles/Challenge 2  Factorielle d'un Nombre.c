#include <stdio.h>

int main(){

    int nbr, sum = 1;
    
    printf("Entrer un nombre : ");
    scanf("%d",&nbr);

    for (int i = 1 ;i <= nbr ;i++){
        sum = sum * i;
        printf("factorial : %d * %d = %d\n",sum/i,i,sum);
    }
    printf("factorial 5 est : %d",sum);
}