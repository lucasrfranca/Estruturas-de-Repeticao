#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Ler 80 números e ao final informar quantos números estão no intervalo entre 10 e 150 
(inclusive). */

main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	int i, num, quant=0; 

    for(i=1; i<=80; i++) {
    	
    	printf ("Digite um número: ", i);
    	scanf ("%d", &num);
    	
    	if (num>=10 && num<=150) {
		
		quant++;
		
	    }
    	
    }
    
    printf ("\n");
    printf ("A quantidade de números entre 10 é 150 é: %d", quant);
    	
}