#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
// A fun��o � void pois como s� precisar scanear os arrays e estes se comportam como ponteiros o valor � automaticamente passado
int checagem(int programas[7], int linhas[7], int contador, int resposta[3], int maisProduziu) {
    if (contador >= 7) {
        return;
    }
    scanf("%d %d", &programas[contador], &linhas[contador]);
    if (programas[contador] >= 5) {
        resposta[0]++;
    }
    if (linhas[contador] >= 100) {
        resposta[1]++;
    }
    if (linhas[contador] > maisProduziu) {
        maisProduziu = linhas[contador];
        resposta[2] = contador;  
    }
    contador++;
    return checagem(programas, linhas, contador, resposta, maisProduziu);
}

int main() {
    int programas[7], linhas[7], contador = 0, resposta[3] = {0, 0, 0};
    char diaSemana[10];
    checagem(programas, linhas, contador, resposta, 0);
    // printf("%d %d %d", resposta[0], resposta[1], resposta[2]);
    int dia = resposta[2];
    if (dia == 0) {
        strcpy(diaSemana, "DOMINGO");
    } else if (dia == 1) {
        strcpy(diaSemana, "SEGUNDA");
    } else if (dia == 2) {
        strcpy(diaSemana, "TERCA");
    } else if (dia == 3) {
        strcpy(diaSemana, "QUARTA");
    } else if (dia == 4) {
        strcpy(diaSemana, "QUINTA");
    } else if (dia == 5) {
        strcpy(diaSemana, "SEXTA");
    } else {
        strcpy(diaSemana, "SABADO");
    }
    printf("QUANTIDADE DE DIAS QUE ATINGIU MEDIA DE PROGRAMAS: %d\n", resposta[0]);
    printf("QUANTIDADE DE DIAS QUE ATINGIU MEDIA DE LINHAS: %d\n", resposta[1]);
    printf("DIA QUE MAIS PRODUZIU: %s", diaSemana);
    return 0;
}