//author: Marcos Takahashi
//school: Universidade Estadual de Campinas

#include <stdio.h>

void main() {
    char file[52];
    printf("Digite o nome do arquivo: ");
    gets(file);
    FILE *fp;
    fp = fopen(file, "r");
    char string[52];
    while (!feof(fp)) {
        fscanf(fp, "%s", &string);
        printf("%s", string);
    }
    printf("\n");
    fclose(fp);
}