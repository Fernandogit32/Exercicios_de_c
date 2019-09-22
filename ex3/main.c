#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n =0;
    int fat=0;
    printf("Entre com o fatoreal");
  scanf("%d", &n) ;

  for(fat = 1; n > 1; n = n - 1)
  {

      fat = fat * n;

  }

  printf("\n%d", fat);

    return 0;
}
