//Fernando Antonio Melara Calix
#include <iostream>
#include "pila.h"
#include "cola.h"



using namespace std;

string Palabra;
string Mayuscula(string Palabra);
Pila<char> P;
Cola<char> S;
Pila<char> P1;
Cola<char> S1;
void DEQ();
void PO();

int main(){
	
	cout << "Escribe una palabra y descubre si es palindromo" << endl;
	cin >> Palabra;
	string PalabraMa = Mayuscula(Palabra);
	for(int j = 0; j < PalabraMa.length(); j++){
		P.push(PalabraMa[j]); 
	}
//	cout << P.pilaComoCadena()  << endl;
	
	
	for(int i = 0; i < PalabraMa.length(); i++){
		S.enqueue(PalabraMa[i]); 
	}
//	cout << S.colaComoCadena()  << endl;
	

	
	DEQ();
	PO();
	cout << S1.colaComoCadena() << endl;
	cout << P1.pilaComoCadena() << endl;
	
	if(S1.colaComoCadena() == P1.pilaComoCadena()){
		cout << "La palabra es palindromo" << endl;
	} else {  cout << "La palabra no es palindromo" << endl;
	}
//	cout << "Original: " << Palabra << endl;
//	cout << "Mayuscula: " << PalabraMa << endl;
	
	


	return 0;
}

void DEQ() {
	for (int i = 0; i < Palabra.length() ; i++){
		S1.enqueue(S.dequeue()) ;
		
		}
	}

void PO(){
	for (int i = 0; i < Palabra.length(); i++){
		P1.push(P.pop() ); 
	}

}



string Mayuscula(string Palabra) {
	for (int i = 0; i < Palabra.length() ; i++) {
		Palabra[i] = toupper(Palabra[i]);
	}
	return Palabra;
}
