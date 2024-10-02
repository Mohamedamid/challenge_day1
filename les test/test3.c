// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

int main() {
    int n;
    
    struct person {
         char nom[20];
         int age;
         float note[3];
    };
    
    printf("Entrer les nombre des persons : ");
    scanf("%d",&n);
    
    struct person p[n];

    for(int i = 0 ;i < n ;i++){
        printf("Entrer le nom de person : ");
        scanf("%s",p[i].nom);
        printf("Entrer l'age de person : ");
        scanf("%d",&p[i].age);
        printf("Entrer la note de Math : ");
        scanf("%f",&p[i].note[0]);
        printf("Entrer la note de Pc : ");
        scanf("%f",&p[i].note[1]);
        printf("Entrer la note de Svt : ");
        scanf("%f",&p[i].note[2]);
    }
    
    // for(int i = 0 ;i < n ;i++){
    //     printf("\nle nom de person %d : %s et l'age est %d est la note Math : %.2f est la note Pc : %.2f est la note Svt : %.2f",i+1 ,p[i].nom ,p[i].age, p[i].note[0] ,p[i].note[1] ,p[i].note[2]);
    // }
    
    float Max = 0;
    int id = -1;
    float moyenne = 0;
    for(int i = 0 ;i < n ;i++){
        moyenne = (p[i].note[0] + p[i].note[1] + p[i].note[2]) / 3;
        printf("\n\nla moyenne de %s est : %.2f\n",p[i].nom ,moyenne);
        if(Max < moyenne){
            Max = moyenne;
            id = i;
        }
    }
    
    if(id != -1){
        printf("\nLe person de Max note est : %s de la moyenne de note : %.2f",p[id].nom ,Max);
    }else{
        printf("\npas de note !!!!!!!!!");
    }
}