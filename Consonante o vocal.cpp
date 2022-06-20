/*Genere un programa que permita ingresar un caracter.
E identifique si es vocal o consonante*/
#include<iostream>
using namespace std;
int main (){
	cout <<"Ingrese una letra \n";
	char letra;
	cin>>letra;
	if(letra=='a' || letra=='e' || letra=='i' || letra=='o' || letra=='u')
    cout<<"Es una vocal";
	else
    cout<<"Es consonante";
	return 0;
}
