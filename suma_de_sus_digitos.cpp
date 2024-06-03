#include <iostream>
using namespace std;

int main(){
	
	int n;
	cout<<"Ingrese cualquier numero:  ";
	cin>>n;
	int suma = 0;
	while(n>0){
		suma = suma + n%10;
		n = n/10;
	}
	
	cout <<"La suma es: "<<suma;
	
	return 0;
}
