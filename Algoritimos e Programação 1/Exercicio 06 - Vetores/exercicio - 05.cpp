/*
5.	FPC que carregue um vetor com sete n�meros inteiros, calcule e mostre:
a)	Os n�meros m�ltiplos de 2;
b)	Os n�meros m�ltiplos de 3;
c)	Os n�meros m�ltiplos de 2 e 3;
*/
#include<iostream>
#include<locale.h>
#include<stdio.h>
#include<math.h>
using namespace std;
main()
{
	  const int elementos=7;
	  int cont, numeros[elementos];
	  setlocale(LC_ALL,"Portuguese");
	  for(cont=0;cont<elementos;cont++)
	  {
	  	do{
	  		cout<<"Informe o "<<cont+1<<" n�mero\n";
	  		cin>>numeros[cont];  		
	  		
		  }while(numeros[cont] < 0);
	  }
	  for(cont=0;cont<elementos;cont++)
	  {
	 		  	
	  	if(numeros[cont] % 2 == 0 && numeros[cont] % 3 != 0)	  	
	  	cout<<"N�mero "<<cont+1<<" : "<<numeros[cont]<<" � m�ltiplo de dois \n";
	  	
	  	if(numeros[cont] % 3 == 0 && numeros[cont] % 2 != 0 )	  	
	  	cout<<"N�mero "<<cont+1<<" : "<<numeros[cont]<<" � m�ltiplo de tr�s \n";
	  	
	  	if (numeros[cont] % 2 == 0 && numeros[cont] % 3 == 0 )	  	
	  	cout<<"N�mero "<<cont+1<<" : "<<numeros[cont]<<" � m�ltiplo de dois e tr�s \n";
	  	
	  	else if (numeros[cont] % 2 != 0 && numeros[cont] % 3 != 0 )
	  	cout<<"N�mero "<<cont+1<<" : "<<numeros[cont]<<" N�o � m�ltiplo de dois e nem de tr�s \n";
	  	
	  	
	  }
	  system("Pause>>null");
}
