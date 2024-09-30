#include <stdio.h>

int main() {
    int size, i, j, temp;
    printf("Entrer size de tableau : ");
    scanf("%d", &size);

    int T1[size];
    printf("\n");

    for (i = 0; i < size; i++) {
        printf("saisir le nombres de index %d : ",i);
        scanf("%d", &T1[i]);
    } 
    
    for (i = 0; i < size - 1; i++) {
        for (j = 0; j < size - 1 - i; j++) {
            if (T1[j] > T1[j + 1]) {
                temp = T1[j];
                T1[j] = T1[j + 1];
                T1[j + 1] = temp;
            }
        }
    } 

    printf("\n");
    printf("- le tableau trié en ordre croissant : \n");

    for (i = 0; i < size; i++) {
        printf(" %d ,", T1[i]);
    }
}