#include <stdio.h>
#include <stdlib.h>

int main()
{
    //46.	Fa�a uma fun��o em C que, recebendo como par�metro um
    //�nico n�mero inteiro, resulta 1, caso o mesmo seja negativo,
    //ou 0, caso contr�rio.

    int num = 0;

    printf("Insira um numero:\n");
    scanf("%d", &num);

    if(num >= 1)
        printf("1");
    else
        printf("0");
    return 0;
}
