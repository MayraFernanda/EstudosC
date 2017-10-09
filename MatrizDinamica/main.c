#include <stdio.h>
#include <stdlib.h>

int main()
{
    int **m;

    m = (int**)malloc(3*sizeof(int*));
    int i = 0;
    for(i, i< 3; i++){
        *(m+i) = (int*)malloc(3*sizeof(int));
    }

    return 0;
}
