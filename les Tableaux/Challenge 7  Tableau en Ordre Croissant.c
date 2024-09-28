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
    for(int i = 0 ;i < taill-1 ;i++){
        for(int j = 0 ;j < taill-1 ;j++){
            
            int B = 0;
            
            if(B < T[j]){
                
                B = T[j];
                T[i] = T[j+1];
                T[j+1] = B;
            }
        }}  
    
    for(int i = 1 ;i < taill ;i ++){
        
        printf("\nle tableau trié en ordre croissant : %d", T[i]);
    }
}