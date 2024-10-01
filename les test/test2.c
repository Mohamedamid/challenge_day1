// Online C compiler to run C program online
#include <stdio.h>

int main() {
    
    int T[9] = {3,0,1,0,6,0,1,0,8};
    int test;
    
    for(int i = 0 ;i < 9 ;i++){
        for(int j = 0 ;j < 9 ;j++)
        if(T[j] == 0){
            test = T[j];
            T[j] = T[j+1];
            T[j+1] = test;
        }
    }
    
    for(int i = 0 ;i < 9 ;i++){
        printf("%d,",T[i]);
    }
    
}