#include <stdio.h>
int main(){
    float numero1, numero2;
    printf("Insira o primeiro numero:\n");
    scanf("%f",&numero1);
    printf("Insira o segundo numero:\n");
    scanf("%f",&numero2);
    if (numero1==numero2)
       printf("Os numeros sao iguais\n");
    else if (numero1>numero2)
       printf("O numero %.2f e maior que %.2f\n", numero1, numero2);
    else
       printf("O numero %.2f e maior que %.2f\n", numero2, numero1);
}