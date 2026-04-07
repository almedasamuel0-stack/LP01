#include <stdio.h>
int main (){
    float c1, cf;
    printf("Qual foi o custo da fabrica?\n");
    scanf("%f",&c1);
    cf=c1*(1+0.28+0.45);
    printf("O custo final do carro e: %.2f",cf);
}