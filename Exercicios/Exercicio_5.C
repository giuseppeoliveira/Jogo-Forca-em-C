/*
    Escreva uma função soma que recebe um array de inteiros e o
    tamanho do array, e retorna a soma dos números desse array.

    int nums[3];
    nums[0] = 10;
    nums[1] = 20;
    nums[2] = 30;

    int total = soma(nums, 3);

    Repare no código acima que arrays são por natureza ponteiros,
    então podemos passá-los diretamente, sem o uso de &.
*/


#include <stdio.h>


int soma(int* nums, int tam) {
    int total = 0;

    for (int i = 0; i < tam; i++)
    {
        total =+ nums[i];
    }
    return total;
}
