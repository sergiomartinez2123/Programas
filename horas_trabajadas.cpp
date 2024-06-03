// se requiere determinar el sueldo semanal de un trabajador con base en 
//las horas que trabaja y el pago por hora que recibe 
#include<iostream>
using namespace std;
int main(){
	
	float pago,sueldo,horas;
	cout<<"Ingrese las horas trabajadas: ";
	cin>>horas;
	cout<<"Ingrese el pago por hora: ";
	cin>> pago;
	sueldo = horas*pago;
	cout<<"El sueldo semanal es: $"<<sueldo;
	
	return 0;
}

