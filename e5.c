//author: Marcos Takahashi
//school: Universidade Estadual de Campinas

#include <stdio.h>

void main() {
    char line[102];
    int count = 0;
    FILE *fp;
    fp = fopen("arquivo_linhas.txt", "r");
    while (!feof(fp)) {
        fgets(line, 100, fp);
        count++;
    }
    printf("O número de linhas do arquivo é: %d\n", count);
}