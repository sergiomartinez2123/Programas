#include<iostream>
using namespace std;

void dat(double x, int y){
	
	cout<< "\n Ingrese un dato entero y real: \n \n";
	cin>>y>>x;
	cout<<"\n Los datos Ingresados son: \n \n"<<x<<"\n \n"<<y;
	
}

int main(){
	double x;
	int y;
	dat(x,y);
	
	return 0;
	
	
}
