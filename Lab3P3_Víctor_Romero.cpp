#include <iostream>
using namespace std;

// Ejercicio 1
int llenarArray() {
	cout << "-- Menu de Arrays --\n"
		<< "1) \n"
		<< "2) \n"
		<< "3) \n"
		<< "4) SALIR\n\n";
	
	int opcionArray;
	cout << "Ingrese el Disco a Escoger: ";
	cin >> opcionArray;

	switch (opcionArray) {
		
	}
}

// Menu de Opciones
int menu() {
	setlocale(LC_ALL, "spanish");
	int opcion = 0;

	do {
		cout << "------- MENU ------- \n"
			<< "1)  \n"
			<< "2)  \n\n"

			<< "0) SALIDA \n\n";

		cout << ">> Ingrese una opcion del menu: ";
		cin >> opcion;

		cout << "La opcion escojida es :" << opcion << endl << endl;

		switch (opcion) {
		case 0: {
			cout << "Gracias por participar!\n"
				<< "Feliz dia :D";
		}
			  break;

		case 1: {
			cout << "- 1)  - \n";

		}
			  break;

		case 2: {
			cout << "- 2)  - \n";

		}
			  break;

		default: {
			cout << "Valor digitado no es valido\n\n";
		}
			   break;

		}

	} while (opcion != 0);

	return opcion;
}


int main()
{
	menu();
}