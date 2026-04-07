#include <stdio.h>
int main () {
    double carros, valor_total, custo_por_carro, salario1, salario2, salario_total;
    printf("Quantos carros foram vendidos?\n");
    scanf("%lf",&carros);
    printf("Qual o valor total das vendas?\n");
    scanf("%lf",&valor_total);
    printf("Quanto você recebe por carro vendido?\n");
    scanf("%lf",&salario1);
    printf("Quanto você recebe de salario fixo por mes?\n");
    scanf("%lf",&salario2);
    salario_total = salario2 + (salario1 * carros) + (valor_total * 0.05);
    printf("O salario total do vendedor e: %.2lf",salario_total);
}