#include <stdio.h>

int main(){

    int taill;

    printf("Entrer la taill : \n");
    scanf("%d",&taill);
    
    int T[taill],n;
    
    for(int i = 0 ;i < taill ;i++){
        
        printf("Entrer la valeur : \n");
        scanf("%d",&n);
        
        T[i] = n;
    }

    for(int i = 0 ;i < taill ;i++){
        
        printf("la valeur de index %d est : %d\n",i,T[i]);
    }
}