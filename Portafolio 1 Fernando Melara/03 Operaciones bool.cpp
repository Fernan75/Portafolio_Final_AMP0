#include <iostream>
using namespace std;

int main(){
	
	int x;
	int y;
	
	cout << "Ingrese un numero: " << endl;
	cin >> x;
	cout << "Ingrese otro numero: " << endl;
	cin >> y;
	
	bool var1 = true;
	bool var2 = false;
	
	cout << "Verdadero: " << var1 << endl;
	cout << "Falso: " << var2 << endl;
	//0 = false (falso) y 1 = True (Verdadero)
	
	cout << "X menor que Y: " << (x < y) << endl;
	cout << "X mayor que Y: " << (x > y) << endl;
	cout << "X menor o igual que Y: " <<(x <= y) << endl;
	cout << "X mayor o igual que Y: " << (x >= y) << endl;
	cout << "X diferente que Y: " << (x != y) << endl;
	cout << "X igual que Y: " << (x == y) << endl;
	
	return 0;
}
