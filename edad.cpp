#include<iostream>
using namespace std;

void edad(double x){
	cout<<"\n Ingrese la edad en años: \n\n";
	cin>>x;
	cout<<"\n La edad Ingresada es de "<<x<<"años: \n\n";
}

int main(){
	double x;
	edad(x);
	
	return 0;
}
