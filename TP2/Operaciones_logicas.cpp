#include <iostream>
#include "Operaciones_logicas.h"

using namespace std;

int intercambio(int a, int b) {

	int t;

	t = a;
	a = b;
	b = t;

	cout << "\n La primera variable es ahora: " << a <<endl;
	cout << "\n La segunda variable es ahora: " << b << endl;

	return 0;
}