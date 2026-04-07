#include <stdio.h>
int main() {
  float media1, conv;
  printf("Qual o valor em metros?\n");
  scanf("%f",&media1);
  conv = 100*media1; 
  printf("O valor em centimetros %.2f", conv);
}