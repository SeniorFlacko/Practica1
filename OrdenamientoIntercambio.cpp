#include <stdio.h>
#include <stdlib.h>
#include "tiempo.h"
#include <time.h>  
void imprimirArreglo(int *a,int n);
void ordenamientoIntercambio(int *a,int n);
int main(int argc, char const *argv[])
{
	freopen("input50.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
	double utime0, stime0, wtime0,utime1, stime1, wtime1;
	int n;
	srand (time(NULL));
	while(scanf("%d",&n)!=EOF){
	printf("Con n = %d\n",n);
	printf("\n");
	int a[n];
	printf("El arreglo desordendo es:\n");
	for (int i=0; i<n; ++i)
		a[i]=rand()%100+1,printf(",%d ",a[i]);
	printf("\n");
	uswtime(&utime0, &stime0, &wtime0);
	ordenamientoIntercambio(a,n);
	uswtime(&utime1, &stime1, &wtime1);
	printf("El arreglo ordendo es:\n");
	imprimirArreglo(a,n);
	//
	printf("\n");
	printf("Cálculo del tiempo de ejecución del programa\n");
	printf("real (Tiempo total)  %.10f s\n",  wtime1 - wtime0);
	printf("\n");
	}
	return 0;
}
void ordenamientoIntercambio(int *a,int n){
	int temp;
	for (int i=0; i<n-1; i++)
		for (int j=i+1; j<n;j++)
			if (a[j] < a[i])
			{
				temp=a[i];
				a[ i ]=a[j];
				a[ j ]=temp;
			}
}

void imprimirArreglo(int *a,int n){
	for (int i = 0; i < n; ++i)
		printf(",%d ",a[i]);
	printf("\n");
}
