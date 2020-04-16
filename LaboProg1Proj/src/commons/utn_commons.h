/*
 * utn_commons.h
 *  Created on: 7 abr. 2020
 *  Author: mdangelo
 */

#ifndef COMMONS_UTN_COMMONS_H_
#define COMMONS_UTN_COMMONS_H_

//return a char (in uppercase) that which is equal to the character cV1 or cV2
char utnGetCharBetween(char *pMssg,char cVl1, char cVl2);
//return a float value that it is included between the given values
float utnGetFloatBetween(char *pMssg, float iFrom, float iUntil);
//return a integer value that it is included between the given values
int utnGetIntBetween(int iFrom, int iUntil);

//check if a given year is leap or not
int utnIsLeapYear(int iYear);
//decompose date in format yyyymmdd
void utnDecomposeDate(long lFecha, int *pAnio,int *pMes,int *pDia);

/**=========Date==========***/
//return the factorial of a integer
int utnGetFactorial(int iFact);
//return the factorial of a integer (recursive)
int utnGetFactorialRec(int iNum);

/**=========Arrays==========***/
void utnInitializeIntgArr(int *pIntgArr, int iIntVal, int iTop);
void utnBubleOrderIntArr(int *pIntArr, int iTop);
void utnShowAllIntArrContent(int *pIntArr, int iTop, int iIntVal);
void utnLoadIntArrByIndx(int *pIntArr, int iTop, int iIntVal);
void utnLoadIntArrSecnl(int *pIntArr, int iTop, int iIntVal);

int utnGetNotEmptyVlsIntArr(int *pIntArr, int iTop, int iIntVal);
int utnGetGretEqlsVlsIntArr(int *pIntArr, int iTop, int iIntVal, int iConcVl);
int utnGetLessVlsIntArr(int *pIntArr, int iTop, int iIntVal, int iConcVl);
int utnGetMaxIntArr(int *pIntArr, int iTop, int iIntVal);
int utnGetMinIntArr(int *pIntArr, int iTop, int iIntVal);
int utnGetCuantEvenNmbIntArr(int *pIntArr, int iTop, int iIntVal);
int utnGetCuantOddNmbIntArr(int *pIntArr, int iTop, int iIntVal);

#endif /* COMMONS_UTN_COMMONS_H_ */
