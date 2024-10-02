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
    
    
    int id = -1;
    float Max = -1.0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 3; j++) {
            if (Max < p[i].note[j]) {
                Max = p[i].note[j];
                id = i;
            }
        }
    }
    
    if (id != -1) {
        printf("\nLa personne avec la note maximale est : %s avec une note de : %.2f\n", p[id].nom, Max);
    } else {
        printf("\nPas de notes !!!!!!!!!\n");
    }
}