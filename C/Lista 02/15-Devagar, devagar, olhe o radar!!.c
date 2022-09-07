/*
Link:https://thehuxley.com/problem/564?quizId=7853
Descrição
O Getran resolveu instalar um radar no caminho entre a sua casa e a sua faculdade com o objetivo de limitar a velocidade dos carros em uma determinada via.

Mas resolveram inovar e a velocidade da via pode ser alterada diariamente. Por exemplo, nos feriados, eles geralmente colocam a velocidade máxima em 80Km/h. Já durante a semana, é comum que a velocidade máxima seja de 60km/h.

Para isso, placas digitais informam aos motoristas qual é a velocidade máxima naquele momento.

A tabela de penalizações para quem ultrapassar esse limite é:

Velocidade até 20% superior ao permitido: multa de R$ 85.13 e 4 pontos na carteira;
Velocidade maior que 20% e até 50% acima do permitido: multa de R$ 127.69 e 5 pontos na carteira;
Velocidade acima de 50% do permitido: multa de R$ 574.62 , 7 pontos na carteira, apreensão da carteira e suspensão do direito de dirigir.
 

Você irá receber a velocidade máxima da via, a velocidade do carro e deve calcular o valor da multa e quantos pontos na carteira o motorista perdeu, caso ele tenha ultrapassado o limite.

Formato de entrada

Dois números reais, separados por um final de linha, correspondendo à velocidade máxima da via e a velocidade do veículo.

Formato de saída

Você deve imprimir duas linhas.

A primeira contém o valor da multa e a segunda o número de pontos da carteira.

O valor da multa deve ser formatado com 2 casas decimais.

Caso o carro não ultrapasse a velocidade máxima, ainda assim você deve imprimir o valor da multa e o número de pontos da carteira, ou seja:

0.00

0


*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int pontos;
    double multa, velocmaxvia, veloveiculo;
    scanf("%lf %lf", &velocmaxvia, &veloveiculo);

    if (veloveiculo <= velocmaxvia) {
        multa = 0.00;
        pontos = 0;
    } else if (veloveiculo <= velocmaxvia*1.2) {
        multa = 85.13;
        pontos = 4;
    } else if (veloveiculo <= velocmaxvia*1.5){
        multa = 127.69;
        pontos = 5;
    } else {
        multa = 574.62;
        pontos = 7;
    } 
    
    printf("%.2lf", multa);
    printf("\n%d", pontos);

	return 0;
}