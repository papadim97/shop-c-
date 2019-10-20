#ifndef EIDOS_H
#define EIDOS_H

class Eidos
{
   private:
        int kodikos;		 		
        char perigrafi[50];
		float timi;  
   
   public:
        Eidos();
        Eidos(int kodikos1, char perigrafi1[], float timi1);
	    void setData(int kodikos1, char perigrafi1[], float timi1);            
		void printData();
	    int getKodikos();
        float getTimi();
		char * getPerigrafi(); // Epistrofi tis perigrafis tou antikeimenou
};
#endif

