//Cálculo da Diferença Entre Duas Datas

#include <stdio.h>
#include <time.h>

int main() {
    struct tm data1 = {0}, data2 = {0};
    time_t t1, t2;
    double diferenca;
    
    data1.tm_year = 2023 - 1900; // Ano (desde 1900)
    data1.tm_mon = 4 - 1;  // Mês (0-11)
    data1.tm_mday = 10; // Dia
    
    data2.tm_year = 2023 - 1900;
    data2.tm_mon = 4 - 1;
    data2.tm_mday = 15;
    
    t1 = mktime(&data1);
    t2 = mktime(&data2);
    
    diferenca = difftime(t2, t1) / (60 * 60 * 24); // Converte para dias
    printf("Diferença entre as datas: %.0f dias\n", diferenca);
    return 0;
}