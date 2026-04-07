#include <stdio.h>
int main () {
    float brancos, nulos, validos;
    float b1, n1, v1, total;
    printf("Quantos votos brancos?\n");
    scanf("%f", &brancos);
    printf("Quantos votos nulos?\n");
    scanf("%f",&nulos);
    printf("Quantos votos validos?\n");
    scanf("%f", &validos);
    total=brancos+nulos+validos;
    if (total>0){
        b1=(brancos/total)*100;
        n1=(nulos/total)*100;
        v1=(validos/total)*100;
        printf("O percentual de votos foi de %.2f para brancos\n", b1);
        printf("O percentual de votos nulos foi de %.2f para nulos\n",n1);
        printf("O percentual de votos validos foi de %.2f para validos\n",v1);
        printf("O total de votos foi de %.2f para o total\n", total);
    }
    else
        printf("O total de votos deve ser maior que zero.");
}