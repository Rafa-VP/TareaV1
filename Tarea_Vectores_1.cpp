#include <iostream>
#include <cstdlib> 
#include <ctime> 
using namespace std;

// ENCONTRAR EL ELEMENTO MÁXIMO DEL VECTOR
void maximo_de_un_vector(){
	int cv, acum;
	cout << "Ingrese la cantidad de valores para el vector: ";
	cin >> cv;
	int vector[cv];
	for(int x=0; x<cv; x++){
		cout << "Ingrese el elemento #" << x << ": ";
		cin >> vector[x]; 
	} 
	int mayor = vector[0];
	for(int i=1; i<cv; i++){
		if(mayor<vector[i]){
			mayor = vector[i];
		}
	}
	cout << "El elemento mayor es: " << mayor << endl;	
}

// ENCONTRAR EL ELEMENTO MÍNIMO DEL VECTOR
void minimo_de_un_vector(){
	int cv, acum;
	cout << "Ingrese la cantidad de valores para el vector: ";
	cin >> cv;
	int vector[cv];
	for(int x=0; x<cv; x++){
		cout << "Ingrese el elemento #" << x << ": ";
		cin >> vector[x]; 
	} 
	int menor = vector[0];
	for(int i=1; i<cv; i++){
		if(menor>vector[i]){
			menor = vector[i];
		}
	}
	cout << "El elemento menor es: " << menor << endl;	
}

// FUNCIÓN QUE LLENE EL VECTOR CON VALORES ALEATORIOS
void vector_aleatorio(){
	srand((unsigned)time(0));
	int cv;
	cout << "Ingrese la cantidad de valores para el vector: ";
	cin >> cv;
	int vector[cv];
	for(int x=0; x<cv; x++){
		vector[x]=rand();
	} 
	for(int x=0; x<cv; x++){
		cout << "El elemento #" << x << " del vector es: " << vector[x] << endl;
	} 
	
}

int main(){
	maximo_de_un_vector(); 
	minimo_de_un_vector();
	vector_aleatorio();
}
