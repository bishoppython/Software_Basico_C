#include <stdio.h>
#include <time.h>

int main() {
    time_t t;
    struct tm *info;
    char buffer[80];
    
    time(&t); // Obtém o tempo atual
    info = localtime(&t); // Converte para horário local
    strftime(buffer, 80, "%d/%m/%Y %H:%M:%S", info);
    // Formata a string
    
    printf("Data e Hora Atual: %s\n", buffer);
    return 0;
}