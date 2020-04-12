/*
 *  ejrc2_13.c
 *	Se ingresa por consola un numero entero (sueldo de una persona)
 *	considerando que tenemos una serie de billes a pagar con las
 *	siguientes denominacion [100,50,20,10,5,2,1] indicar
 *	que cantidad de billetes de cada denominacion  se debera entregar
 *	al mpleado para pagar su sueldo.
 *  Created on: 7 abr. 2020
 *  Author: mdangelo
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>

#include "ejrc2_13.h"

#define TOP 8

void _pedirSueldo(int *pSldo);
void _mostrarBilletes(int iRslt, int iBllt);

void ejrc213Billetes() {
	int vcBilletes[8] = { 100, 50, 20, 10, 5, 2, 1 };
	int iSueldo;
	int iCociente;

	_pedirSueldo(&iSueldo);
	printf("puso:: %d\n", iSueldo);


	for (int i = 0; i < TOP-1; i++) {
		if (iSueldo >= vcBilletes[i]) {
			iCociente = iSueldo / vcBilletes[i];
			_mostrarBilletes(iCociente, vcBilletes[i]);
			iSueldo = iSueldo % vcBilletes[i];
		}
	}

}

void _pedirSueldo(int *pSldo) {
	do {
		printf("Ingrese el sueldo del empleado (numero entero): ");
		scanf("%d", pSldo);
		__fpurge(stdin);
	} while (*pSldo <= 0);
}
void _mostrarBilletes(int iRslt, int iBllt) {
	printf("La cantidad de billetes de %d son %d\n", iBllt, iRslt);
}

