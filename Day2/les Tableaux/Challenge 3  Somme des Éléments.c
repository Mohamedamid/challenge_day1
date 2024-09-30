#include <stdio.h>

int main(){

    int taill;
    int S = 0;
    
    printf("Entrer la taill : \n");
    scanf("%d",&taill);
    
    int T[taill],n;
    
    for(int i = 0 ;i < taill ;i++){
        
        printf("Entrer la valeur : \n");
        scanf("%d",&n);
        
        T[i] = n;
    }

    for(int i = 0 ;i < taill ;i++){
        S = S + T[i];
    }
    printf("la somme totale : %d",S);
}