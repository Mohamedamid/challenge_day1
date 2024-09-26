#include <stdio.h>

int main(){

    float note;

    printf("Entrer la note de moyenne : ");
    scanf("%f",&note);

    if (note < 10){
        printf("recalé");
    }else if (note >= 10 && note <=12){
        printf("passable");
    }else if (note > 12 && note <=14){
        printf("assez bien");
    }else if (note > 14 && note <=16){
        printf("bien");
    }else{
        printf("très bien");
    }
}