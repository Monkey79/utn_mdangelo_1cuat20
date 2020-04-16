/*
 * utn_commons.c
 *  Created on: 7 abr. 2020
 *  Author: mdangelo
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>

#include "utn_commons.h"

int _getArrayIndex(int iTop);
void _overWriteIntArr(int *pIntArr,int iIndx, int iVal);

/**=========Get values======t***/
char utnGetCharBetween(char *pMssg, char cVl1, char cVl2) {
	char cVal;
	do {
		printf(pMssg, pMssg);
		scanf("%c", &cVal);
		cVal = toupper(cVal);
		__fpurge(stdin);
	} while (cVal != cVl1 && cVal != cVl2);
	return cVal;
}

float utnGetFloatBetween(char *pMssg, float iFrom, float iUntil) {
	float fVal;
	do {
		printf(pMssg);
		scanf("%f", &fVal);
		__fpurge(stdin);
	} while (fVal < iFrom || fVal > iUntil);
	return fVal;
}

int utnGetIntBetween(int iFrom, int iUntil) {
	int iVal = 0;
	do {
		printf("write an integer number between -[%d,%d]-: ", iFrom, iUntil);
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

/**=========Arrays==========***/
int utnGetNotEmptyVlsIntArr(int *pIntArr, int iTop, int iIntVal){
	int iAmnt = 0;
	for(int i=0;i<iTop-1;i++){
		if(*(pIntArr+i)!=iIntVal)
			iAmnt++;
	}
	return iAmnt;

}
int utnGetGretEqlsVlsIntArr(int *pIntArr, int iTop, int iIntVal, int iConcVl) {
	int iAmnt = 0;
	for(int i=0;i<iTop-1;i++){
		if(*(pIntArr+i)!=iIntVal && *(pIntArr+i)>=iConcVl)
			iAmnt++;
	}
	return iAmnt;
}
int utnGetLessVlsIntArr(int *pIntArr, int iTop, int iIntVal, int iConcVl) {
	int iAmnt = 0;
	for(int i=0;i<iTop-1;i++){
		if(*(pIntArr+i)!=iIntVal && *(pIntArr+i)<iConcVl)
			iAmnt++;
	}
	return iAmnt;
}

int utnGetMaxIntArr(int *pIntArr, int iTop, int iIntVal){
	int iMax = 0;
	for(int i=0;i<iTop-1;i++){
		if(*(pIntArr+i)!=iIntVal)
			if(i==0)
				iMax=*(pIntArr+i);
			else if(*(pIntArr+i)>iMax){
				iMax = *(pIntArr+i);
			}

	}
	return iMax;
}

int utnGetMinIntArr(int *pIntArr, int iTop, int iIntVal){
	int iMin = 0;
	for(int i=0;i<iTop-1;i++){
		if(*(pIntArr+i)!=iIntVal)
			if(i==0)
				iMin=*(pIntArr+i);
			else if(*(pIntArr+i)<iMin){
				iMin = *(pIntArr+i);
			}

	}
	return iMin;
}

int utnGetCuantEvenNmbIntArr(int *pIntArr, int iTop, int iIntVal){
	int iEvenCnt = 0;
	for(int i=0;i<iTop-1;i++){
		if(*(pIntArr+i)!=iIntVal &&  (*(pIntArr+i)%2==0))
			iEvenCnt++;
	}
	return iEvenCnt;
}
int utnGetCuantOddNmbIntArr(int *pIntArr, int iTop, int iIntVal){
	int iOddCnt = 0;
	for(int i=0;i<iTop-1;i++){
		if(*(pIntArr+i)!=iIntVal &&  (*(pIntArr+i)%2!=0))
			iOddCnt++;
	}
	return iOddCnt;
}

void utnInitializeIntArr(int *pIntgArr, int iIntVal, int iTop){
	for(int i=0;i<iTop-1;i++){
		*(pIntgArr+i)=iIntVal;
	}
}

void utnBubleOrderIntArr(int *pIntArr, int iTop){
	int i=0;
	int j=0;
	int iAux=0;
	for(i=0; i<iTop-1; i++){
		for(j=i+1;j<iTop-1;j++){
			if(*(pIntArr+i) > *(pIntArr+j) ){
				iAux = *(pIntArr+i);
				*(pIntArr+i) = *(pIntArr+j);
				*(pIntArr+j) = iAux;
			}
		}
	}
}

void utnShowAllIntArrContent(int *pIntArr, int iTop, int iIntVal) {
	for(int i=0; i<iTop-1;i++){
		if(*(pIntArr+i) != iIntVal)
			printf("*Position %d value = %d*\n", i, *(pIntArr+i));
	}
}

void utnLoadIntArrByIndx(int *pIntArr, int iTop, int iIntVal){
	int i;
	int iValue = 0;
	char cont = 'S';

	do{
		i =_getArrayIndex(iTop);
		iValue = utnGetIntBetween(1,10);

		if(*(pIntArr+i)>iIntVal){
			_overWriteIntArr(pIntArr,i, iValue);
		}else{
			*(pIntArr+i) = iValue;
		}
		printf("===Done! value saved in position %d====\n",i);
		printf("Do you want to load other value? S|N ?");
		scanf("%c",&cont);
		__fpurge(stdin);
		cont = toupper(cont);

	}while(cont=='S');
}

int _getArrayIndex(int iTop){
	int i;
	do{
		printf("In what position of the array do you want to save the value? -[0,%d]-: ",iTop-2);
		scanf("%d",&i);
		__fpurge(stdin);
	}while(i < 0 || i>iTop-2);
	return i;
}

void _overWriteIntArr(int *pIntArr,int iIndx, int iVal){
	char ovrWrt = 'S';
	do{
		printf("Attention: There is already a value in this position. Do you want overwrite this value?? -[S|N]-: \n");
		scanf("%c",&ovrWrt);
		__fpurge(stdin);
		ovrWrt = toupper(ovrWrt);
	}while(ovrWrt != 'S' && ovrWrt != 'N');
	if(ovrWrt == 'S'){
		*(pIntArr+iIndx) = iVal;
	}else{
		printf("Cancel overwriting..!\n");
	}

}
