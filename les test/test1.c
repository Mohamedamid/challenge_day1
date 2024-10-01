// Online C compiler to run C program online
#include <stdio.h>

int main() {
    
    int T1[9] = {3,7,0,0,6,4,1,0,8};
    int T2[9];
    int cnt = 0;
    
    for(int i = 0 ;i < 9 ;i++){
        if(T1[i] != 0){
            T2[cnt] = T1[i];
            cnt++;
        }
    }
    for(int i = 0 ;i < 9 ;i++){
        if(T1[i] == 0){
            for(int j = cnt ;j < 9 ;j++){
                T2[cnt] = T1[i];
                cnt++;
            }
        }
    }
    for(int i = 0 ;i < 9 ;i++){
        printf("%d,",T2[i]);
    }
}