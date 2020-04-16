/*
 ============================================================================
 Name        : LaboProg1Proj.c
 Author      : mdangelo
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>

//=====UTN Prog y Labo==========
#include "commons/utn_commons.h"

#include "./ejercicios/ejrc1_clase2.h"
#include "./ejercicios/ejrcA_clase2.h"
#include "./ejercicios/ejrcB_clase2.h"
#include "./ejercicios/ejrcC_clase2.h"
#include "./ejercicios/ejrc1_clase3.h"
#include "ejercicios/ejrc1_clase6.h"

//====Alg-Fondo===============
#include "./alg_fondo/ejrc1_4.h"
#include "./alg_fondo/ejrc1_8_nprim.h"
#include "./alg_fondo/ejrc2_12_planilla.h"
#include "alg_fondo/ejrc2_13.h"
#include "alg_fondo/ejrc3_3_bisiesto.h"


int main(void) {
	//=====UTN============
	//ejerc1Clase2(); //calculadora
	//ejrcAClase2();
	//ejrcBClase2();
	//ejrcCClase2();
	//ejerc1Clase3(); //funciones - clase 3 labo-prog

	//ejerc1Aclase6();
	//ejerc1Bclase6();
	ejerc1Cclase6(); //buble-sort

	//=====Alg-Fondo============
	//ejerc14Fecha();
	//esPrimo();
	//procesarALumnos();
	//ejrc213Billetes(); //billetes
	//ejerc313Bisiesto();

	return EXIT_SUCCESS;
}
