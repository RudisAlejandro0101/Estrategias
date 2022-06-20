#include<iostream>
using namespace std;
int main (){
	float num1, num2;
	int opcion;
	float resultado;
	cout <<"Ingrese el primer numero: \n";
	cin >> num1; 
	cout <<"Ingrese el segundo numero: \n";
	cin >> num2;
	cout <<"operaciones matematicas \n";
	cout << "\n 1.- Suma";
	cout << "\n 2.- Resta";
	cout << "\n 3.- Multiplicacion";
	cout << "\n 4.- Division \n";
	cin >>opcion;
	switch (opcion){
		case 1 :
		//Realizar la operacion suma
		resultado = num1+ num2;
		cout <<"la suma de los numeros es : "<<resultado<<endl;
		break;
		case 2 :
		//Relaizar la operacion resta
		resultado = num1 - num2;
		cout <<"la resta de los numeros es : "<<resultado<<endl;
		break;
		case 3 :
		//Realizar la operacion multiplicacion
		resultado = num1 * num2;
		cout <<"la multiplicacion de los numeros es : "<<resultado<<endl;
		break;
		case 4 :
		//Realizar la operacion division 
		resultado = num1 / num2;
		cout <<"la division de los numeros es: "<<resultado<<endl;
		break;
	}
	return 0;
}
