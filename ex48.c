#include <stdio.h>
int main(){
    float avaliacao1, avaliacao2, opcional, media;
    printf("Insira a primeira avaliacao:\n");
    scanf("%f",&avaliacao1);
    printf("Insira a segunda avaliacao:\n");
    scanf("%f",&avaliacao2);
    printf("Insira a avaliacao opcional:\n");
    scanf("%f",&opcional);
    if (opcional > 0 && opcional > avaliacao1)
        media=(avaliacao1+opcional)/2;
    else if (opcional > 0 && opcional > avaliacao2)
        media=(avaliacao2+opcional)/2;
    else
        opcional=-1;
        media=(avaliacao1+avaliacao2+opcional)/3;
    printf("A media e: %.2f\n", media);
    if (media>=6.0)
        printf("Aprovado\n");
    else if (media>=3 && media<6.0)
        printf("Exame\n");
    else
        printf("Reprovado\n");
}