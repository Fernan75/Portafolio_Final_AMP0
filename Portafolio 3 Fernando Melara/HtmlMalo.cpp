#include <iostream>
#include <string>
#include "pila.h"

using std::string;
using std::cin;
using std::cout;
using std::endl;

string Cadena;

bool estanLlavesBalanceadas(string expresion){
	Pila<char> unaPila;
	for(size_t i = 0; i < expresion.length(); i++){
		char caracter = expresion[i];
		cout << caracter << endl;
		if(caracter == '<'){
			
		} else if(caracter != '/') {
			unaPila.push(caracter);
			cout << unaPila.pilaComoCadena() << endl;
			
			} else if (caracter == '<'){
				
			} else if (caracter == '/'){
				if(unaPila.estaPilaVacia()){
				return false;
			}
			unaPila.pop();
			cout << unaPila.pilaComoCadena() << endl;
		}
	}
	return unaPila.estaPilaVacia();
}

int main(){
	Cadena = "<html>", "</html>";
	cout << "Ingrese una expresion: " << endl;
//	cin >> cadena;
	cout << Cadena.length() << endl;
	if (estanLlavesBalanceadas(Cadena)){
		cout << "Las llaves estan balanceadas.";
	} else {
		cout << "Las llaves no estan balanceadas.";
	}
	return 0;
}
		
