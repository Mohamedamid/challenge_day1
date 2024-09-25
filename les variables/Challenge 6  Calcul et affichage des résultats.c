#include <stdio.h>

int main() {
    float a ,b ,c;
    
    printf("entrer la valeur a : ");
    scanf("%f",&a);
    
    printf("entrer la valeur b : ");
    scanf("%f",&b);
    
    printf("a + b = %.2f\n",c = a + b);
    
    printf("a - b = %.2f\n",c = a - b);
    
    printf("a * b = %.2f\n",c = a * b);
    
    if(a == 0){
        printf("n'pas calcule a/b la valeur a = 0");
    }else{
        printf("a / b = %.2f",c = a / b);
    }
}