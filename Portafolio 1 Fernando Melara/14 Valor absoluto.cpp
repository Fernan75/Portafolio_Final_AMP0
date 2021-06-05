#include <iostream>
using namespace std;

//Funcion de tipo int que tomo un parametro int
int absoluto(int var){
	if (var < 0)
		var = -var;
	return var;
}

//Funcion de tipo double que toma un paramero double
double absoluto(double var){
	if (var < 0)
		var = -var;
	return var;
}

int main (){
	// Calcular el valor obsoluto de un numero
	int num1 = -496;
	double numd = -1354.268;
	
	cout << "El valor absoluto de: " << num1 << " es = " << absoluto(num1) << endl;
	cout << "El valor absoluto de: " <<numd << " es = " << absoluto(numd) << endl;
	return 0;
}
