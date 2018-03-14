#include <iostream>
#include <string>
#include "Operaciones_preprocesador.h"

using namespace std;

#define CONCATENAR(a, b) (#a ## #b)


char concatenar(char var1, char var2) {



	char conc[] = CONCATENAR(var1, var2);

	cout << "\n Las Variables Concatenadas son: " << conc;

	return 0;

}

char imprimir(char texto[])
{
	cout << texto << endl;

	return 0;
}