#include <stdio.h>

int main() {
    
    int nbr, i, size, v_recherche, boolean = 0;
    
    printf("Entrer la taille du tableau : ");
    scanf("%d", &size);
    
    int T[size];

    for (i = 0; i < size; i++) {
        printf("Entrer la valeur : ");
        scanf("%d", &T[i]);
    }
    
    printf("Entrer la valeur à rechercher : ");
    scanf("%d", &v_recherche);
    
    int j = 0;

    int n_size = 0;
    for (i = 0; i < size; i++) {
        if (T[i] != v_recherche) {
            T[j] = T[i];
            j++;
            n_size++;
        } else {
            boolean = 1;
        }
    }
    
    if (boolean == 1) {
        printf("L'élément est présent.\n");
    } else {
        printf("L'élément n'est pas présent.\n");
    }
    
    printf("Tableau après suppression : ");
    for (i = 0; i < n_size; i++) {
        printf("%d ", T[i]);
    }
    
    printf("\n");
    return 0;
}
