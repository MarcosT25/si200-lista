//author: Marcos Takahashi
//school: Universidade Estadual de Campinas

#include <stdio.h>

void main() {
    char title[52];
    char text[202];
    printf("Digite o título: ");
    gets(title);
    printf("Digite o texto: ");
    gets(text);
    FILE *fp;
    fp = fopen("exercicio_3.txt", "a");
    fprintf(fp, "%s; %s", title, text);
    fclose(fp);
}