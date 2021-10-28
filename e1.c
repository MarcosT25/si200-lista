//author: Marcos Takahashi
//school: Universidade Estadual de Campinas

#include <stdio.h>

void main() {
    FILE *fp;
    fp = fopen("arquivo_base.txt", "r");
    char c;
    int count = 0;
    while (!feof(fp)) {
        c = fgetc(fp);
        count++;
    }
    fclose(fp);
    fp = fopen("arquivo_base.txt", "a");
    fprintf(fp, "\n%d", count);
    printf("O número de carcteres é: %d\n", count);
}