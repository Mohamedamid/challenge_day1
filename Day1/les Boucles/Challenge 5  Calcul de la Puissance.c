#include <stdio.h>

int main() {
    
    int base, exposant, resultat = 1,i;

    printf("Entrez la base: ");
    scanf("%d", &base);
    
    printf("Entrez l'exposant: ");
    scanf("%d", &exposant);

    for (i = 0; i < exposant; i++) {
        resultat = resultat * base;
    }

    printf("%d^%d = %d\n", base, exposant, resultat);

    return 0;
}
