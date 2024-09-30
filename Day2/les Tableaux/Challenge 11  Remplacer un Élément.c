#include <stdio.h>

int main() {
    
    int nbr ,i ,size ,v_recherge ,v_remplacer ,boolean = 0;
    
    printf("Entrer la taill de tableau : ");
    scanf("%d",&size);
    
    int T[size];
    
    for( i = 0 ;i < size ;i++){
        printf("Entrer la valeur : ");
        scanf("%d",&nbr);
        T[i] = nbr;
    }
    
    printf("Entrer la valeur pour recherge : ");
    scanf("%d",&v_recherge);
    printf("Entrer la valeur à remplacer ");
    scanf("%d",&v_remplacer);
    
    for (i = 0 ;i < size ;i++){
        if (T[i] == v_recherge){
            T[i] = v_remplacer;
            boolean = 1;
        }else{
            boolean = 0;
        }
    }
    if (boolean == 1){
        printf("si l'élément est présent.\n");
    }else{
        printf("si l'élément n'est pas présent.\n");
    }
    for (i = 0; i < size; i++) {
        printf(" %d ,", T[i]);
    }
}