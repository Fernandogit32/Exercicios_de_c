#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cont=0;

    for(int i=1000;i<=2000;i++){

        if(i%7==0){

            cont++;
        }

    }

    printf("A quantidade de numeros que sao divisiveis por 7 %d",cont);


    return 0;
}
