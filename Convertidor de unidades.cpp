#include<iostream>
using namespace std;
	int main(){
	int opcion;
	cout <<"Seleccione la conversion que desea realizar: \n";
	cout <<"1. Gb a Mb \n" ;
	cout <<"2. Mb a Kb \n";
	cout <<"3. Kb a Byte \n";
	cout <<"4. Salir \n";
	cin >> opcion;
	switch(opcion){
		case 1:
			int gb, producto1;
			cout <<"Haz seleccionado Gb a Mb, ingrese los Gb que desea convertir: \n";
			cin>>gb;
			producto1 = gb *1024;
			cout << "El resultado en Gb es: "<<producto1<< " Mb: \n";
			break;
		default:
			cout <<"Valor Invalido\n";
			break;
		case 2: 
			int mb, producto2;	
			cout <<"Haz seleccionado Mb a Kb, ingrese los mb que desea convertir: \n ";
			cin>>mb;
			producto2 = mb *1024;
			cout <<"El resultado en Mb: "<<producto2<< " Kb: \n";
			break;
		case 3:
			int kb, producto3;
			cout <<"Haz seleccionado kb a byte, ingrese los kb que desea convertir: \n ";
			cin>>kb;
			producto3 = kb *1024;
			cout <<"El resultado en Kb: "<<producto3<< " Byte: \n";
			break; 
		case 4:
		cout <<"Seleccionaste salir, Vuelva pronto";	
		}
	return 0;
}
