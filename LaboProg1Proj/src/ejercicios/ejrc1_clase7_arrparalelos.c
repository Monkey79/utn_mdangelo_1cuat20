/*
 * ejrc1_clase7_arrparalelos.c
 *  Created on: 21 abr. 2020
 *  Author: mdangelo
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>

#include "ejrc1_clase7_arrparalelos.h"

#define ALUMNOS 3

#define LIBRE 0
#define OCUPADO 1

#define FALSE 0;
#define TRUE 1;


void _altaAlumno(int *plegajoArr, int *pNota1Arr, int *pNota2Arr, float *pPromedioArr, char nombres[][20], int *pEstadoArr);
void _inicializarEstadoArr(int *estado);
int _damePosLibre(int *pEstadoArr);

void _guardarDato(int *pIntArr, char *pMssg, int iIndx);
void _guardarDatoStr(char *pNomb, char *pMssg);
void _calcularGuardarPromedio(float *pPrmArr, int iPsLbr, int iN1, int iN2);

void _mostrarAlumnos(int *pLegajoArr, int *pNota1Arr, int *pNota2Arr, float *pPromedioArr, char nombres[][20], int *pEstadoArr);




void startEjrc1Clase7ArrParl(void) {
	int legajo[ALUMNOS];
	int nota1[ALUMNOS];
	int nota2[ALUMNOS];
	float promedio[ALUMNOS];
	char nombres[ALUMNOS][20];
	int estado[ALUMNOS];
	int i;

	_altaAlumno(legajo, nota1, nota2, promedio, nombres, estado);
}

void _altaAlumno(int *plegajoArr, int *pNota1Arr, int *pNota2Arr, float *pPromedioArr, char nombres[][20], int *pEstadoArr) {
	_inicializarEstadoArr(pEstadoArr);
	int iCnt = 0;
	int iPosLbr;

	while (iCnt < ALUMNOS - 1) {
		iPosLbr = _damePosLibre(pEstadoArr);

		if (iPosLbr != -1) {
			_guardarDato(plegajoArr, "\nIngrese legajo: ", iPosLbr);
			_guardarDato(pNota1Arr, "\nIngrese nota 1: ", iPosLbr);
			_guardarDato(pNota2Arr, "\nIngrese nota 2: ", iPosLbr);
			_guardarDatoStr(nombres[iPosLbr], "\nIngrese nombre del alumno: ");

			_calcularGuardarPromedio(pPromedioArr, iPosLbr, *(pNota1Arr+iPosLbr), *(pNota2Arr+iPosLbr));
			*(pEstadoArr + iPosLbr) = OCUPADO;

			iCnt++;
		} else {
			printf("==NO hay espacio disponible==");
		}
	}
	_mostrarAlumnos(plegajoArr, pNota1Arr, pNota2Arr, pPromedioArr, nombres, pEstadoArr);
}

void _inicializarEstadoArr(int *estado) {
	for (int i = 0; i < ALUMNOS - 1; i++) {
		*(estado + i) = LIBRE;
	}
}

int _damePosLibre(int *pEstadoArr) {
	int iLibre = -1;
	int bNoLibre = TRUE
	;
	int i = 0;
	do {
		bNoLibre = *(pEstadoArr + i) != LIBRE;
		i++;

	} while (bNoLibre && i < ALUMNOS);
	iLibre = (bNoLibre) ? iLibre : (i - 1);
	return iLibre;
}

void _guardarDato(int *pIntArr, char *pMssg, int iIndx) {
	printf(pMssg);
	scanf("%d", (pIntArr + iIndx));
	__fpurge(stdin);
}
void _guardarDatoStr(char *pNomb, char *pMssg) {
	printf(pMssg);
	scanf("%s", pNomb);
	__fpurge(stdin);
}

void _calcularGuardarPromedio(float *pPrmArr, int iPsLbr, int iN1, int iN2) {
	float promedio = (float) (iN1 + iN2) / 2;
	printf("=promedio %.2f=\n",promedio);
	*(pPrmArr + iPsLbr) = promedio;
}

void _mostrarAlumnos(int *pLegajoArr, int *pNota1Arr, int *pNota2Arr, float *pPromedioArr, char nombres[][20], int *pEstadoArr) {
	for (int i = 0; i < ALUMNOS - 1; i++) {
		if (*(pEstadoArr + i) == OCUPADO) {
			printf("=====Mostrando alumno cargado====\n");
			printf("-Legajo: %d\n", *(pLegajoArr + i));
			printf("-Nota 1: %d\n", *(pNota1Arr + i));
			printf("-Nota 2: %d\n", *(pNota2Arr + i));
			printf("-Promedio : %f\n", *(pPromedioArr + i));
			printf("-Nombre : %s\n", nombres[i]);
		}
	}
}


