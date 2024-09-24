#include <stdio.h>

int main() {
    float vitesse_kmh, vitesse_ms;
    
    printf("Entrez la vitesse en kilomètres par heure (km/h) : "); 
    scanf("%f", &vitesse_kmh);

    vitesse_ms = vitesse_kmh * 0.27778; 

    printf("La vitesse en mètres par seconde (m/s) est : %.2f m/s\n", vitesse_ms); 

    return 0;
}