#include<stdio.h> //biblioteca principal
#include<locale.h>//biblioteca para se colocar acentos e caracteres especiais
#include<string.h>
#include<stdbool.h>


int main(){
	int idade, d,m,a,anoatual= 2021,mes=9,dia=6,n1;
	printf("Digite o dia que você nasceu");
	scanf("%d",&d);
		printf("Digite o dia que você nasceu");
	scanf("%d",&m);
		printf("Digite o dia que você nasceu");
	scanf("%d",&a);
		if(d > dia&& m>=mes){
			printf("voce ainda nao fez aniversario esse ano");
			n1 = anoatual - a;
			prinf("Voce tem %d",a);
		}

	
return 0;
}


