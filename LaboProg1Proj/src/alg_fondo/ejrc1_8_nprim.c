/*
 * ejrc1_8_nprim.c
 *	Dato ingrese de un numero entero positivo decir si es primo o no.
 *  Created on: 3 abr. 2020
 *  Author: monkey
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>

#include "ejrc1_8_nprim.h"

#define TRUE 1
#define FALSE 0

void esPrimo(){
	int iNum=0;
	int iCont=2;
	int esPrimo = TRUE;

	printf("Ingrese el numero: ");
	scanf("%d",&iNum);
	__fpurge(stdin);

	if(iNum > iCont){
		while(esPrimo && iCont<iNum){
			esPrimo = ((iNum % iCont)!=0)?TRUE:FALSE;
			iCont++;
		}
	}else{
		printf("El numero %d no es un numero primo!!\n", iNum);
	}

	if(esPrimo == TRUE)
		printf("El numero %d es un numero primo!!\n", iNum);
	else
		printf("El numero %d NO es un numero primo!!\n", iNum);
}


