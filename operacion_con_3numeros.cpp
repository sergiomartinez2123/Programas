//Ingrese de tres números enteros y/o reales, muestre su respectiva suma y multiplicación
#include <iostream>
using namespace std;

int main (){
	
	float num1,num2,num3,suma,multiplicacion;
	
	cout<<"Ingrese primer numero: ";
	cin>>num1;
	cout<<"Ingrese segundo numero: ";
	cin>>num2;
	cout<<"Ingrese tercer numero: ";
	cin>>num3;
	
	suma = num1+num2+num3;
	multiplicacion = num1*num2*num3;
	cout<<"\nEl resultado de la suma es: "<<suma;
	cout<<"\nEl resultado de la multiplicacion es: "<<multiplicacion;
	
	return 0;
}

