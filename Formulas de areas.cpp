/*Desarrollar un programa que muestre un menu que sea
1. encontrar el area de un triangulo 
2. encontrar el area de una pendiente
3. encontrar el area de un circulo*/
#include<iostream>
using namespace std;
int main (){
	float base;
	float altura;
	float resultado;
	int opcion;
	cout << "\n 1.- Area Triangulo \n";
	cout << "\n 2.- Area Circulo \n";
	cout << "\n 3.- Calculo de pendiente recta \n";
	cin >>opcion;
	switch (opcion){
		case 1:
		cout << "Ingrese la base del triangulo: ";
		cin >> base;
		cout << "Ingrese la altura del triangulo: ";
		cin >> altura;
		resultado=(base*altura)/2;
		cout << "El area de su triangulo es: " << resultado << endl;
		break;
	}
	return 0;
}
