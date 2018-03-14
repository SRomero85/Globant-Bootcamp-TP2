#include "Operaciones_String.h"
#include <iostream>
#include <string>
using namespace std;


int comparar()
{
	char pal1[100];
	char pal2[100];
	cout << "\n Ingrese la primera palabara a comparar: " ;
	cin.getline(pal1, 100);
	cout << "\n Ingrese la segunda palabara a comparar: " ;
	cin.getline(pal2, 100);

	if (sizeof(pal1) != sizeof(pal2)) {
		cout << "\n Las palabras son diferentes.";
	}else {

		int cadena = sizeof(pal1);
		int i = 0;
		for (short i = 0; i < cadena; i++)
		{
			if (pal1[i] != pal2[i])
			{
				cout << "\n Las palabras son diferentes.";
			
			}
		}
		cout << "\n Las palabras son iguales.";
	}
	return 0;
}