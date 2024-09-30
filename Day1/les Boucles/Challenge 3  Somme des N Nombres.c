#include <stdio.h>

int main() {
    int n ,i = 1, somme = 0;

    printf("Entrez un nombre entier n: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Veuillez entrer un nombre entier positif.\n");
        return 1;
    }
    
    do {
        somme += i;
        i++;
    } while (i <= n);
    printf("Somme avec do while: %d\n", somme);

    return 0;
}
