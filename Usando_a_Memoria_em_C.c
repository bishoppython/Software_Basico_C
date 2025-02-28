/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main() {
    int var = 10;
    int *ptr = &var; // Ponteiro armazenando o endereço de 'var'

    printf("Valor da variável: %d\n", var);
    printf("Endereço da variável: %p\n", &var);
    printf("Valor armazenado no ponteiro: %p\n", ptr);
    printf("Valor acessado pelo ponteiro: %d\n", *ptr);

    return 0;
}
