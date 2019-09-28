/*
4.	FPC que carregue um vetor de seis elementos numéricos inteiros, calcule e mostre:
a)	A quantidade de números pares;
b)	Quais os números pares;
c)	A quantidade de números impares;
d)	Quais os números impares;
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
	  cout<<"Informe "<<elementos<<" numéricos\n";
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
	  	
		  cout<<"Número "<<cont+1<<" : "<<numeros[cont]<<" É par\n";
		  		  

	  	else if(numeros[cont] % 2 != 0)
	  	
	  	  cout<<"Número "<<cont+1<<" : "<<numeros[cont]<<" É impar\n";
	  	  
	  	  
	  }
	  for(cont=0;cont<elementos;cont++)
	  {
	  	if(numeros[cont]%2==0)
	  	
	  	quantPar++;
	  	
	  	else if(numeros[cont]%2 != 0)
	  	
	  	quantImpar++;
	  }
	  	  
		cout<<"A quantidade de números impares é "<<quantImpar<<"\n";
		cout<<"A quantidade de números pares é "<<quantPar<<"\n";	  	

	  system("Pause>>null");
}
