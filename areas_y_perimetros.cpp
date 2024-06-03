#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

int main ()
{
	// variables para cuadrado, rectangulo, triangulo equilatero
	
	int ladoc,areac,perimetroc, baser,alturar,arear,perimetror;
	
	float ladot,alturat,areat,perimetrot,areacir,radiocir,perimetrocir,diametrocir;
	
	cout<<"Programa para calcular areas y perimetros"<<endl;
	
	cout<<"Ingrese el lado del cuadrado: "<<endl;
	cin>>ladoc;
	areac= ladoc*ladoc;
	perimetroc= ladoc*4;
	cout<< "El resultado del Area del cuadrado es: "<<areac<<endl; 
	cout<< "El resultado del Perimetro del cuadrado es: "<<perimetroc<<endl; 
	
	
	cout<<"Ingrese la base del rectangulo: "<<endl;
	cin>>baser;
	cout<<"Ingrese la altura del rectangulo: "<<endl;
	cin>>alturar;
	arear= baser*alturar;
	perimetror= (baser*2)+(alturar*2);
	cout<< "El resultado del Area del rectangulo es: "<<arear<<endl; 
	cout<< "El resultado del Perimetro del rectangulo es: "<<perimetror<<endl; 
	
	
	cout<<"Ingrese el lado del triangulo: "<<endl;
	cin>>ladot;
	cout<<"Ingrese la altura del triangulo: "<<endl;
	cin>>alturat;
	areat= ladot*alturat/2;
	perimetrot= 3*ladot;
	cout<< "El resultado del Area del triangulo es: "<<areat<<endl; 
	cout<< "El resultado del Perimetro del triangulo es: "<<perimetrot<<endl;
	
	
	printf("\n Introduzca radio: ");
	scanf("%f",&radiocir);
	
	areacir = 3.141592*radiocir*radiocir;
	diametrocir = radiocir*2;
	perimetrocir = 3.141592*diametrocir;
	
	
		printf("\n El area de la circunferencia es: %.2f",areacir);
		printf("\n El perimetro de la circunferencia es: %.2f",perimetrocir);
		
	
	getch(); /* Pausa */
	return 0;

}
