#include <iostream>
#include <string>
#include "Operaciones_Matematicas.h"
#include "Operaciones_binarias.h"
#include "Operaciones_logicas.h"
#include "Operaciones_preprocesador.h"
#include "Operaciones_String.h"


using namespace std;

int main()
{
	int opcion=10;

	while (opcion != 0) 
	{
		cout << "\n-----------------------------------------------------" << endl;
		cout << "\n  Ingrese una de las siguientes opciones: " << endl;
		cout << "  Para calcular el cuadrado de un numero ingrese 1" << endl;
		cout << "  Para sumar dos numeros ingrese 2" << endl;
		cout << "  Para calcular el area de un circulo ingrese 3" << endl;
		cout << "  Para calcular el mayor de 2 numeros ingrese: 4" << endl;
		cout << "  Para concatenar el nombre de dos variables: 5" << endl;
		cout << "  Para imprimir un texto en pantalla ingrese 6" << endl;
		cout << "  Para comparar dos strings ingrese 7" << endl;
		cout << "  Para realizar una operacion binaria ingrese 8" << endl;
		cout << "  Para realizar una operacion logica ingrese 9" << endl;
		cout << "  Para salir ingrese 0" << endl;
		cout << "\n-----------------------------------------------------" << endl;
		cout << "\n Ingrese la opcion deseada: "; cin >> opcion;

		int a;
		int b;
		int total = 0;
		int cuad = 0;
		float area = 0;
		int maximo = 0;
		char var1 ;
		char var2 ;
		char conc ;
		char texto[256];
	

		switch (opcion)
		{
		case 1:
			cout << "\n Ingrese el numero a calcular: " ; cin >> a;
			cuad = cuadrado(a);
			cout << "\n El cuadrado es: " << cuad;
			break;
		case 2:
			cout << "\n Ingrese el primer numero: " ; cin >> a;
			cout << "\n Ingrese el segundo numero: "; cin >> b;
			total = suma(a, b);
			cout << "\n El Total es: " << total;
			break;
		case 3:
			cout << "\n Ingrese el radio del circulo: " << endl; cin >> a;
			area = circuloArea(a);
			cout << "\n El area es: " << area;
			break;
		case 4:
			cout << "\n Ingrese el primer numero: " ; cin >> a;
			cout << "\n Ingrese el segundo numero: "; cin >> b;
			maximo = max(a, b);
			cout << "\n El mayor es: " << maximo;
			break;
		case 5:
			cout << "\n Ingrese la primera palabra: " ; cin >> var1;
			cout << "\n Ingrese la segunda palabra: " ; cin >> var2;
			conc = concatenar(var1, var2);
			break;
		case 6:
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			cout << "\n Ingrese el texto a mostrar: " << endl; 
			cin.getline ( texto , 256 ) ;
			imprimir(texto);
			break;
		case 7:
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			comparar();
			break;
		case 8:			
				cout << "\n------------------------------------------------" << endl;
				cout << "\n Para correr 2 lugares a la izquierda ingrese 1 " << endl;
				cout << " Para correr 2 lugares a la derecha ingrese 2" << endl;
				cout << " Para operacion AND ingrese 3" << endl;
				cout << " Para operacion OR ingrese 4" << endl;
				cout << " Para salir ingrese 0" << endl;
				cout << "\n------------------------------------------------" << endl;
				cin >> opcion;
				switch (opcion)
				{
				case 1:
					cout << "\nIngrese el valor: ";cin >> a;
					cout << "El resultado es : " << desplazarizquierda(a) << endl;
					break;
				case 2:
					cout << "\nIngrese el valor: "; cin >> a;
					cout << "El resultado es : " << desplazarderecha(a) << endl;
					break;
				case 3:
					cout << "\nIngrese el primer valor: ";cin >> a;
					cout << "Ingrese el segundo valor: ";cin >> b;
					std::cout << "\nEl resultado es: " << binarioAND(a, b) << endl;
					break;
				case 4:
					cout << "\nIngrese el primer valor: "; cin >> a;
					cout << "Ingrese el segundo valor: "; cin >> b;
					std::cout << "\nEl resultado es: " << binarioOR(a, b) << endl;
					break;
				default:
					std::cout << "Opcion incorrecta" << std::endl;
					break;
				}			
			break;
		case 9:
			cout << "\n Ingrese el primer numero: "; cin >> a;
			cout << "\n Ingrese el segundo numero: "; cin >> b;
			intercambio(a, b);
			break;
		default:
			cout << "\nOpcion Incorrecta\n";
			break;
		}
	}
	return 0;
}
