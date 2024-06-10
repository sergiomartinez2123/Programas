#include<stdio.h>
int monto,desc;
main()
{
	printf ("Digite el monto ");
	scanf ("%d",&monto);
	if(monto>10000)
	desc = (monto*0.2);
	else
	{
		desc = (monto*0.1);
	}
	
	printf("El monto es: %d",monto);
	printf ("El descuento es: %d",desc);
}
