/*
Link:https://www.thehuxley.com/problem/1078?quizId=7853
Descrição
Você deve ajudar seu professor a descobrir qual a situação dos alunos de uma turma. Faça um programa que recebe como entrada 3 notas do usuário, calcula a média do aluno naquele semestre e, em seguida, informa a situação do aluno:

"Aprovado", se a média estiver no intervalo [70; 100]
"Reprovado", se a média estiver no intervalo [0; 40] 
"Final", se a média estiver no intervalo (40; 70).
"Média inválida" em qualquer outro caso.
Formato de entrada

Três notas (inteiros) em sequência com os valores de 0 a 100.

Formato de saída

Uma frase que informa a situação do aluno na disciplina e sua média no seguinte formato (sem acentos):

"A media do aluno foi 70.0 e ele foi APROVADO" (A saída deve ter aproximação de 2 casas decimais)

Nas seguinte condições:

"Aprovado", se a média estiver no intervalo [70; 100]
"Reprovado", se a média estiver no intervalo [0; 40] 
"Final", se a média estiver no intervalo (40; 70).
ou

"Media invalida" se as notas não compuserem uma média válida.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    double n1,n2,n3;
    double m;
    scanf ("%lf %lf %lf", &n1, &n2, &n3);
    m = (n1+n2+n3)/3;
    //printf("%lf",m);
    if (m>=70.0 && m<=100.0)
    {
        printf("A media do aluno foi %.2lf e ele foi APROVADO",m);
    }
    else if (m>=0.0 && m<=40.0)
    {
        printf("A media do aluno foi %.2lf e ele foi REPROVADO",m);
    }
    else if(m>40.0 && m<70.0)
    {
        printf("A media do aluno foi %.2lf e ele foi FINAL",m);
    }
    else{
        printf("Media invalida");
    }

	return 0;
}
