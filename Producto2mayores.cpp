#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>  
#include "tiempo.h"
int producto2mayores(int *A,int n);
int main(int argc, char const *argv[])
{
	freopen("input50.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
	double utime0, stime0, wtime0,utime1, stime1, wtime1;
	int n;
	while(scanf("%d",&n)!=EOF){
		int A[n];
		memset(A,0,n);
		printf("Con n = %d:\n",n);
		printf("El arreglo es:\n");
		for (int i = 0; i < n; ++i) A[i]=rand()%100,printf(",%d",A[i]);
		printf("\n");
		uswtime(&utime0, &stime0, &wtime0);
		int producto = producto2mayores(A,n);
		printf("El producto de los mayores es: %d\n",producto);
		uswtime(&utime1, &stime1, &wtime1);
		//Cálculo del tiempo de ejecución del programa
		printf("Cálculo del tiempo de ejecución del programa\n");
		printf("real (Tiempo total)  %.10f s\n",  wtime1 - wtime0);
		printf("\n");
	}

	
	


	//******************************************************************
	return 0;
}
int producto2mayores(int *A,int n){
	int mayor1,mayor2;
	if (A[1]>A[2]){
		mayor1=A[1];
		mayor2=A[2];
	}
	else{
		mayor1=A[2];
		mayor2=A[1];
	}
	int i=3;
	while(i<=n){
		if (A[i]>mayor1){
		mayor2 = mayor1;
		mayor1 = A[i];
		}

		else if(A[i] > mayor2)
			mayor2 = A[i];
		
		i++;	
	}
	return mayor1 * mayor2;
}
