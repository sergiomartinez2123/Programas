#include<iostream>

using namespace std;
//Ingreso de dos números enteros y/o reales, muestre su suma, resta, multiplicación, división y 
//el resto (módulo) de la división
int main (){
	
	int n1, n2, suma=0,resta=0,multiplicacion=0,division=0, residuo;
	
	
	cout<<"Ingrese primer numero real: "; cin>>n1;
	cout<<"Ingrese segundo numero real: "; cin>>n2;
	
	suma = n1 + n2;
	resta = n1 - n2;
	multiplicacion = n1 * n2;
	division = n1 / n2;
	residuo = n1 % n2; 

	
	cout<<"\nLa suma es: "<<suma<<endl;
	cout<<"\nLa resta es: "<<resta<<endl;
	cout<<"\nLa multiplicacion es: "<<multiplicacion<<endl;
	cout<<"\nLa division es: "<<division<<endl;
	cout<<"\nEl residuo de la division es: "<<residuo<<endl;
	
	return 0;
}
