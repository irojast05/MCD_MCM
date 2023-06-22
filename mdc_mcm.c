#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int a, b, ma, i, mcd, mcm;
	system("cls");
	printf("Ingresa dos numeros enteros:\n");
	scanf("%d %d", &a, &b);
	if(a<b){
		ma = b;
	}else{
		ma = a;
	}
	for(i=1; i<ma; i++){
		if(a%i==0 && b%i==0){
			mcd = i;
		}
	}
	mcm = (a*b)/mcd;
	printf("\nEl Maximo Comun Divisor de %d y %d es %d\n", a, b, mcd);
	printf("El Minimo Comun Multiplo de %d y %d es %d\n", a, b, mcm);
	printf("\nFin del programa.");
	return 0;
}
