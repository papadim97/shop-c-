#include <iostream>
#include <cmath>
#include "Pelatis.h"
#include "Eidos.h"
#include <string.h>
using namespace std;


Pelatis::Pelatis()
{
    kodikos = -1;
	strcpy(onoma,"");
	pliroteoPoso = 0.0;    
}

 Pelatis::Pelatis(int kodikos1, char onoma1[], float pliroteoPoso1)
{
	kodikos = kodikos1;		 		
	strcpy(onoma,onoma1);
	pliroteoPoso = pliroteoPoso1;
}

void Pelatis::readData()
{
    cout<<"-> Doste ton kodiko tou pelati: ";
    cin >> kodikos;
    cout<<"-> Doste to onoma tou pelati: ";
    cin >> onoma;
    //cout<<"Dose pliroteo poso:";
    //cin >> pliroteoPoso;
}

void Pelatis::printData()
{
    cout<<"...Kodikos pelati: "<< kodikos <<endl;
	cout<<"...Onoma pelati: "<< onoma <<endl;
	cout<<"...Pliroteo poso pelati: "<< pliroteoPoso <<" euros " <<endl;
}


void Pelatis::agoraProiontos(Eidos ant)
{
	pliroteoPoso = pliroteoPoso + ant.getTimi();
}

void  Pelatis::metaforika()
{
    if (pliroteoPoso > 200)
        cout <<"...Gia tis agores o pelatis den tha epivarynthei me metaforika!" <<endl;
	else if (pliroteoPoso == 0)
		cout <<"...Xoris metaforika logo mi pragmatopoiisis agoron."<<endl;
	else
    	cout <<"...Kostos metaforikon: 50 euros" <<endl;
} 

