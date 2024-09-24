#include <stdio.h>

int main(void) {
float  biglietto1;
  printf("inserisci il biglietto1: ");
    scanf("%f", &biglietto1);
    float provvigione=0.15*biglietto1;
    printf("la provvigione è: %f", provvigione);
    float bigliettofinale=provvigione+biglietto1;
    printf("il prezzo finale è: %f", bigliettofinale);
    return 0;
}
