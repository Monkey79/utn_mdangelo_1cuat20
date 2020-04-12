/*
 * ejrcB_clase2.c
 * Ingreso 5 productos, hay dos tipos "a" y tipo "b" ,
 * necesito saber el promedio de precios de los productos tipo "a" *
 * Created on: 2 abr. 2020
 * Author: mdangelo
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>

#include "ejrcB_clase2.h"


#define TOP 5
#define PROD_1 'A'

void ejrcBClase2(){
	int i;
	float fMax; //NI maximos Ni minimos se inicializan
	float fPromA=0;

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
		}
		__fpurge(stdin);
	}
	printf("El promedio de los precios de los pructos A es: %.2f\n", (float)fPromA/i);
}


