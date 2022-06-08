#include<stdio.h>
int main(){
	int n, contador, resultado;
	contador = 1;
	scanf("%d",&n);
	while(contador < 11){
		resultado=contador*n;
		printf("%d x %d = %d\n",contador, n, resultado);
		contador++;
	}
	return 0;
}
