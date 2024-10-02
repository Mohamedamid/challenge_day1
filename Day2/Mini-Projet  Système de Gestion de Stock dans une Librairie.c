#include <stdio.h>
#include <string.h>

int main() {
    
    int n_tab ,choix ,cpt = 0;;
    
    printf("Entrer le nombre des LIVRES : ");
    scanf("%d", &n_tab);
    
    char t_livre[n_tab][3][20];
    
    for(int i = 0 ;i < n_tab ;i++){
        
        printf("\nEntrer les information de livre %d : \n",i+1);
        printf("\nLe nom de livre : ");
        scanf("%s",&t_livre[i][0]);
        printf("Auteur de livre : ");
        scanf("%s",&t_livre[i][1]);
        printf("La date de livre : ");
        scanf("%s",&t_livre[i][2]);
    }
    
    start:
    
        printf("\nmenu de choix :\n");
        printf("\n1. Afficher les livres\n");
        printf("2. Rechercher un livre\n");
        printf("3. suprimer un livre\n");
        printf("4. Ajouter un livre\n");
        printf("5. modifiare un livre\n");
        printf("6. Quitter\n");
        printf("\nEntrer votre choix : ");
        scanf("%d", &choix);
    
    switch(choix){
        
        case 1:
            for(int i = 0 ;i < n_tab ; i++){
                printf("\nles information de livre %d : \n",i+1);
                printf("\nLe nom de livre : %s",t_livre[i][0]);
                printf("\nAuteur de livre : %s",t_livre[i][1]);
                printf("\nLa date de livre : %s\n",t_livre[i][2]);
            }
            goto start;
            break;
        case 2:
            // int cpt = 0;
            char r_livre[20];
            printf("\nEntrer le livre pour recherche : ");
            scanf("%s",&r_livre);
            for(int i = 0 ;i < n_tab ;i++){
                if (strcmp(t_livre[i][0], r_livre) == 0) {
                    printf("\nLes informations de livre %d : \n",i+1);
                    printf("Le nom de livre : %s\n", t_livre[i][0]);
                    printf("Auteur de livre : %s\n", t_livre[i][1]);
                    printf("La date de livre : %s\n", t_livre[i][2]);
                    cpt = 1;
                    break;
                }
            }
            if(cpt == 0){
                printf("le livre n'est pas ajouter.");
            }
            goto start;
            break;
        case 3:
            // int cpt = 0;
            char s_livre[20];
            printf("\nEntrer le livre à supprimer : ");
            scanf("%s", &s_livre);
            for (int i = 0; i < n_tab; i++) {
                if (strcmp(t_livre[i][0], s_livre) == 0) {
                    for (int j = i; j < n_tab - 1; j++) {
                        strcpy(t_livre[j][0], t_livre[j + 1][0]);
                        strcpy(t_livre[j][1], t_livre[j + 1][1]);
                        strcpy(t_livre[j][2], t_livre[j + 1][2]);
                    }
                    n_tab--;
                    cpt = 1;
                    break;
                }
            }
            if (cpt == 0) {
                printf("\nLe livre n'est pas trouvé.\n");
            } else {
                printf("Le livre a été supprimé avec succès.\n");
            }
            goto start;
            break;
        case 4:
            int n_plus;
            printf("\nEntrer le nombre de livres à ajouter : ");
            scanf("%d", &n_plus);
    
            for (int i = n_tab; i < n_tab + n_plus; i++) {
                printf("\nlivre %d:\n", i + 1);
                printf("Entrer titre de livre: ");
                scanf("%s", t_livre[i][0]);
                printf("Entrer auteur de livre: ");
                scanf("%s", t_livre[i][1]);
                printf("Entrer date livre: ");
                scanf("%s", t_livre[i][2]);
            }
            n_tab += n_plus;
            goto start;
            break;
        case 5:
            // int cpt = 0;
            char m_livre[20] ,mm_livre[20] ,alivre[20] ,dlivre[20];

            printf("\nEntrer le livre à modifiare : ");
            scanf(" %s %s %s %s", &m_livre ,&mm_livre,&alivre ,&dlivre);
            for (int i = 0; i < n_tab; i++) {
                if (strcmp(t_livre[i][0], m_livre) == 0) {
                    strcpy(t_livre[i][0], mm_livre);
                    strcpy(t_livre[i][1], alivre);
                    strcpy(t_livre[i][2], dlivre);
                    cpt = 1;
                    break;
                }
            }
            if (cpt == 0) {
                printf("\nLe livre n'est pas trouvé.\n");
            } else {
                printf("Le livre a été modifiare avec succès.\n");
            }
            goto start;
        default:
            printf("Choix invalide, veuillez réessayer.\n");
    }
    return 0;
}