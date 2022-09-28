//Programa que presenta las operaciones básicas
//Creado por Stalin Francis
//Sebastián Benito Rosado Moncayo
//Fecha: 14-09-2022

#include<iostream>
using namespace std;

int main()
{
	float sbrmy, sbrmx,sbrms,sbrmm,sbrmd,sbrmr;
	//Ingreso de datos
	cout<<"Ingrese en valor de x=:";
	cin>>sbrmx;
	cout<<"Ingrese en valor de y=:";
	//Operaciones 
	cin>>sbrmy;
	sbrms=sbrmx+sbrmy;
	sbrmm=sbrmx*sbrmy;
	sbrmd=sbrmx/sbrmy;
	sbrmr=sbrmx-sbrmy;
	//Muestra los resutaldos.
	cout<<"Las suma de "<<sbrmx<<" + "<<sbrmy<<" = "<<sbrms<<endl;
	cout<<"Las multiplicacion de "<<sbrmx<<" * "<<sbrmy<<" = "<<sbrmm<<endl;
	cout<<"Las division de "<<sbrmx<<" / "<<sbrmy<<" = "<<sbrmd<<endl;
	cout<<"Las resta de "<<sbrmx<<" - "<<sbrmy<<" = "<<sbrmr<<endl;
	return 0 ;

}

