#include<iostream>
using namespace std;

float salario(float horas, float valor){
	
	float x;
	x = horas*valor;
	return x;
}

int main(){
	
	float h, valor;
	cout<<"Ingrese las horas trabajadas: "<<endl;
	cin>>h;
	cout<<"Ingrese el valor por horas de trabajo, en dolares: "<<endl;
	cin>>valor;
	cout<<"El salario es: "<<salario(h,valor);
	
	return 0;
}
