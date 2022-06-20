#include<iostream>
using namespace std;
int main (){
	int contra = 151821;
	int password;
	cout <<"Ingrese su Password: "<<endl;
	cin >> password;
	for (int i=1; 1<5; i++){
		if (password == contra){
			cout <<"Contraseña Correcta mano :D"<<endl;
			break;
		}else{
			cout <<"Contraseña Incorrecta, ingresar nuevamente:"<<endl;
			cin >> password;
		}if(i==4){
			cout <<"Hiciste 5 intentos, tu telefono se reiniciara"<<endl;	
		}
	}
	return 0;
}
