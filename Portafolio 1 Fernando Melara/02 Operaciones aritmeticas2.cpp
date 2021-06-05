#include <iostream>
using namespace std;

int main(){
	
	int x;
	int y;
	
	cout << "Numero 1: " ;
	cin >> x;
	cout << "Numero 2: " ;
	cin >> y;
	
	x += y; // Equivalente a x = x + 3
	cout << "Equivalente a x = x + 3: " << x << endl;
	
	x -= y; // Eqivalente a x = x - 3
	cout << "Equivalente a x = x - 3: " <<  x << endl;
	
	x *= y; // Eqivalente a x = x * 3
	cout << "Equivalente a x = x * 3: " <<  x << endl;
	
	x/= y; // Eqivalente a x = x / 3
	cout << "Equivalente a x = x / 3: " <<  x << endl;
	
	x %= y; // Eqivalente a x = x % 3
	cout << "Equivalente a x = x % 3: " <<  x << endl;
	
	return 0;
}
