/*
4.	FPC que carregue um vetor de seis elementos num�ricos inteiros, calcule e mostre:
a)	A quantidade de n�meros pares;
b)	Quais os n�meros pares;
c)	A quantidade de n�meros impares;
d)	Quais os n�meros impares;
*/
#include<iostream>
#include<locale.h>
#include<stdio.h>
#include<math.h>
using namespace std;
main()
{
	  const int elementos=6;
	  int cont, quantPar=0, quantImpar=0, numeros[elementos];
	  setlocale(LC_ALL,"Portuguese");
	  cout<<"Informe "<<elementos<<" num�ricos\n";
	  for(cont=0;cont<elementos;cont++)
	  {
	  	do{
	  		  cout<<" Informe o "<<cont+1<<" numero\n";
	  		  cin>>numeros[cont];
		  }while(numeros[cont]<0);
		  
	  }
	  for(cont=0;cont<elementos;cont++)
	  {
	  	if(numeros[cont] % 2 == 0)
	  	
		  cout<<"N�mero "<<cont+1<<" : "<<numeros[cont]<<" � par\n";
		  		  

	  	else if(numeros[cont] % 2 != 0)
	  	
	  	  cout<<"N�mero "<<cont+1<<" : "<<numeros[cont]<<" � impar\n";
	  	  
	  	  
	  }
	  for(cont=0;cont<elementos;cont++)
	  {
	  	if(numeros[cont]%2==0)
	  	
	  	quantPar++;
	  	
	  	else if(numeros[cont]%2 != 0)
	  	
	  	quantImpar++;
	  }
	  	  
		cout<<"A quantidade de n�meros impares � "<<quantImpar<<"\n";
		cout<<"A quantidade de n�meros pares � "<<quantPar<<"\n";	  	

	  system("Pause>>null");
}
