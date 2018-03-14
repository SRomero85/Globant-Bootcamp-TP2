#include "Operaciones_Matematicas.h"
#include <math.h>

#define PI 3.141592


int suma(int a, int b) {
	return(a + b);
}

int cuadrado(int a) {
	return pow(a,2);
}


float circuloArea(float radio) {
	return PI * pow(radio,2);
}

int max(int a, int b) {
	if (a >= b) {
		return a;
	}
	else {
		return b;
	}
}