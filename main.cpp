#include <conio.h> // Gia xrhsh ths getch()
#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <string.h> // Gia xrhsh ths strcpy

#include "Eidos.h"
#include "Pelatis.h"

#define N 5

using namespace std;

void diavasmaProionton(FILE *fin, Eidos pinPro[]); 
int anazitisiKodikou(Eidos pinPro[], int kodPro); 

int main(int argc, char** argv) {
	system("color a");

	int kodPro, thesiPin;
	Eidos pinPro[N];
	Pelatis Pel;
	FILE *fin;

	Pel.readData();
	cout <<"-> To xreos tou pelati einai mideniko!" <<endl <<endl;

	fin = fopen("proionta.txt", "r");
	if (fin != NULL)
    {
		diavasmaProionton(fin, pinPro);
		fclose(fin);
		
		cout <<"-> Doste kodiko proiontos gia agora (0 gia exodo): ";
		cin >>kodPro;		
		while (kodPro != 0)
		{
			thesiPin = anazitisiKodikou(pinPro, kodPro);
			if (thesiPin != -1)
			{
				Pel.agoraProiontos(pinPro[thesiPin]);				
				cout << "(+) Sygxaritiria! Agorastike to proion \"" << pinPro[thesiPin].getPerigrafi() << "\"." <<endl <<endl;
			}
			else
			{
				cout << "(-) To proion pou zitisate den vrethike!" <<endl <<endl;
			}
			
			fin = fopen("proionta.txt", "r");
			diavasmaProionton(fin, pinPro);
			cout << "-> Doste kodiko proiontos gia agora (0 gia exodo): ";
			cin >> kodPro;	
		}
		cout<<endl;

     	cout <<"APOTELESMA AGORON PELATI"   <<endl;
		cout <<"========================" <<endl;
		Pel.printData();
		Pel.metaforika();
		cout <<endl <<"< Euxaristoume gia tis agores sas! >"<<endl;
		printf("\t");
		system("date /t");
		cout <<endl;
	}
    else
	{
		cout <<"(-) H lista ton prointon den einai diathesimi!" <<endl;
	}
	fclose(fin);

	cout <<" To programma termatistike." <<endl <<" Parakalo patiste ena pliktro gia exodo...";
	getch();
	return 0;
}


void diavasmaProionton(FILE *fin, Eidos pinPro[])
{
   	int i, kodikos;
    char perPro[20];
    float timi;
    
    cout <<"LISTA DIATHESIMON PROIONTON"   <<endl;
	cout <<"===========================" <<endl;
	cout <<"K/K PROION             TIMI"   <<endl;
	for(i=0; i<N; i++)
    {
       	fscanf(fin,"%d",&kodikos);            
      	fgets(perPro,20,fin);
       	fscanf(fin,"%f",&timi);
    	cout <<kodikos <<" " <<perPro <<setw(4) <<fixed <<setprecision(2) <<timi <<endl;
    	pinPro[i].setData(kodikos, perPro, timi);
    }
    cout <<endl;
}


int anazitisiKodikou(Eidos pinPro[], int kodPro)
{
	int i, thesiPin;

	thesiPin = -1;
	for(i=0; i<N; i++)
	{
		if(pinPro[i].getKodikos() == kodPro)
		{
			thesiPin = i;
			break;
		}	
	}
	
	return thesiPin;
}

