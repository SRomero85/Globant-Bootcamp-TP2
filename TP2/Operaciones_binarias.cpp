#include <iostream>
#include "Operaciones_binarias.h"

int desplazarizquierda(int x)
{
	return x << 2;
}

int desplazarderecha(int x)
{
	return x >> 2;
}

int binarioAND(int x, int y)
{
	return x & y;
}

int binarioOR(int x, int y)
{
	return x | y;
}