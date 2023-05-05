/*Escreva um código que abre o arquivo "teste.txt" em modo somente leitura.
Trate também a possibilidade de erro na abertura.*/

#include <stdio.h>

int main()
{
    FILE *f;
    f = fopen("teste.txt", "r");
    if (f == 0)
    {
        printf("erro abrindo arquivo");
        exit(1);
    }
}