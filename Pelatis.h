#ifndef PELATIS_H
#define PELATIS_H
#include "Eidos.h"


class Pelatis 
{
     private:
          int kodikos;
          char onoma[30];
	      float pliroteoPoso;
    public:
	      Pelatis();
		  Pelatis(int kodikos1, char onoma1[], float pliroteoPoso1);    
          void readData();
		  void printData();
		  void agoraProiontos(Eidos ant);
          void metaforika(); 

};
#endif

