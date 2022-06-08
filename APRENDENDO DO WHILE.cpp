#include<stdio.h>

int main(){
	int num, cont=0;
	float soma=0, media = 0;
	do{
		printf("\nEntre com um numero:");
		scanf("%d",&num);
		if(num>= 50 && num <= 100){
			cont++; // contando
			soma +=num; // soma = soma + num;
		}   // fim se
	}while(num !=0);
	media = soma/cont;
	printf("Contador do Intervalo:%d\n",cont);
	printf("Media dos valores:%.2f",media);
	return 0;
}
