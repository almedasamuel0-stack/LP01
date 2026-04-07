#include <stdio.h>
int main(){
    float Celsius, Fahrenheit;
    printf("Coloque a temperatura em Fahrenheit:\n");
    scanf("%f", &Fahrenheit);
    Celsius = 5*(Fahrenheit - 32) / 9;
    printf("A temperatura em Celsius é: %.2f\n", Celsius);
}
