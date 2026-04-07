#include <stdio.h>
int main(){
    float valor_do_combustivel, marca_do_odometro_i, marca_do_odometro_f, litros_combustivel;
    float media_consumo, lucro, valor_passageiros;
    valor_do_combustivel=2.90;
    printf("Quantos Km no inicio do dia?\n");
    scanf("%f",&marca_do_odometro_i);
    printf("Quantos Km no final do dia?\n");
    scanf("%f",&marca_do_odometro_f);
    printf("Quantos litros foram gastos?\n");
    scanf("%f",&litros_combustivel);
    printf("Qual foi o valor total recebido em viagens?\n");
    scanf("%f",&valor_passageiros);
    media_consumo=(marca_do_odometro_f-marca_do_odometro_i)/litros_combustivel;
    lucro=((marca_do_odometro_f-marca_do_odometro_i)*valor_do_combustivel)+valor_passageiros;
    if (lucro<0 && media_consumo<0)
        printf("O consumo foi de: 0\nO lucro foi de: 0");
    if (lucro>0 && media_consumo>0)
        printf("O consumo foi de : %.2f\nO lucro foi de:%.2f", media_consumo,lucro);
    if (lucro>0 && media_consumo<0)
        printf("O consumo foi de : 0\nO lucro foi de:%.2f",lucro);
    if (lucro<0 && media_consumo>0)
      printf("O consumo foi de : %.2f\nO lucro foi de: 0", media_consumo);
}
   