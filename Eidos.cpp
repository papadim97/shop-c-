#include <iostream>
#include <cmath>
#include "Eidos.h"
#include <string.h> // Gia xrhsh ths strcpy

using namespace std;


Eidos::Eidos()
{
	kodikos = -1;
	strcpy(perigrafi,"");
	timi = 0.0;              
}

Eidos::Eidos(int kodikos1, char perigrafi1[], float timi1)
{
	kodikos = kodikos1;		 		
	strcpy(perigrafi,perigrafi1);
	timi = timi1;
}

void Eidos::setData(int kodikos1, char perigrafi1[], float timi1)
{
	kodikos = kodikos1;		 		
	strcpy(perigrafi,perigrafi1);
	timi = timi1;
}

void Eidos::printData()
{
	cout<<"kodikos = "<< kodikos <<endl;
	cout<<"perigrafi = "<< perigrafi <<endl;
	cout<<"timi = "<< timi <<endl;
}

int Eidos::getKodikos()
{
	return kodikos;
}        
		
float Eidos::getTimi()
{
	return timi;	
}

char * Eidos::getPerigrafi()
{
	int	i;
	
	// Sto shmeio opou tha vrethei o xarakthras tou kenou vazo ton xaraktira lhxhs oste na oloklirothei h lexh
	i = 0;
	while(perigrafi[i] != ' ')  i++;
	perigrafi[i]='\0';
	
	return perigrafi;
}

