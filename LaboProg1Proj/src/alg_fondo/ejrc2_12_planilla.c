/*
 * ejrc2_12_planilla.c
 * Se tiene una planilla de alumnos con los resultados de un examen
 * con la siguiente informacion:
 * 	1-matricula (valor numerico de 8 digitos)
 * 	2-nota (valor numerico comprendido entre 1 y 10)
 * 	3-nombre (10 caracteres)
 * Se pide informar:
 * 	1-Cant de alumnos que rindieron
 * 	2-Nota promedio
 * 	3-Mejor alumno con mejor nota
 * Para indicar FIN de ingreso de alumno el operador ingresa nombre="", nota=0 y  matricula=0
 * Created on: 4 abr. 2020
 * Author: mdangelo
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>

#include "ejrc2_12_planilla.h"

void initContAcum (int *pCont, int * pAcum);
void pedirAlumnos (int *pMat, int *pNota, char *pNom);
int alumnoValido(int iNota, int iMat);
void guardarMejorAlumno(int *pMejorNota, char *pMejorNom, int iNota, char *pNom);
void mostrarMejorAlumno(int iMejorNota, char *pMejorNom);
void calcMostrarPromedio(int notasAcm, int iContAlm);
void mostrarCantAlumnos(int iContAlm);
void mostrarMnsSinDatos();

void procesarALumnos(){
	int matricula;
	int nota;
	char nombre[11];

	int iContAlm=0;
	int iNotasAcm=0;
	//datos mejor alumnos (con mejor nota, se supone unico)
	int mejorNota=0;
	char mejorNombre[11];
	float fProm=0.0;

	initContAcum(&iContAlm, &iNotasAcm);
	pedirAlumnos(&matricula,&nota, nombre);

	while(alumnoValido(matricula,nota)){
		guardarMejorAlumno(&mejorNota,mejorNombre, nota, nombre);
		iContAlm++;
		iNotasAcm += nota;
		pedirAlumnos(&matricula,&nota, nombre);
	};
	mostrarMejorAlumno(mejorNota,mejorNombre);
	calcMostrarPromedio(iNotasAcm, iContAlm);
	mostrarCantAlumnos(iContAlm);
}

void initContAcum (int *pCont, int *pAcum) {
	*pCont = 0;
	*pAcum = 0;
}

void pedirAlumnos (int *pMat, int *pNota, char *pNom) {
	printf("Ingrese nombre del alumno: ");
	scanf("%s", pNom);
	printf("Ingrese nota del alumno: ");
	scanf("%d",pNota);
	printf("Ingrese matricula del alumno: ");
	scanf("%d",pMat);

	__fpurge(stdin);
}

int alumnoValido(int iNota, int iMat) {
	int rslt = (iNota!=0 && iMat!=0);
	return rslt;
}

void guardarMejorAlumno(int *pMejorNota, char *pMejorNom, int iNota, char *pNom) {
	if(iNota > *pMejorNota){
		*pMejorNota = iNota;
		strcpy(pMejorNom, pNom);
	}
}

void mostrarMejorAlumno(int iMejorNota, char *pMejorNom) {
	if(iMejorNota>0){
		printf("El mejor alumno fue: %s\n", pMejorNom);
		printf("Con la nota de : %d\n", iMejorNota);
	}else
		mostrarMnsSinDatos();
}

void calcMostrarPromedio(int notasAcm, int iContAlm) {
	float prom = 0.0;
	if(iContAlm>0){
		prom = (float) notasAcm/iContAlm;
		printf("EL promedio de las notas fue %.2f\n",prom);
	}else
		mostrarMnsSinDatos();
}

void mostrarCantAlumnos(int iContAlm) {
	if(iContAlm>0){
		printf("La cantidad de alumnos fue %d\n",iContAlm);
	}else
		mostrarMnsSinDatos();
}

void mostrarMnsSinDatos(){
	printf("NO se ingresaron datos!!\n");
}
