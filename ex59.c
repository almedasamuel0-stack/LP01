#include <stdio.h>
int main(){
    float angulo1, angulo2, angulo3;
    printf("Insira o valor do primeiro angulo:\n");
    scanf("%f",&angulo1);
    printf("Insira o valor do segundo angulo:\n");
    scanf("%f",&angulo2);
    printf("Insira o valor do terceiro angulo:\n");
    scanf("%f",&angulo3);
    if (angulo1+angulo2+angulo3==180)
        if (angulo1+angulo2==90||angulo1+angulo3==90||angulo2+angulo3==90)
            printf("Triangulo Retangulo\n");
        else if (angulo1>90||angulo2>90||angulo3>90)
            printf("Triangulo Obtusangulo\n");
        else
            printf("Triangulo Acutangulo\n");
    else
        printf("Os angulos nao formam um triangulo\n");
}