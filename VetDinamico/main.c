#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *vet;

    vet = (int*)malloc(3*sizeof(int));
    *(vet) = 1;
    *(vet+1) = 2;
    vet[2] = 3;


    printf("0: %d\n", vet[0]);
    printf("1: %d\n", vet[1]);
    printf("2: %d\n", vet[2]);

    free(vet);
    return 0;
}
