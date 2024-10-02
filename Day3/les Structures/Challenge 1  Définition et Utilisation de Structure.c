#include <stdio.h>
#include <string.h>

int main() {
    int n;
    
    struct person {
         char nom[20];
         int age;
         float note;
    };
    
    printf("Entrer les nombre des persons : ");
    scanf("%d",&n);
    
    struct person p[n];

    for(int i = 0 ;i < n ;i++){
        printf("Entrer le nom de person : ");
        scanf("%s",p[i].nom);
        printf("Entrer l'age de person : ");
        scanf("%d",&p[i].age);
        printf("Entrer la note de person : ");
        scanf("%f",&p[i].note);
    }
    
    for(int i = 0 ;i < n ;i++){
        printf("\nle nom de person %s et l'age est %d et la note est %.2f.\n",p[i].nom,p[i].age,p[i].note);
    }
    
    
         
    
    
}