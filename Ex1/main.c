#include <stdio.h>
#include <stdlib.h>

int main()
{   int qtd = 0;
    float soma=0;
    int valor=0;
    printf("Entre com o número de alunos da sala");
    scanf("%d",& qtd);


    for(int i=1;i<=qtd;i++){
       printf("Digite a media do %dº Aluno\n",i);
       scanf("%d",& valor);
       soma=soma+valor;
    }

    printf("Media da sala é %f", soma/qtd);

    return 0;
}
