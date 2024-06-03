//convertir de horas, minutos a segundos 
#include <iostream>

using namespace std;

int main(){
	
	double hora,min,seg,segundos;
	cout<<"Ingrese tiempo en segundos: ";
	cin>>segundos;
	
	hora = segundos/3600;
	min = segundos/60;
	
	cout<<"\nEl valor en horas es: "<<hora;
	cout<<"\nEl valor en min es: "<<min;
	
	return 0;
}
