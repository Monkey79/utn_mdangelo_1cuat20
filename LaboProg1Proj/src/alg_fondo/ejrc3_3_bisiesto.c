/*
 * ejrc3_3_bisiesto.c
 * Se dispone de un conj de valores enteros que representan una fecha
 * expresados en formato aaaammdd. Se pide informar:
 * 	1-Cuantas fechas corresponden al mes de marzo
 * 	2-Cuantas fechas corresponden a años bisiestos
 * 	3-Verificar que si el dia=29 y mes=02 el año sea bisiesto. En caso
 * 	contrario informar el error y contabilizar el error para mostrarlo
 * 	al finalizar el proceso.
 * Created on: 9 abr. 2020
 * Author: mdangelo
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>

#include "ejrc3_3_bisiesto.h"
#include "../commons/utn_commons.h"

void _pedirFecha(long *pFecha);
void _revisarErrBis(int iMes, int iDia,int *pErrCnt);
void _continuar(char *cContinuar);
void _mostrarInformacion(int iMrzCnt, int iBisCnt, int iErrCnt);

void ejerc313Bisiesto(){
	int iMrzCnt = 0;
	int iBisCnt = 0;
	int iErrCnt = 0;

	long lFecha = 0;
	int iAnio = 0;
	int iMes = 0;
	int iDia = 0;

	char cContinuar='S';

	do{
		_pedirFecha(&lFecha);
		utnDecomposeDate(lFecha,&iAnio,&iMes,&iDia);
		if(iMes==03) iMrzCnt++;
		if(utnIsLeapYear(iAnio)){
			iBisCnt++;
			_revisarErrBis(iMes, iDia,&iErrCnt);
		}else{
			printf("==No es bisiesto===\n");
		}
		_continuar(&cContinuar);
	}while(cContinuar=='S');

	_mostrarInformacion(iMrzCnt, iBisCnt, iErrCnt);
}

void _pedirFecha(long *pFecha) {
	printf("Ingrese un entero de 8 digitos para la fecha (aaaammdd): ");
	scanf("%ld",pFecha);
	__fpurge(stdin);
}

void _revisarErrBis(int iMes, int iDia,int *pErrCnt) {
	if(iMes == 02 && iDia==29){
		*pErrCnt++;
		printf("Error!! El año es bisiesto pero el mes deberia ser Febrero y la cantidad de dias ser 29!!\n");
	}
}

void _continuar(char *cContinuar) {
	do{
		printf("Desea seguir cargando datos? (S | N): ");
		scanf("%c",cContinuar);
		*cContinuar = toupper(*cContinuar);
		__fpurge(stdin);
	}while(*cContinuar!='S' && *cContinuar!='N');
}

void _mostrarInformacion(int iMrzCnt, int iBisCnt, int iErrCnt){
	printf("==Cantidad mes marzo %d\n===", iMrzCnt);
	printf("==Cantidad años bisiestos %d\n===", iBisCnt);
	printf("==Cantidad errores por año bisiesto %d\n===", iBisCnt);
}

