#include<iostream>

using namespace std;
//Ingreso de dos n�meros enteros y/o reales, muestre su suma, resta, multiplicaci�n, divisi�n y 
//el resto (m�dulo) de la divisi�n
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
