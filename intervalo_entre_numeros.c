#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Faça um programa em C que receba um número e mostre o intervalo de 1 até o 
número digitado. */

main() { 

    setlocale(LC_ALL, "Portuguese");
    
    int num, i;
    
    printf ("Digite um número: ");
    scanf ("%d", &num);
    
    for (i=1; i<=num; i++) {
    	
    	printf ("%d ", i);
    	
	}