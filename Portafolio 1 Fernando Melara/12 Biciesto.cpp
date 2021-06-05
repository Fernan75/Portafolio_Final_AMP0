#include <iostream>
using namespace std;

int main (){
	
	int year;
	cout << "Please give a year: ";
	cin >> year;
	
	if(year % 4 == 0) {
		if (year % 100 == 0){
			if (year % 400 == 0)
				cout << year << " It is a leap year! (Anio biciesto)." << endl;
			else
				cout << year << " It is not a leap year! (No es anio biciesto)." << endl;
		}else{
			cout << year << " It is a leap year! (Anio biciesto)." << endl;
		}
	}else{
		cout << year << " It is not a leap year! (No es anio biciesto)." << endl;
	}
	return 0;
}
