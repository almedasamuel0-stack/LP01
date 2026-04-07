#include <stdio.h>
int main(){
    float a1, a2, area;
    printf("Qual o valor 1?\n");
    scanf("%f",&a1);
    printf("Qual o valor 2\n");
    scanf("%f",&a2);
    area=(a1*a2)/2;
    printf("Tem como valor %.2f", area);
}