#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>
int main(){
    double raio, area;
    printf("Qual o valor do raio?\n");
    scanf("%lf",&raio);
    area = M_PI * pow(raio, 2);
    printf("O valor da area: %.2f", area);
}