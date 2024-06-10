#include<iostream>
using namespace std;

void prom(float b){
	
	float a[3];
	cout<<"\n Ingrese tres numeros: \n\n";
	cin>>a[0]>>a[1]>>a[2];
	a[3]=(a[0]+a[1]+a[2])/3;
	cout<<"\n El promedio de los tres numeros ingresados es: "<<a[3]<<endl<<endl;
	if(a[3]>7){
		
		cout<<"\n \"APROBADO\"\n\n";
	}
	else{
		cout<<"\n \"MEJORE NOTA\"\n\n";
	}
}

int main(){
	
	float b;
	prom(b);
	
	
	return 0;
	
}
