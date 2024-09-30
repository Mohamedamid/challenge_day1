#include <stdio.h>
#include <math.h>

const int mois = 12 ,minute = 525949 ,seconde = 31556952 ,heur = 8765 ,jour = 365;

int main(){
    char a = 1;
    int m;
    
    while (a == 1){
        
        int nbr_anne ,choix;
    
        printf("entrer le number d'annee : ");
        scanf("%d" ,&nbr_anne);
    
        printf("menu des choix : \n");
        printf("1 - Mois.\n");
        printf("2 - Jours.\n");
        printf("3 - Heures.\n");
        printf("4 - Minutes.\n");
        printf("5 - Secondes.\n");
        printf("Entrer le choix : ");
        scanf("%d",&choix);
        while (choix < 1 || choix > 5)
        {
            printf("entrer le choix : \n");
            scanf("%d",&choix);
        }
        
    
        switch (choix)
        {
        case 1:
            printf("le number des mois : %d\n",nbr_anne * mois);
            break;
        case 2:
            printf("le number des jours : %d\n",nbr_anne *  jour);
            break;
        case 3:
            printf("le number des heurs : %d\n",nbr_anne * heur);
            break;
        case 4:
            printf("le number des minutes : %d\n",nbr_anne * minute);
            break;
        case 5:
            printf("le number des secondes : %d\n",nbr_anne * seconde);
            break;
        default:
            break;
        }
        printf("\ndo you whant repeat: 1-yes or 0-no => ");
        scanf("%d",&m);
        a = m;
    }
    return 0;
}