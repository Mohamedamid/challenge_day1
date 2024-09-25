#include <stdio.h>

int main() {

    int nbr ,nbrf ,result1 ,result2 ,result3 ,result4;
    
    printf("entrer le nbr : ");
    scanf("%d",&nbr);
    
    result1 = nbr / 1000;
    result2 = (nbr / 100) % 10;
    result3 = (nbr / 10) % 10;
    result4 = nbr % 10;
    
    printf("le nbr = %d\n",nbr);
    printf("le result1 = %d\n",result1);
    printf("le result2 = %d\n",result2);
    printf("le result3 = %d\n",result3);
    printf("le result4 = %d\n",result4);
    
    nbrf = (result4 *1000)+(result3*100)+(result2*10)+(result1*1);
    
    printf("le Nbr_Final = %d",nbrf);
    
    return 0;
}