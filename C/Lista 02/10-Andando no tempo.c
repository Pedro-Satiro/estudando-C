/*
Link:https://thehuxley.com/problem/986?quizId=7853
Descrição
Imagine que você tenha uma máquina do tempo que pode ser usada no máximo três vezes, e a cada uso da máquina você pode escolher voltar para o passado ou ir para o futuro. A máquina possui três créditos fixos; cada crédito representa uma certa quantidade de anos, e pode ser usado para ir essa quantidade de anos para o passado ou para o futuro. Você pode fazer uma, duas ou três viagens, e cada um desses três créditos pode ser usado uma vez apenas. Por exemplo, se os créditos forem 5, 12 e 9, você poderia decidir fazer duas viagens: ir 5 anos para o futuro e, depois, voltar 9 anos para o passado. Dessa forma, você terminaria quatro anos no passado, em 2012. Também poderia fazer três viagens, todas indo para o futuro, usando os créditos em qualquer ordem, terminando em 2042.

Neste problema, dados os valores dos três créditos da máquina, seu programa deve dizer se é ou não possível viajar no tempo e voltar para o presente, fazendo pelo menos uma viagem e, no máximo, três viagens; sempre usando cada um dos três créditos no máximo uma vez.

Formato de entrada

A entrada consiste de uma linha contendo os valores dos três créditos A, B e C.

Formato de saída

Seu programa deve imprimir uma linha contendo o caracter “S” se é possível viajar e voltar para o presente, ou “N” caso contrário.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	int a, b, c, x;
	scanf("%d %d %d", &a, &b, &c);

	x = a - b == 0 || b-c == 0 || a-c == 0 || a == 0 || b == 0 || c == 0 || abs(a-b)-c == 0;
	if( x ){
		printf("S");
	} else{
		printf("N");
	}
	return 0;
}