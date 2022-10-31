#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int valor1,valor2,valor3,valor4;
    int a1,b1,c1,d1, media;
    char l1,l2,l3,l4;
    double fator;
    double z,x,c,v;

    scanf("%d %d %d %d\n", &valor1, &valor2, &valor3, &valor4);
    scanf("%c %c %c %c\n", &l1, &l2, &l3, &l4);
    scanf("%d %d %d %d", &a1, &b1, &c1, &d1);


    media = (valor1+valor2+valor3+valor4)/4;
    if(media<=10){
        fator=0.4;
    }else if (media<=30){
        fator=0.6;
    }else if (media<=60){
        fator=0.8;
    }else {
        fator=1.0;
    }
     
    if(l1=='a'){
        z = a1;
    } else if (l1=='b'){
        z = b1;
    }else if (l1=='c'){
        z = c1;
    }else if (l1=='d'){
        z = d1;
    }
    

    if(l2=='a'){
        x= a1;
    } else if (l2=='b'){
        x= b1;
    }else if (l2=='c'){
        x= c1;
    }else if (l2=='d'){
        x= d1;
    }

    if(l3=='a'){
        c= a1;
    } else if (l3=='b'){
        c= b1;
    }else if (l3=="c"){
        c= c1;
    }else if (l3=='d'){
        c= d1;
    }
    
    if(l4=='a'){
        v= a1;
    } else if (l4=='b'){
        v= b1;
    }else if (l4=='c'){
        v= c1;
    }else if (l4=='d'){
        v= d1;
    }
    z= valor1+z+(z*fator);
    x= valor2+x+(x*fator);
    c= valor3+c+(c*fator);
    v= valor4+v+(v*fator);

//caso z seja o menor
    if(z<x && z<c && z<v ){
        printf("Anderson quem vai pagar o lanche!:D");
    } else if (x<z && x<c && x<v){
        printf("Guilherme quem vai pagar o lanche!:D");
    } else if (c<z && c<x && c<v){
        printf("Rita quem vai pagar o lanche!:D");
    } else {
        printf("Higor quem vai pagar o lanche!:D");
    }

	return 0;
}