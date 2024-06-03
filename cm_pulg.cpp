//convertir una medida de centimetros a pulgadas
#include<iostream>

using namespace std;

int main(){
	
	double centimetros,pulgadas;
	cout<<"Ingrese en CM: "; cin>>centimetros;
	pulgadas = centimetros/2.54;
	cout<<"\nEl valor en pulgadas es: "<<pulgadas;
	
	return 0;
}
