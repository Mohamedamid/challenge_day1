#include <stdio.h>

int main() {
    int nbr, rvd = 0;
    
    printf("Entrez un entier a plusieurs chiffres : ");
    scanf("%d", &nbr);
    
    while (nbr != 0) {
        rvd = rvd * 10 + nbr % 10;
        nbr /= 10;
    }
    
    printf("L'entier en ordre inverse est : %d\n", rvd);
    
    return 0;
}
