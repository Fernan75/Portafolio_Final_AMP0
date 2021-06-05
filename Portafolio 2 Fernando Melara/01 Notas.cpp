#include <iostream>
#include <iomanip>

using namespace std;
const int Estudiantes = 3;
const int Evaluaciones = 4;

double minima(double[][Evaluaciones], int, int);
double maxima(double[][Evaluaciones], int, int);
double promedio(double[], int);
void imprimirArreglo(double[][Evaluaciones], int, int);

int main(int argc, const char * argv[]){
	double notaEstudiantes[Estudiantes][Evaluaciones] =
	{{7.7, 6.8, 8.6, 7.3},
	 {9.6, 8.7, 8.9, 7.8},
	 {7.0, 9.0, 8.6, 8.1}};
	 
	cout << "El arreglo es: " << endl;
	imprimirArreglo(notaEstudiantes, Estudiantes, Evaluaciones);
	
	cout << setprecision(1);
	cout << "\n\nNota maxima: " << maxima(notaEstudiantes, Estudiantes, Evaluaciones);
	cout << "\n\nNota minima: " << minima(notaEstudiantes, Estudiantes, Evaluaciones);
	
	for(int i = 0; i < Estudiantes; i++) {
		cout << "\nPromedio estudiantes [" << i << "]: ";
		cout << promedio(notaEstudiantes[i], Evaluaciones);
	}
	
	cout << endl;
	
	return 0;
}

double minima(double notas[][Evaluaciones], int alumnos, int examenes){
	double notaMinima = 10.0;
	
	for(int i = 0; i < alumnos; i++)
		for(int j = 0; j < examenes; j++)
			if(notas[i][j] < notaMinima)
			notaMinima = notas[i][j];
			
	return notaMinima;
}

double maxima(double notas[][Evaluaciones], int alumnos, int examenes){
	double notaMaxima = 0.0;
	
	for(int i = 0; i < alumnos; i++)
		for(int j = 0; j < examenes; j++)
			if(notas[i][j] > notaMaxima)
				notaMaxima = notas[i][j];
				
	return notaMaxima;
	
}

double promedio(double conjuntoDeNotas[], int examenes){
	double total = 0.0;
	
	for(int i = 0; i < examenes; i++)
		total += conjuntoDeNotas[i]; 
		
	return total / examenes;
	
}

void imprimirArreglo(double notas[][Evaluaciones], int alumnos, int examenes){
	cout << "             [0]  [1]	[2]  [3]";
	
	for(int i = 0; i < alumnos; i++){
		cout << "\nnotasEstudiantes[" << i << "] ";
		for(int j = 0; j < examenes; j++)
			cout << setw(5) << fixed << setprecision(1) << notas[i][j];
	}
}
