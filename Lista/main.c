#include <stdio.h>
#include <stdlib.h>

struct No{
    int info;
    struct No* prox;
};

struct No* inserir(struct No*, int num){
    if (Inicio == NULL){
        //Alocar memoria
        struct No* Novo = (struct No*)malloc(sizeof(struct No))
        Novo->info = num;
        Novo->prox = null;
        return Novo;
    }
    else{
        if(num<Inicio->Info)
    }
}

int main()
{

    return 0;
}
