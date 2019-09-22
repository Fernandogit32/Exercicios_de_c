#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cont=0;
    int numero=0;

    for(int i=1;i<=20;i++){

        printf("Digite o %dº numero",i);
        scanf("%d",& numero);

        if(numero %2==0){
            cont = cont+5;

        }


    }

        printf("O percentual de numeros pares são %d %%  ",cont);
    return 0;
}
