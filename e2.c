//author: Marcos Takahashi
//school: Universidade Estadual de Campinas

#include <stdio.h>

void main() {
    FILE *fp;
    fp = fopen("arquivo_base.txt", "r");
    char c;
    int count = 0;
    char vowel_list[10] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    int vowel_ascii[10];
    for (int i = 0; i < 10; i++) {
        vowel_ascii[i] = vowel_list[i];
    }
    while (!feof(fp)) {
        c = fgetc(fp);
        for (int i = 0; i < 10; i++) {
            if (c == vowel_ascii[i]) {
                count++;
                break;
            }
        }
    }
    fclose(fp);
    printf("O número de vogais é: %d\n", count);
}