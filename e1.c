//author: Marcos Takahashi
//school: Universidade Estadual de Campinas

#include <stdio.h>

void main() {
    FILE *fp;
    fp = fopen("arquivo_base.txt", "r");
    char c;
    char space = ' ';
    int space_ascii = space;
    int count = 0;
    c = fgetc(fp);
    while (!feof(fp)) { 
        if (c != space_ascii) {
            count++;  
        }
        c = fgetc(fp);
    }
    fclose(fp);
    fp = fopen("arquivo_base.txt", "a");
    fprintf(fp, "\n%d", count);
    printf("O número de carcteres é: %d\n", count);
    fclose(fp);
}