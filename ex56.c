#include <stdio.h>
int main(){
    double numero1, numero2, operacao, valor;
    double soma, subtracao, multiplicacao, divisao;
    printf("Insira o primeiro numero:\n");
    scanf("%lf",&numero1);
    printf("Insira o segundo numero:\n");
    scanf("%lf",&numero2);
    printf("Insira a operacao desejada: soma(1),subtracao(2),multiplicacao(3),divisao(4)\n");
    scanf("%lf",&operacao);
    if (operacao==1)
    {
        soma=numero1+numero2;
        printf("Soma: %.2lf\n", soma);
    }
    else if (operacao==2)
    {
        subtracao=numero1-numero2;
        printf("Subtracao: %.2lf\n", subtracao);
    }
    else if (operacao==3)
    {
        multiplicacao=numero1*numero2;
        printf("Multiplicacao: %.2lf\n", multiplicacao);
    }
    else if (operacao==4)
    {
        divisao=numero1/numero2;
        printf("Divisao: %.2lf\n", divisao);
    }
    else
        printf("Operacao nao identificada\n");
}