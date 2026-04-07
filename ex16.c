#include <stdio.h>
int main (){
    float n1, n2, n3;
    float Media_Final;
    printf("Qual o primeiro valor?\n");
    scanf("%f",&n1);
    printf("Qual o segundo valor?\n");
    scanf("%f",&n2);
    printf("Qual o terceiro valor?\n");
    scanf("%f",&n3);
    Media_Final=(n1*2+n2*3+n3*5)/10;
    printf("A media final: %.2f", Media_Final);
}