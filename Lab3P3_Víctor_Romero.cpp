#include <iostream>
using namespace std;

// Ejercicio 1
void Opcion_1() {
	int disco_1[8];
	int disco_2[8];

	int disco_XOR[8];

	int opcionArray;
	do {
		cout << "-- Menu de Arrays --\n"
			<< "1) Guardar Datos en XOR\n"
			<< "2) Obtener Datos del Disco 1\n"
			<< "3) Obtener Datos del Disco 2\n"
			<< "4) SALIR\n\n";

		cout << "> Ingrese la Opcion a Escoger: ";
		cin >> opcionArray;

		switch (opcionArray) {
		case 1: { // Guardar Datos en XOR
			cout << "Ingrese datos de DISCO 1:" << endl;
			for (int i = 0; i < 8; i++) {
				bool es_valido = false;
				while (!es_valido) {
					cout << "DISCO 1 [" << i << "]: ";
					cin >> disco_1[i];
					if (disco_1[i] == 0 || disco_1[i] == 1) {
						es_valido = true;
					}
					else {
						cout << "Ingrese solo 1 o 0. Intente de nuevo: ";
					}
				}
			}

			cout << "Los numeros ingresados del DISCO 1 son: [ ";
			for (int i = 0; i < 8; i++) {
				cout << disco_1[i] << " ";
			}
			cout << "] " << endl << endl;

			cout << "Ingrese datos de DISCO 2:" << endl;
			for (int i = 0; i < 8; i++) {
				bool es_valido = false;
				while (!es_valido) {
					cout << "DISCO 2 [" << i << "]: ";
					cin >> disco_2[i];
					if (disco_2[i] == 0 || disco_2[i] == 1) {
						es_valido = true;
					}
					else {
						cout << "Ingrese solo 1 o 0. Intente de nuevo: ";
					}
				}
			}

			cout << "Los numeros ingresados del DISCO 2 son: [ ";
			for (int i = 0; i < 8; i++) {
				cout << disco_2[i] << " ";
			}
			cout << "] " << endl << endl;

			for (int i = 0; i < 8; i++) {
				if (disco_1[i] == disco_2[i]) {
					disco_XOR[i] = 0;
				} else {
					disco_XOR[i] = 1;
				}
			}

			cout << ">> Los numeros del DISCO XOR son: [ ";
			for (int i = 0; i < 8; i++) {
				cout << disco_XOR[i] << " ";
			}
			cout << "] <<" << endl << endl;

		}
			  break;

		case 2: { // Datos del Disco 1
			cout << "Los numeros ingresados del DISCO 1 son: [ ";
			for (int i = 0; i < 8; i++) {
				cout << disco_1[i] << " ";
			}
			cout << "] " << endl << endl;
		}
			  break;

		case 3: { // Datos del Disco 2
			cout << "Los numeros ingresados del DISCO 2 son: [";
			for (int i = 0; i < 8; i++) {
				cout << disco_2[i] << " ";
			}
			cout << "] " << endl << endl;
		}
			  break;

		default: {
			cout << "Valor digitado no es valido\n";
		}
		}
	} while (opcionArray != 4);
}

// Menu de Opciones
int menu() {
	setlocale(LC_ALL, "spanish");
	int opcion = 0;

	do {
		cout << "------- MENU ------- \n"
			<< "1)  Disco XOR\n"
			<< "2)  Matriz con Obstaculos\n\n"
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
			cout << "- 1)  Disco XOR- \n";
			Opcion_1();
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

// Ejercicio 2

int main()
{
	menu();
}