#include <stdio.h>
#include <string.h>

int main() {
    int n_livre, i, choix;
    printf("Entrer le nombre de livre : ");
    scanf("%d", &n_livre);
    char L[n_livre][3][20];
    char r_livre[20]; 

    printf("\nEntrer les informations de livre:\n");
    for (i = 0; i < n_livre; i++) {
        printf("\nlivre %d:\n", i + 1);
        printf("Entrer titre de livre: ");
        scanf("%s", L[i][0]);
        printf("Entrer actor de livre: ");
        scanf("%s", L[i][1]);
        printf("Entrer date livre: ");
        scanf("%s", L[i][2]);
    }
    
    while (1) {
        printf("\nmenu de choix :\n");
        printf("1. Afficher les livres\n");
        printf("2. Rechercher un livre\n");
        printf("3. Ajouter un livre\n");
        printf("4. suprimer un livre");
        printf("5. Quitter\n");
        printf("\nEntrer votre choix : ");
        scanf("%d", &choix);

        switch (choix) {
            case 1:
                printf("\nles informations des livres:\n");
                for (i = 0; i < n_livre; i++) {
                    printf("\nlivre %d:\n", i + 1);
                    printf("\ntitre de livre: %s\n", L[i][0]);
                    printf("actor de livre: %s\n", L[i][1]);
                    printf("date de livre: %s\n", L[i][2]);
                }
                break;

            case 2:
                printf("\nEntrer le livre pour recherche : ");
                scanf("%s", r_livre);
                int found = 0;
                for (i = 0; i < n_livre; i++) {
                    if (strcmp(L[i][0], r_livre) == 0) {
                        printf("\nlivre %d:\n", i + 1);
                        printf("titre de livre: %s\n", L[i][0]);
                        printf("actor de livre: %s\n", L[i][1]);
                        printf("date de livre: %s\n", L[i][2]);
                        found = 1;
                        break;
                    }
                }
                if (found == 0) {
                    printf("livre n'pas insert.\n");
                }
                break;

            case 3:
                printf("Fonctionnalité d'ajout de livre pas encore implémentée.\n");
                break;

            case 4:



            case 5:
                return 0;
            default:
                printf("Choix invalide, veuillez réessayer.\n");
        }
    }
}
