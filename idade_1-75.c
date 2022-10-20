#include <stdio.h>
#include <stdlib.h>

/* Faça um programa em C que receba a idade de 75 pessoas e mostre mensagem 
informando “maior de idade” e “menor de idade” para cada pessoa. Considere a idade 
a partir de 18 anos como maior de idade. */

main() {
	
	int i, idade;
	
	for (i=1; i<=75; i++) {
		
		printf ("Digite a sua idade: ", i);
		scanf ("%d", &idade);
		
		if (idade>=18) {
			
			printf ("\n");
			printf ("maior de idade\n");
			printf ("------------------------------\n");
			
		}
		
		else {
			
			printf ("\n");
			printf ("menor de idade\n");
			printf ("------------------------------\n");
			
		}
		
	}
	
}