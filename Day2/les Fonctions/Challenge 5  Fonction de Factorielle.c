#include <stdio.h>

int factorielle(int n) {
    if (n == 0){
    return 1;
    }
    
    int resultat = 1;
    
    for (int i = 1; i <= n; i++) {
        resultat *= i;
    }
    
    return resultat;
}

int main() {
    int nombre;
    
    printf("Entrez un entier positif: ");
    scanf("%d", &nombre);

    if (nombre < 0) {
        printf("Veuillez entrer un entier positif.\n");
    } else {
        printf("La factorielle de %d est %d.\n", nombre, factorielle(nombre));
    }

    return 0;
}
