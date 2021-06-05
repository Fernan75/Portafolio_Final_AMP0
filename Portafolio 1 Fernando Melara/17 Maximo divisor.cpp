//Intente realizarlo pero esto es lo mas cercano que pude hacer que es calcular los divisores de un numero
#include <iostream>
using namespace std;

int main () {
	
	cout << "Autor: Fernando Antonio Melara Calix" << endl;
	
	int numero;
	int i;
	
	do {
		cout << "Introduce un numero para conocer sus divisores: " ;
		cin >> numero;
		
	}while (numero <= 0);
	
	for (i =1; i <= numero/2; i++){
		if(numero % i == 0){
			cout << i << endl;
		}
	}
	cout << numero << endl;
	return 0;
}
