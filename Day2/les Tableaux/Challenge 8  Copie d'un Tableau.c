#include <stdio.h>

int main(){

    int i ,T1[5] = {1,2,3,4,5},T2[5];
    
    for (i = 0 ;i < 5 ;i++){
        T2[i] = T1[i];
    }
    printf("T1[5] = ");
    for (i = 0 ;i < 5 ;i++){
        printf("%d ,",T1[i]);
    }
    printf("\nT2[5] = ");
    for (i = 0 ;i < 5 ;i++){
        printf("%d ,",T2[i]);
    }
}