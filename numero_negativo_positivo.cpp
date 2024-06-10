#include<iostream>
using namespace std;

void num(float a){
	
	cout<<"\n Ingrese un numero: \n\n";
	cin>>a;
	if(a>0){
		
	   cout<<"\n El Numero Ingresado es positivo \n\n";	
	}
	
	else if(a<0){
		cout<<"\n El Numero Ingresado es negativo \n\n";	
	}
}

int main (){
	
	float a;
	num(a);
	
	return 0;
}
