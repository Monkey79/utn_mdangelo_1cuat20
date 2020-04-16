/*
 *  ejerc1_clase2.c : Pedir dos numeros y realizar la suma, la resta, producto y promedio
 *  Created on: 1 abr. 2020
 *  Author: mdangelo
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>

#include "ejrc1_clase2.h"

void ejerc1Clase2(){
	int iNum1 = 01;
	int iNum2 = 0;

	int iSuma = 0;
	int iResta = 0;
	int iProd = 0;
	float fProm = 0;

	printf("Ingrese el primer numero: ");
	scanf("%d",&iNum1);
	printf("Ingrese el segundo numero: ");
	scanf("%d",&iNum2);

	iSuma = iNum1 + iNum2;
	iResta = iNum2 - iNum1;
	iProd = iNum1 * iNum2;
	fProm = (float)(iNum1 + iNum2) / 2;


	printf("La suma da=%d\n",iSuma);
	printf("La resta da=%d\n",iResta);
	printf("El producto da=%d\n",iProd);
	printf("El promedio de ambos numeros da=%.2f\n",fProm);

	__fpurge(stdin);
}

