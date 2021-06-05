#include <iostream>
#include <stack>

using namespace std;
int main() {
	char continuar = 's';
	stack <double> mystack;
	double valor;
	
	mystack.push(1.2);
	mystack.push(25);
	mystack.push(78);
	mystack.push(15.4);
	mystack.push(98.5);
	mystack.push(85);
	mystack.push(1.3);
	mystack.push(24);
	mystack.push(3.25);
	
	cout << "Tamanio de la pila: ";
	cout << mystack.size() << endl;
	
	while(!mystack.empty()){
		cout << mystack.top() << endl;
		mystack.pop();
	}
	
	return 0;
}
