#include <stdio.h>
#include <stdlib.h>

int main()
{
    int positivo=0;
    int negativo=0;
    int nulo=0;
    int numero=0;

    for(int i=1;i<=20;i++){

        printf("Digite o %dº numero", i);
        scanf ("%d",& numero);

        if(numero>0){
            positivo++;
        }else if(numero<0){
            negativo++;
        }else {
            nulo++;
        }

    }

        printf("Quantidade de numeros positivos %d Quantidade de numeros negativos %d Quantidade de numeros nulos %d",positivo,negativo,nulo
               );

    return 0;
}
