#include"Arreglo.h"

const int nElementos = 10; //Para efectos de darles tamanno a la creacion de los contenedores

int main() {
	cout << "-----PLANTILLA DE CLASE-----" << endl;
	cout << "----------------------------" << endl;
	cout << "Creando Objetos Contenedores" << endl;
	cout << "con ayuda de la Plantilla de Clase" << endl;
	cout << endl;
	cout << "Creacion de los contenedores..... " << endl;

	Arreglo<int>    Conte1(nElementos); //Contenedor de enteros...
	Arreglo<char>   Conte2(nElementos); //Contenedor de caracteres...
	Arreglo<double> Conte3(nElementos); //Contenedores de doble-flotante
	//Arreglo<Persona*> Conte4(nElementos) // Contenedor de Personas... TAREA  

	//Llenar los contenedores con valores cualesquiera (automatico)
	//con (int, char, double)

	for (int i = 0; i < nElementos; i++) {
		Conte1.ingresaAlArreglo(new int(i + 5)); //Llenando el contenedor de enteros 
		Conte2.ingresaAlArreglo(new char(65 + i)); //Llenando el contenedor de caracteres (En el codigo ASCII las letras empiezan a partir del 65 que es la A y asi va avanzando)
		Conte3.ingresaAlArreglo(new double((double)(14 + i) / 7)); //Llenando el contenedor con doubles
	}

	cout << "Impresion de los contenedores....." << endl;
	for (int i = 0; i < nElementos; i++) {

		cout << "Conte1[" << i << "] = " << *Conte1[i] << endl; //Devuelve el contenido del puntero porque tiene el asterisco *Conte1[i]
		cout << "Conte2[" << i << "] = " << *Conte2[i] << endl;
		cout << "Conte3[" << i << "] = " << *Conte3[i] << endl;
	}

	system("pause");
	return 0;
}