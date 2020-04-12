/*
 * ejrcC_clase2.c: Ingreso 5 productos, hay dos tipos "a" y tipo "b" ,
 * necesito saber si el promedio de precios de los de tipo "a"
 * es mayor o menor o igual al de promedio de precios de tipo "b" *
 *  Created on: 2 abr. 2020
 *  Author: mdangelo
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>

#include "ejrcC_clase2.h"

#define TOP 5
#define PROD_1 'A'
#define PROD_2 'B'

void ejrcCClase2(){
	int i;
	float fMax; //NI maximos Ni minimos se inicializan
	float fPromA=0;
	float fPromB=0;

	char cProdTp;
	float fPrc;

	for(i=0;i<TOP;i++){
		printf("Ingrese tipo de producto (A|B validos): ");
		scanf("%c",&cProdTp);
		cProdTp = toupper(cProdTp);
		printf("Ingrese el precio de ese producto: ");
		scanf("%f", &fPrc);

		if(PROD_1==cProdTp){
			fPromA += fPrc;
		}else if(PROD_2==cProdTp){
			fPromB += fPrc;
		}
		__fpurge(stdin);
	}
	if(fPromA > fPromB){
		printf("El promedio de los precios de los pructos A fue mayor con un valor de: %.2f\n", (float)fPromA/i);
	}else if(fPromB>fPromA){
		printf("El promedio de los precios de los pructos B fue mayor con un valor de: %.2f\n", (float)fPromB/i);
	}else{
		printf("El promedio de los precios de los pructos A y B son iguales con un valor de: %.2f\n", (float)fPromB/i);
	}

}
