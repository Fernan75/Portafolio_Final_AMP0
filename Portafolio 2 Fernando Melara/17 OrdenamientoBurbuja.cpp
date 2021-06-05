#include <iostream>

using namespace std;

void imprimirArreglo(int array[], int size){
	for (int i = 0; i < size; ++i) {
		cout << " | " << array[i];
	}
	cout << " | \n";
}

void ordenamientoBurbuja(int array[], int size){
	
	
	for (int paso = 0; paso < size - 1; ++paso) {
		for (int i = 0; i < size - paso - 1; ++i){
			
			
			if (array[i] > array[i + 1]){
				
				int temporal = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temporal;
			}
		}
	}
}

int main(){
	int data[] = {-2, 45, 0, 11, -9, 7, 3, 86};
	int size = sizeof(data)/sizeof(data[0]);
	cout << "Arreglo inicial: \n";
	imprimirArreglo(data, size);
	ordenamientoBurbuja(data, size);
	cout << "Arreglo ordenado de forma Ascendente: \n";
	imprimirArreglo(data, size);
	return 0;
}
