//Escreva uma função soma que recebe um ponteiro de inteiro num
//e mais dois inteiros a e b. A função deve calcular a soma de a+b em num.

#include <stdio.h>

void calcula(int* c) {
    printf("calcula %d %d\n", (*c), c);
    (*c)++;
    printf("calcula %d %d\n", (*c), c);
}

int main() {

    int c = 10;

    printf("main %d %d\n", c, &c);
    calcula(&c);
    printf("main %d %d\n", c, &c);
}