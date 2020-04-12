/*
 * utn_commons.c
 *  Created on: 7 abr. 2020
 *  Author: mdangelo
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>

#include "utn_commons.h"

/**=========Get values======t***/
char getChar(char *pMssg, char cVl1, char cVl2) {
	char cVal;
	do {
		printf("Ingrese %s solo valores: [%c,%c]: ", pMssg, cVl1, cVl2);
		scanf("%c", &cVal);
		cVal = toupper(cVal);
		__fpurge(stdin);
	} while (cVal != cVl1 && cVal != cVl2);
	return cVal;
}

float getFloat(char *pMssg, float iFrom, float iUntil) {
	float fVal;
	do {
		printf("Ingrese %s: [%.2f,%.2f]: ", pMssg, iFrom, iUntil);
		scanf("%f", &fVal);
		__fpurge(stdin);
	} while (fVal < iFrom || fVal > iUntil);
	return fVal;
}

int getInt(char *pMssg, int iFrom, int iUntil) {
	int iVal = 0;
	do {
		printf("Ingrese un/una %s, recuerde [%d,%d]: ", pMssg, iFrom, iUntil);
		scanf("%d", &iVal);
		__fpurge(stdin);
	} while (iVal < iFrom || iVal > iUntil);
	return iVal;
}
/**=========Dates======t***/
int utnIsLeapYear(int iYear) {
	int divs4 = (iYear % 4 == 0);
	int notDivs100 = (iYear % 100 != 0);
	int divs400 = (iYear % 400 == 0);
	int isLeap = (divs4 && notDivs100) || divs400;
	return isLeap;
}

void utnDecomposeDate(long lFecha, int *pAnio, int *pMes, int *pDia) {
	*pAnio = lFecha / 10000;
	*pMes = (lFecha % 10000) / 100;
	*pDia = (lFecha % 10000) % 100;
}

/**=========Math==========***/
int utnGetFactorial(int iFact) {
	int iNum = 1;
	for (int i = iNum; i > 0; i--) {
		iFact = iFact * i;
	}
	return iFact;
}

int utnGetFactorialRec(int iNum) {
	int iRsl;
	if (iNum == 0) {
		iRsl = 1;
	} else {
		iRsl = iNum * utnGetFactorialRec(iNum - 1);
	}
	return iRsl;
}
