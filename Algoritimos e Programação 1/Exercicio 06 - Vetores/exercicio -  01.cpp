/*
1.	FPC que leia um vetor de 5 n�meros inteiros e mostre-os. 
*/
#include<iostream>
#include<locale.h>
#include<stdio.h>
#include<math.h>
using namespace std;
main()
{
	  const int numeros=5;
	  float coisas[numeros];
	  int cont;
	  setlocale(LC_ALL,"Portuguese");
	  cout<<"Informe "<<numeros<<" N�meros inteiros\n";
	  for(cont=0;cont<numeros;cont++)
	  {
	  		do{
	  				cout<<"Informe o "<<cont+1<<" n�mero inteiro\n";
	  				cin>>coisas[cont];
	  				cont++;
			  }while(cont<numeros);
	  }
	  for(cont=0;cont<numeros;cont++)
	  {
	  		cout<<"N�mero "<<cont+1<<" : "<<coisas[cont]<<"\n";
	  }
	  system("Pause>>null");
	  getch;
}
