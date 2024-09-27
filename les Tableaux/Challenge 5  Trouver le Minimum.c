#include <stdio.h>

int main(){

    int taill;
    
    printf("Entrer la taill : ");
    scanf("%d",&taill);
    
    int T[taill],n;
    
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
    
    int Min = T[0] ;
    
    for(int i = 0 ;i < taill ;i++){
        if(T[i]<Min){
            Min = T[i];
        }
    }
    printf("\nle Min de table est : %d", Min);
    
}