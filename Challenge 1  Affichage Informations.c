#include <stdio.h>

int main() {
    char nom[20];
    char prenom[20];
    int age;

    printf("Entre le nom : ");
    scanf("%s", &nom);
    printf("Entre le prénom : ");
    scanf("%s", &prenom);
    printf("Entre le age : ");
    scanf("%d", &age);
    printf("\n******Affichage*******");
    printf("\nNom : %s\nPrenom : %s\nAge : %d\n",nom,prenom,age);
    return 0;
}