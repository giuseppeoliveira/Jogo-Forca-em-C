Escreva uma função potencia() que receba dois inteiros, a e b, calcule a potência a^b, 
ou seja, a elevado a b e imprima o resultado.

void potencia(int a, int b) {
    int resultado = 1;
    for(int i = 0; i < b; i++) {
        resultado = resultado * a;
    }

    printf("O resultado é %d", resultado);
}


