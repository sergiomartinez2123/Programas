//operaciones artimeticas de dos nuemros 
#include<iostream>

using namespace std;
int main(){
	
	int num1, num2,suma,resta,multiplicacion;
	float division;
	
	cout<<"Digite el primer numero: ";
	cin>>num1;
	
	cout<<"Digite el segundo numero: ";
	cin>>num2;
	
	suma=num1+num2;
	cout<<"la suma es: "<<suma<<endl;
	
	resta=num1-num2;
	cout<<"la resta es: "<<resta<<endl;
	
	multiplicacion=num1*num2;
	cout<<"la multiplicacion es: "<<multiplicacion<<endl;
	
	division=num1/num2;
	cout<<"la division es: "<<division<<endl;
	
	return 0;
	
}


