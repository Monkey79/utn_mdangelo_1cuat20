/*
 * utn_commons.h
 *  Created on: 7 abr. 2020
 *  Author: mdangelo
 */

#ifndef COMMONS_UTN_COMMONS_H_
#define COMMONS_UTN_COMMONS_H_

//return a char (in uppercase) that which is equal to the character cV1 or cV2
char getChar(char *pMssg,char cVl1, char cVl2);
//return a float value that it is included between the given values
float getFloat(char *pMssg, float iFrom, float iUntil);
//return a integer value that it is included between the given values
int getInt(char *pMssg, int iFrom, int iUntill);
//check if a given year is leap or not
int utnIsLeapYear(int iYear);
//decompose date in format yyyymmdd
void utnDecomposeDate(long lFecha, int *pAnio,int *pMes,int *pDia);
//return the factorial of a integer
int utnGetFactorial(int iFact);
//return the factorial of a integer (recursive)
int utnGetFactorialRec(int iNum);
#endif /* COMMONS_UTN_COMMONS_H_ */