#include <stdio.h>

int main() {
    int n;
    
    printf("Entrez un nombre entier n : ");
    scanf("%d", &n);
    
    printf("Les %d premiers nombres pairs sont : \n", n);
    for (int i = 1; i <= n; i++) {
        printf("%d\n", i * 2);
    }
    printf("\n");
    
    return 0;
}
