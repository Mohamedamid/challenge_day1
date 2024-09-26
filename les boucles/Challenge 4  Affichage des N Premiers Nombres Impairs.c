#include <stdio.h>

int main(){

    int nbr ,i ,s=1;
    
    do {
        printf("Entrer un Number : ");
        scanf("%d",&nbr);
    } while (nbr<0);
    
    for(i = 1;i <= nbr;i++){
        printf("%d",s);
        s = i + i +1;
    }
    
    return 0;
}