#include <stdio.h>
int main(){
    float comprimento, largura, altura;
    float quantidade_de_caixas;
    printf("Insira o comprimento:\n");
    scanf("%f",&comprimento);
    printf("Insira a largura:\n");
    scanf("%f",&largura);
    printf("Insira a altura:\n");
    scanf("%f",&altura);
    quantidade_de_caixas=(comprimento*largura*altura)/1.5;
    printf("A quantidade seria de: %.2f", quantidade_de_caixas);
}