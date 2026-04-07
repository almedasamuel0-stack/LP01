#include <stdio.h>
int main(){
    float Triangulo, lado, Triangulo_Quadrado;
    float lado1, lado2, lado3;
    printf("Insira o numero de lados:\n");
    scanf("%f",&lado);
    if (lado==3||lado==4||lado==5)
    {
        printf("Insira o valor do primeiro lado:\n");
        scanf("%f",&lado1); 
        printf("Insira o valor do segundo lado:\n");
        scanf("%f",&lado2);
        printf("Insira o valor do terceiro lado:\n");
        scanf("%f",&lado3);
        if (lado==3)        
        {
            Triangulo_Quadrado=lado1+lado2+lado3;
            printf("Triangulo com perimetro de: %.2f\n", Triangulo_Quadrado);
        }
        else if (lado==4)
        {
            Triangulo_Quadrado=lado1*lado2;
            printf("Quadrado com area de: %.2f\n", Triangulo_Quadrado);
        }
        else
            printf("Pentagono\n");
    }
    else
        printf("Não e um triangulo, pentagono e quadrado!\n");
}