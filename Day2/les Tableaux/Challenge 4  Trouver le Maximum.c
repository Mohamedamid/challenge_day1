#include <stdio.h>

int main(){

    int taill;
    
    printf("Entrer la taill : ");
    scanf("%d",&taill);
    
    int T[taill],n;
    int Max = T[0] ;
    
    printf("\n");
    
    for(int i = 0 ;i < taill ;i++){
        
        printf("Entrer la valeur : ");
        scanf("%d",&n);
        T[i] = n;
    }
    
    printf("\n");
    
    for(int i = 0 ;i < taill ;i++){
        
        printf("les element de totale : %d\n",T[i]);
    }
    for(int i = 0 ;i < taill ;i++){
        if(T[i]>Max){
            Max = T[i];
        }
    }
    printf("\nle Max de table est : %d", Max);
    
}