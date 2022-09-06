#pragma once
#include<iostream>
using namespace std;

//Contenedor tipo arreglo que representara una 
//Plantilla de Clase.

template<class T>
class Arreglo {
private: 
	T * * vec; //Un vector de punteros(objetos dinamicos)
	int tam; //Tamanno del vector
	int can; //Cantidad de elementos validos en el vector
public:
	Arreglo(int tam);
	virtual ~Arreglo();
	void ingresaAlArreglo(T* ele); //Se ingresan elementos tipo T* llamados "ele"
	T* operator[] (int ind); //sobrecarga del Operador de Indexacion (corchetes[]) con el indice "(int ind)"

};

//----Definicion de metodos de la Plantilla de Clase----
template<class T>
Arreglo<T>::Arreglo(int tamanio) {
	can = 0;
	tam = tamanio;
	vec = new T*[tam]; //Crea un vector de tamanno tam
	for (int i= 0; i < tam; i++) //se va a limpiar el vector
		vec[i] = NULL;
}

template<class T>
Arreglo<T>:: ~Arreglo() {
	for (int i = 0; i < can; i++)
		delete vec[i];
	delete[] vec; 
}

template<class T>
void Arreglo<T>::ingresaAlArreglo(T* ele) {
	if (can < tam)
		vec[can++] = ele;
}

template<class T>
T* Arreglo<T>::operator[] (int indice) {
	return vec[indice];

}