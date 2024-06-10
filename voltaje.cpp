#include<stdio.h>

float volt(float x){
	
	float Kv = 1000, bom = 120;
	x = (3*bom)/Kv;
	
	return x;	
	
}

int main(){
	
	float x;
	printf("\n El voltaje de los tres bombillos es: %.2fkv\n \n",volt(x));
	
	return 0;
	
	
}
