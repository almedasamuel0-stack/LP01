#include <stdio.h>
int main(){
    float numero1, numero2, numero3;
    printf("Insira o primeiro numero:\n");
    scanf("%f",&numero1);
    printf("Insira o segundo numero:\n");
    scanf("%f",&numero2);
    printf("Insira o terceiro numero:\n");
    scanf("%f",&numero3);
    if (numero1>=numero2 && numero1>=numero3)
        if (numero2>=numero3)
            printf("A ordem decrescente dos numeros e: %.2f, %.2f, %.2f\n", numero1, numero2, numero3);
        else 
            printf("A ordem decrescente dos numeros e: %.2f, %.2f, %.2f\n", numero1, numero3, numero2);
    if (numero2>=numero1 && numero2>=numero3)
        if (numero1>=numero3)
            printf("A ordem decrescente dos numeros e: %.2f, %.2f, %.2f\n", numero2, numero1, numero3);
        else
            printf("A ordem decrescente dos numeros e: %.2f, %.2f, %.2f\n", numero2, numero3, numero1);
    if (numero1>=numero2)
        printf("A ordem decrescente dos numeros e: %.2f, %.2f, %.2f\n", numero3, numero1, numero2);
    else
        printf("A ordem decrescente dos numeros e: %.2f, %.2f, %.2f\n", numero3, numero2, numero1);
}