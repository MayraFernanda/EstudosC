#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Aluno{
    char ra [5];
    char nome [50];
};
int main()
{

    struct Aluno aluno;

    strcpy(aluno.ra,  "14189");
    strcpy(aluno.nome,  "Mayra Fernanda");
    printf("Ra: %s\n", aluno.ra);
    printf("Nome: %s", aluno.nome);

    return 0;
}
