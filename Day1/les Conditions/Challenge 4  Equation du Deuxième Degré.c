#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int a,b,c,d,x1,x2 ;

    printf("enter a number a");
    scanf ("%d",&a);

    while(a==0){
        printf("Please enter a different number : ");
        scanf("%d",&a);
    }
    printf("enter a number b");
    scanf ("%d",&b);
    printf("enter a number c");
    scanf ("%d",&c);

    d = b*b-4*a*c ;

    int sqr = sqrt(d);

    if(d>0){
        x1 = (-b+sqr)/2*a;
        x2 = (-b-sqr)/2*a;
        
        printf("The equation have two different solution \n x1 : %d  x2  : %d",x1,x2);
    }else if(d=0){
        printf("The equation have one different solution \n x : %d",x1);
    }else{
        printf("ther is no solution");
    }

    return 0;
}

