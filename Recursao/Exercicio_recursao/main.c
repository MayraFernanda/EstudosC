#include <stdio.h>
#include <stdlib.h>

int main()
{
    //46.	Faça uma função em C que, recebendo como parâmetro um
    //único número inteiro, resulta 1, caso o mesmo seja negativo,
    //ou 0, caso contrário.

    int num = 0;

    printf("Insira um numero:\n");
    scanf("%d", &num);

    if(num >= 1)
        printf("1");
    else
        printf("0");
    return 0;
}
