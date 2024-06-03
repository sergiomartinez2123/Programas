//Desarrolle una función que reciba un número y devuelva el valor 1 si es un número primo o 
//0 en caso contrario
#include <iostream>
using namespace std;

bool esPrimo(int n){
	
	if (n<=1){
		return false;
	}
	
	else if (n==2){
		return true;
	}
	
	else{
		for(int i =2;i < n; i++){
			
			if(n % i ==0){
				return false;
			}
			
			
		}
		
		return true;
	}
	
	
	
	
}

int main (void){
	
	for(int i=-10; i<=100; i++){
		cout << i << " -> " << esPrimo(i) << endl;
	}
	
	
	
	return 0;
}
