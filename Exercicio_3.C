#include <stdio.h>

void soma(int numeros[10]) {
    int i, soma = 0;
    for (i = 0; i < 10; i++) {
        soma += numeros[i];
    }
    printf("A soma dos elementos do array é %d\n", soma);
}

int main() {
    int numeros[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    soma(numeros);
    return 0;
}
