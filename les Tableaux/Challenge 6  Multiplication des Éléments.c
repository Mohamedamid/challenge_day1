#include <stdio.h>

int main(){

    int taill;
    
    printf("Entrer la taill : ");
    scanf("%d",&taill);
    
    int T[taill],n1,n2;
    
    printf("\n");
    
    for(int i = 0 ;i < taill ;i++){
        
        printf("Entrer la valeur : ");
        scanf("%d",&n1);
        T[i] = n1;
    }
    
    printf("\n");
    
    for(int i = 0 ;i < taill ;i++){

        printf("les elements de tableau de index %d : %d\n",i,T[i]);
    }

    printf("\nEntrer la valeur de facteur: ");
    scanf("%d",&n2);
    
    for(int i = 0 ;i < taill ;i++){
        T[i] = T[i] * n2;
        printf("\nle la valeur de index %d : %d",i,T[i]);
    }
}