#include <stdio.h>
int main(){
    float Comprimento_da_pista, Numero_de_Voltas, Numero_de_Abastecimentos;
    float Combustivel_do_Carro, distancia_total, litros_primeiro_trecho;
    Numero_de_Voltas = Numero_de_Abastecimentos;
    printf("Insira o numero de voltas:\n");
    scanf("%f",&Numero_de_Voltas);
    printf("Insira o comprimemnto da pista:\n");
    scanf("%f",&Comprimento_da_pista);
    printf("Insira o numero de abastecimentos:\n");
    scanf("%f",&Numero_de_Abastecimentos);
    printf("Insira o consumo do carro:\n");
    scanf("%f",&Combustivel_do_Carro);
    distancia_total = Numero_de_Voltas * (Comprimento_da_pista / 1000);
    litros_primeiro_trecho = distancia_total / Combustivel_do_Carro;
    printf("O numeros de litros: %.2f\n", litros_primeiro_trecho);
}