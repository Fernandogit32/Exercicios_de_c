#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero=0;

    float result =0;
    for(int i=1;i<=20;i++){
        printf("Entre com o %dº valor  \n" ,i);
        scanf("%d",&numero);

        result= numero / 11;
        result = numero - (result * 11);
         if(result==3){
            printf("O resto do numero %d dividido por 11 é 3\n", numero);
         }


    }



    return 0;
}
