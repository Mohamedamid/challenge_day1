#include <stdio.h>

int main() {
    int a;
    
    printf("entrer la valeur a : ");
    scanf("%d",&a);
    
    if(a % 2 == 0){
        printf("pair");
    }else{
        printf("impair");
    }
}