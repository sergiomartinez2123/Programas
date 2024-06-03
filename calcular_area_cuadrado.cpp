// programa para calcular el area de un cuadrado
#include <iostream>
using namespace std;

class cuadrado
{
	//Identificador 
	public:
		//Atributos
		float base;
		float altura;
		
		//Metodo constructor 
		cuadrado(float b, float a)
		{
			this->altura = a;
			this->base = b;
		}
		//calcular
		float calcularArea()
		{
			//A = b*h
			return this->base*this->altura;
			
		}
	
};

int main()
{
	float b,a;
	cout<<"Ingrese la base del cuadrado \n";
	cin >> b;
	cout << "Ingrese la altura del cuadrado \n";
	cin >> a;
	
	cuadrado cuadrado1 = cuadrado(b,a);
	
	cout <<"El Area es igual a : " <<cuadrado1.calcularArea() << endl;
	system ("pause");
}



