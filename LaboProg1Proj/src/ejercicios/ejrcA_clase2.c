/*
 * ejrcA_clase2.c: Ingreso 5 productos, hay dos tipos "a" y tipo "b" ,
 * necesito saber el precio más caro y el promedio de precios
 *  Created on: 1 abr. 2020
 *  Author: mdangelo
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>

#include "ejrcA_clase2.h"

#define TOP 5
#define PROD_1 'A'

void ejrcAClase2(){
	int i;
	float fMax; //NI maximos Ni minimos se inicializan
	float fProm=0;

	char cProdTp;
	float fPrc;

	for(i=0;i<TOP;i++){
		printf("Ingrese tipo de producto (A|B validos): ");
		scanf("%c",&cProdTp);
		cProdTp = toupper(cProdTp);
		printf("Ingrese el precio de ese producto: ");
		scanf("%f", &fPrc);

		if(PROD_1==cProdTp){
			if(i==0){
				fMax = fPrc;
			}else if(fPrc > fMax){
				fMax = fPrc;
			}
		}
		fProm += fPrc;

		__fpurge(stdin);
	}

	printf("El precio maximo fue: %.2f\n", fMax);
	printf("El promedio de los precios de los pructos es: %.2f\n", (float)fProm/i);
}

