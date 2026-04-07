#include <stdio.h>
int main(){
    double comprimento, largura, numero_de_lampadas, potencia_total;
    printf("Qual o comprimento do local?\n");
    scanf("%lf",&comprimento);
    printf("Qual a largura do local?\n");
    scanf("%lf",&largura);
    numero_de_lampadas=(18*(comprimento*largura))/18;
    printf("A quantidade necessaria: %.2f\n", numero_de_lampadas);
}