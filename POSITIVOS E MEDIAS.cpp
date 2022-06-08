#include<stdio.h>
int main(){
	int cont = 0, cont1 =0;
	float media, i, soma=0;
	
	while(cont < 6){
		scanf("%f",&i);
		if(i>0){
			cont1++;
			soma += i;
		}
	cont++;
	}
	media = soma/cont1;
	printf("%d valores postivos",cont1);
	printf("\n%.1f\n",media);
	return 0;
}
