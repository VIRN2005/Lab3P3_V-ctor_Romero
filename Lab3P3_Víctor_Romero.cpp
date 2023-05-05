#include <iostream>
#include <array>
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

		case 4: {
			cout << "Opcion de Salida! \n";
			for (int i = 0; i < 8; i++){
				disco_1[i] = 0;
			}

			for (int i = 0; i < 8; i++) {
				disco_2[i] = 0;
			}
		}
			  break;

		default: {
			cout << "Valor digitado no es valido\n";
		}
		}
	} while (opcionArray != 4);
}

// Ejercicio 2
char** Llenar_Matriz(int filas, int columnas) {
	char** matriz = new char* [filas];
	for (int i = 0; i < filas; i++) {
		matriz[i] = new char[columnas];
		for (int j = 0; j < columnas; j++) {
			matriz[i][j] = '-';
		}
	}
	return matriz;
}

int posicion_random(int n) {
	srand(time(0));
	return rand() % n;
}

void agregar_obstaculos(char** matriz, int obstaculos, int filas, int columnas) {
	int obstaculos_agregados = 0;
	while (obstaculos_agregados < obstaculos) {
		int fila = posicion_random(filas);
		int columna = posicion_random(columnas);
		if (matriz[fila][columna] != '#') {
			matriz[fila][columna] = '#';
			obstaculos_agregados++;
		}
	}
}

void imprimir_matriz(char** matriz, int filas, int columnas) {
	cout << endl;
	for (int i = 0; i < filas; i++) {
		for (int j = 0; j < columnas; j++) {
			cout << "[" << matriz[i][j] << "]";
		}
		cout << endl;
	}
	cout << endl;
}

int Opcion_2() {
	cout << "Ingrese el Numero de Filas: ";
	int filas;
	cin >> filas;
	while (filas < 5) {
		if (filas < 5) {
			cout << "Ingrese el Numero de Mayor que 5...\n ";
			cout << "Ingrese el Numero de Filas VALIDO: ";
			cin >> filas;
		}
	}

	cout << endl << "Ingrese el Numero de Columnas: ";
	int columnas;
	cin >> columnas;
	while (columnas < 5) {
		if (columnas < 5) {
			cout << "Ingrese el Numero de Mayor que 5...\n ";
			cout << "Ingrese el Numero de Columnas VALIDO: ";
			cin >> columnas;
		}
	}

	int casillas = filas * columnas;

	cout << endl << "Ingrese el Numero de Obstaculos: ";
	int obstaculos;
	cin >> obstaculos;
	while (obstaculos < 1 && obstaculos < casillas) {
		if (obstaculos < 1 && obstaculos < casillas) {
			cout << "Ingrese el Numero de Mayor que 1...\n ";
			cout << "Ingrese el Numero de Filas VALIDO: ";
			cin >> obstaculos;
		}
	}

	// Crear la matriz
	char** matriz = Llenar_Matriz(filas, columnas);

	// Agregar Obstaculos
	agregar_obstaculos(matriz, obstaculos, filas, columnas);
	imprimir_matriz(matriz, filas, columnas);

	for (int i = 0; i < filas; i++) {
		delete[] matriz[i];
	}
	delete[] matriz;

	return 0;
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
			cout << "- 2) Matriz con Obstáculos - \n";
			Opcion_2();
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