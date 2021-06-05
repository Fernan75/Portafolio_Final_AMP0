#include <iostream>

using namespace std;

int paul = 21;
int maria = 90;
int carlos = 22;
int* melissa = &paul;
int tom = paul;
int* dave = melissa;

void imprimir(){
	cout << "paul = " << paul << endl;
	cout << "&paul = " << &paul << endl;
	
	cout << "melissa = " << melissa << endl;
	cout << "&melissa = " << &melissa << endl;
	
	cout << "dave = " << dave << endl;
	cout << "&dave = " << &dave << endl;
	cout << "*dave = " << *dave << endl;
	cout << "_________________________" << endl;
	
}

int main(){
	imprimir();
	*melissa = 30;
	imprimir();
	return 0;
}
