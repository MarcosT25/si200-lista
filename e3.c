//author: Marcos Takahashi
//school: Universidade Estadual de Campinas

#include <stdio.h>
#include <string.h>

void main() {
    char title[52];
    char text[202];
    printf("Digite o título do arquivo de texto sem a extensão(.txt): ");
    gets(title);
    printf("Digite o texto: ");
    gets(text);
    FILE *fp;
    strcat(title, ".txt");
    fp = fopen(title, "a");
    fprintf(fp, "%s", text);
    fclose(fp);
}