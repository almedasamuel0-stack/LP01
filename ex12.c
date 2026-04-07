#include <stdio.h>
int main () {
    float salario, percentual, novo_salario;
    printf("Qual o salario do funcionario?\n");
    scanf("%f",&salario);
    printf("Qual o percentual de reajuste?\n");
    scanf("%f",&percentual);
    novo_salario=salario*(1+percentual/100);
    printf("O novo salario do funcionario e: %.2f",novo_salario);
}