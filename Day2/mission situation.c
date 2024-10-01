#include <stdio.h>

int main() {
    
    int T1[6] = {1,2,3,4,5,7},T2[6] ,cnt = 0;
    
    for(int i = 0 ;i < 6 ;i++){
        if (T1[i] % 2 == 0){
            T2[cnt] = i;
            cnt ++;
        }
    }
    
    for(int i = 0 ;i < cnt ;i++){
        printf("%d,",T2[i]);
    }
}