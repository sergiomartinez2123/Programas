
#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	
	int n, suma=0;
	cout << "Ingrese el numero de elementos: ";
	cin >>n;
	
	for(int i=1;i<=n;i++){
		
		suma = suma + 4*i;
	
	}
	
	
	cout<<"la suma es: "<<suma<<endl;
	
	getch();
	return 0;
	
}
