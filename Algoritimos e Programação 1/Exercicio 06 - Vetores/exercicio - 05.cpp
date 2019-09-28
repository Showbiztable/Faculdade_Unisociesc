/*
5.	FPC que carregue um vetor com sete números inteiros, calcule e mostre:
a)	Os números múltiplos de 2;
b)	Os números múltiplos de 3;
c)	Os números múltiplos de 2 e 3;
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
	  		cout<<"Informe o "<<cont+1<<" número\n";
	  		cin>>numeros[cont];  		
	  		
		  }while(numeros[cont] < 0);
	  }
	  for(cont=0;cont<elementos;cont++)
	  {
	 		  	
	  	if(numeros[cont] % 2 == 0 && numeros[cont] % 3 != 0)	  	
	  	cout<<"Número "<<cont+1<<" : "<<numeros[cont]<<" É múltiplo de dois \n";
	  	
	  	if(numeros[cont] % 3 == 0 && numeros[cont] % 2 != 0 )	  	
	  	cout<<"Número "<<cont+1<<" : "<<numeros[cont]<<" É múltiplo de três \n";
	  	
	  	if (numeros[cont] % 2 == 0 && numeros[cont] % 3 == 0 )	  	
	  	cout<<"Número "<<cont+1<<" : "<<numeros[cont]<<" É múltiplo de dois e três \n";
	  	
	  	else if (numeros[cont] % 2 != 0 && numeros[cont] % 3 != 0 )
	  	cout<<"Número "<<cont+1<<" : "<<numeros[cont]<<" Não é múltiplo de dois e nem de três \n";
	  	
	  	
	  }
	  system("Pause>>null");
}
