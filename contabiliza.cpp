// stalin franci
// Sebastián Benito Rosado Moncayo
#include<iostream>
using namespace std;

int main()
{
	int sbrmi=0,sbrml;
	float sbrmx,sbrms=0;
	cout<<"ingrese el limite l="; cin>>sbrml;
	do{
		
	cout<<"ingrese el numero x="; cin>>sbrmx;
	sbrmi=sbrmi+1;
	sbrms=sbrms+sbrmx;



	}while(sbrmi<sbrml);
	cout<<"Se ingresaron "<<sbrml<<" numeros "<< "que sumaron "<<sbrms<<endl;
	return 0;



}
