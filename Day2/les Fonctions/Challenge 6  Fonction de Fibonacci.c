#include <stdio.h>

int fibonacci(int n) {
    if (n <= 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        int i ,a = 0, b = 1, c;
        for ( i = 2; i <= n; i++) {
            c = a + b;
            a = b;     
            b = c;
        }
        return b;
    }
}

int main() {
    int n;
    printf("Entrez un entier pour calculer le terme de Fibonacci: ");
    scanf("%d", &n);
    
    int result = fibonacci(n);
    printf("Le %d-ième terme de la suite de Fibonacci est: %d\n", n, result);
    
    return 0;
}
