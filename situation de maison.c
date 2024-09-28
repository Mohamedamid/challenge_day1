// EXERCICE 1 :

#include <stdio.h>

int main(){
    
    int Base ,Hauteur ,Aire ,Perimetre;
    
    printf("Entrer : \n");
    
    printf("Base : ");
    scanf("%d",&Base);
    
    printf("Hauteur : "); 
    scanf("%d",&Hauteur);
    
    printf("Sortie : \n");
    
    Aire = (Base * Hauteur)/2;
    Perimetre = 3 * Base;
    
    printf("Aire : %d\n",Aire);
    printf("Périmètre : %d",Perimetre);

}

// EXERCICE 2 :

#include <stdio.h>

int main(){
    
    float temperature;
    
    printf("Entrer : ");

    scanf("%f",&temperature);
    
    if (temperature >= 38){
        printf("Sortie : Vous avez de la fièvre.");
    }else{
        printf("Sortie : Votre temperature est normal.");
    }
}

// EXERCICE 3 :

#include <stdio.h>

int main(){
    int n;
    
    printf("entrer n : ");
    scanf("%d",&n);
    int cnt;
    for (int i = 2 ;i < n ;i++){
        if(n % i == 0){
            cnt = 1;
            break;
        }else{
            cnt = 0;
        }
    }
    if(cnt == 1){
        printf("Ce n'est pas un nombre premier");
    }else{
        printf("C'est un nombre premier");
    }
}

// EXERCICE 4 :

#include <stdio.h>

int main(){
    int i;
    float T[5] ,temperature ,Max ,Min;
    
    printf("Entrée : \n");
    
    for (i = 0 ; i < 5 ;i++){
        scanf("%f ",&temperature);
        T[i] = temperature;
    }
    
    Max = T[0];
    
    for (i = 0 ;i < 5 ;i++){
        if (Max < T[i]){
            Max = T[i];    
        }
    }
    
    printf(" La plus haute temperature : %.2f\n",Max);
    
    Min = T[0];
    
    for (i = 0 ;i < 5 ;i++){
        if (Min > T[i]){
            Min = T[i];    
        }
    }
    printf(" La plus basse temperature : %.2f",Min);
}