#include<iostream>
using namespace std;
int main(){
	int cant,i=1,primo=1,a=1;
	cout<<"Cantidad de números que deseas recibir:";
	cin>>cant;
	while(i<=cant){
		if(primo% a==0){
			if(primo==a){
				cout<<primo<<"-----";
				i++;
			}
			a=2;
			primo++;
		}
		else{
			a++;
		}
	}
	return 0;
}
