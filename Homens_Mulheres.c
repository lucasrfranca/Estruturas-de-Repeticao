#include <stdio.h>
#include <stdlib.h>

/* Escrever um programa em C que leia o nome e o sexo de 56 pessoas. No final informe total de homens e de mulheres. */

main() {
	
	int i, m=0, f=0;
	char nome[45], sexo;
	
	for (i=1; i<=56; i++) {
		
		printf ("Digite seu nome: ", i);
		gets (nome);
		printf ("Digite seu sexo [M/F]: ", i);
		scanf ("%c", &sexo);
		printf ("------------------------------\n");
		fflush(stdin);
		
		if (sexo=='m' || sexo=='M' ) {
			
			m++;
			
		}
		
		else if (sexo=='f' || sexo=='F') {
			
			f++;
			
	    }
	    
    }
    
    printf ("Total de homens = %d\n", m);
    printf ("Total de mulheres = %d", f);

}