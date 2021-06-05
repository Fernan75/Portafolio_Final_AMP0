#include <iostream>
#include <bitset>
using namespace std;

int main(){
	int x = 5;
	int y = 3;
	
	cout << "\tDecimal" << "\t :\t Binario" << endl;
	cout << "\t" << x << " \t :\t" << bitset<8>(x) << endl;
	cout << "\t" << y << " \t :\t" << bitset<8>(y) << endl;
	
	// AND binaria  x &= y seria igual a decir x = x & y
	int z = x & y;
	cout << "x & y \t" << z << " \t : \t" << bitset<8>(z) << endl;
	
	// OR binaria  x |= y seria igual a decir x = x | y
	z = x | y;
	cout << "x | y \t" << z << " \t : \t" << bitset<8>(z) << endl;
	
	// XOR binaria  x ^= y seria igual a decir x = x ^ y
	z = x ^ y;
	cout << "x ^ y \t" << z << " \t : \t" << bitset<8>(z) << endl;
	
	// Desplazamiento binaria  x <<= y seria igual a decir x = x << y
	z = x << y;
	cout << "x << y \t" << z << " \t : \t" << bitset<8>(z) << endl;
	
	// Desplazamiento binaria  x >>= y seria igual a decir x = x >> y
	z = x >> y;
	cout << "x >> y \t" << z << " \t : \t" << bitset<8>(z) << endl;
	
	return 0;
}
