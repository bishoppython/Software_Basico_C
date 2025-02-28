/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>

// Função auxiliar para somar dois números
float soma(float a, float b) {
    return a + b;
}

int main() {
    float num1, num2, resultado;
    
    // Entrada de dados
    printf("Digite dois números: ");
    scanf("%f %f", &num1, &num2);
    
    // Operações matemáticas
    resultado = soma(num1, num2);
    printf("Soma: %.2f\n", resultado);
    
    resultado = num1 - num2;
    printf("Subtração: %.2f\n", resultado);
    
    resultado = num1 * num2;
    printf("Multiplicação: %.2f\n", resultado);
    
    if (num2 != 0) {
        resultado = num1 / num2;
        printf("Divisão: %.2f\n", resultado);
    } else {
        printf("Divisão por zero não permitida!\n");
    }
    
    return 0;
}
