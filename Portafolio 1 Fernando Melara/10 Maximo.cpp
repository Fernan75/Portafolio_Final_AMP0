#include <iostream>

using namespace std;
int main(){
	
	int numero;
	int maximo;
	
	for (int i = 0; i < 10; i++) {
		cout << "Ingrese el numero " << (i+1) << ": ";
		cin >> numero;
		if (i == 0)
			maximo = numero;
		if (numero > maximo)
			maximo = numero;
	}
	
	cout << "El valor maximo es: " << maximo << endl;
	
	return 0;
}
