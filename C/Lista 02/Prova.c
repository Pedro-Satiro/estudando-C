#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int idade,adotando,ok1,c,ok2,ok3,ok4,ok5,ok6,sok;
    char p1,p2,p3,p4,p5, p6;
    scanf("%d", &idade);
    scanf(" %c", &p1);
    scanf(" %c", &p2);
    scanf(" %c", &p3);
    scanf("%d", &adotando);
    scanf(" %c", &p4);
    scanf(" %c", &p5);
    scanf(" %c", &p6);
    c = idade-adotando;


// A Idade do Adotante
    if (idade<18){
        ok1=0;
    } else if (idade>=18){
        ok1 =1;
    }
// Se o adotante ? irm?o ou ascendente
    if (p1 =="S"){
        ok2=0;
    } else if (p1 =="N"){
        ok2=1;
    }
//Se ? Ado??o Conjunta
    if (p2 =="N"){
        ok3=1;
    } else if (p2 =="S"){
        if(p3 == "N"){
            ok3=0;
        }else{
            ok3=1;
        }
    }
//Idade do Adotando
    if (c<16){
        ok4=0;
    } else if (idade>=18){
        ok4=1;
    }
//Pais Desconhecidos ou Adotando Destitu?do do Poder Familiar?
    if (p4 =="S"){
        ok5=1;
    } else if (p4 == "N"){
        if (p5 == "S"){
            ok5=1;
        }else{
           ok5=0; 
        }
    }
//Consentimento do adotando maior de doze anos de idade
    if(adotando<12){
        ok6=1;
    } else if (adotando>=12){
        if (p6 == "S"){
            ok6=1;
        } else if (p6 == "N")
        ok6=0;
    }
    sok = ok1+ok2+ok3+ok4+ok5+ok6;
    
    if(sok==6 ){
        printf("Pode adotar");
    }else {
        printf("Nao pode adotar");
    }
	return 0;
}