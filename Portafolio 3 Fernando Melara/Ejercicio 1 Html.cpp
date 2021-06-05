//Fernando Antonio Melara Calix
#include <iostream>
#include <string>
#include <regex>
#include "pila.h"

using namespace std;

//bool Abierto(const string& );
//bool Cerrado(const string& );

bool validarHTML(string html){
		
	Pila<char> unaPila;

	for(size_t i = 0; i < html.length(); i++){
		char caracter = html[i];

		if( caracter == '<' ) {
			unaPila.push(caracter);
		} else if ( caracter == '/' ) {
			if (unaPila.estaPilaVacia()){
				return false;
			}
			unaPila.pop();
			unaPila.pop();
		}
	}
	return unaPila.estaPilaVacia();
}

int main() {
	cout << "El codigo html es: " << endl;
	string hyp = 
" <html>\n"
" <head>\n"
" <title>\n"
"  Ejemplo\n"
" <title>\n"
" </head>\n"
"  \n"
" </body>\n"
" <h1>Hola mundo</h1>\n"
" </body>\n"
" </html>\n";

	cout << "\n" << hyp;
	if (validarHTML(hyp)) {
		cout << "\n" << true << " El documento html es valido.";
	} else {
		cout << "\n" << false << " El documento html no es valido.";
	}
	return 0;
}

//bool Abierto(const string& placa){
	//const regex expReg ("<[a-z]*>");
	
	//return regex_match(placa, expReg);
//}

//bool Cerrado(const string& placa){
	//const regex expReg ("</[a-z]*>");
	
	//return regex_match(placa, expReg);
//}
