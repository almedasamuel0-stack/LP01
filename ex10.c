#include <stdio.h>
int main () {
    float salario, hora, SF;
    printf("Quanto voce ganha por hora?\n");
    scanf("%f",&salario);
    printf("Quantas horas?\n");
    scanf("%f",&hora);
    SF= (salario*hora);
    printf("O salario pelas horas foi de: %.2f",SF);
}