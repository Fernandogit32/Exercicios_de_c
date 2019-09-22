#include <stdio.h>
#include <stdlib.h>

int main()
{
    float numero=0;
    float maior=0;
    float menor=0;

    printf("Digite o 1º valor \n");
    scanf("%f",& numero);
    menor=numero;
    maior=numero;
    for(int i=1;i<=19;i++){

        printf("Digite o %dº valor \n", i+1);
        scanf("%f",& numero);

        if(numero>maior){
            maior=numero;
        }
        if(numero<menor){
            menor=numero;
        }


    }

    printf("O maior numero lido é %f e o menor numero lido é %f",maior,menor);
    return 0;
}
