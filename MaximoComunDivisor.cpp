#include <stdio.h>
#include "tiempo.h"
int MaximoComunDivisor(int a, int b);
int main(int argc, char const *argv[])
{
	freopen("DatosAleatorios2.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
	double utime0, stime0, wtime0,utime1, stime1, wtime1;
	int a,b;
	while(scanf("%d%d",&a,&b)!=EOF){
		printf("|%d ,%d|\n",a,b);
		uswtime(&utime0, &stime0, &wtime0);
		printf("El maximo comun divisor es: %d\n",MaximoComunDivisor(a,b));
		uswtime(&utime1, &stime1, &wtime1);
		printf("Cálculo del tiempo de ejecución del programa\n");
		printf("real (Tiempo total)  %.10f s\n",  wtime1 - wtime0);
		printf("\n");
	}
	return 0;
}
int MaximoComunDivisor(int a, int b){
	int c;
	while (a!=b){
	if (a>b) a=a-b;
	else b=b-a;
	}
	c=a;
	return c;
}
