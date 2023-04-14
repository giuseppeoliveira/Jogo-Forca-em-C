//Escreva uma função soma que recebe um ponteiro de inteiro num
//e mais dois inteiros a e b. A função deve calcular a soma de a+b em num.


#include <stdio.h>

void soma(int* num, int a, int b) {
    *num = a + b;
}

//---------------------------------------------------------------------------------//
void potencia(int* resultado, int a, int b) {
    *resultado = 1;
    for(int i = 0; i < b; i++) {
        *resultado = *resultado * a;
    }
}




//---------------------------------------------------------------------------------//

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
//---------------------------------------------------------------------------------//
