/*
2.	FPC que leia um vetor de 10 números reais e mostre-os na ordem inversa. 
*/
#include<iostream>
#include<locale.h>
#include<stdio.h>
#include<math.h>
using namespace std;
main()
{
	  const int numeros=10;
	  float pessoas[numeros];
	  int cont;
	  setlocale(LC_ALL,"Portuguese");
	  //leitura do vetor
	  cout<<"Informe "<<numeros<<" Números reais\n";
	  for(cont=0;cont<numeros;cont++)
	  {
	  		cout<<"Informe o "<<cont+1<<" número real\n";
	  		cin>>pessoas[cont];
	  }
	  //mostrar o vetor na ordem inversa
	  for(cont=numeros-1;cont>=0;cont--)
	  {
	  	cout<<"Número "<<cont+1<<" : "<<pessoas[cont]<<"\n";
	  }
	  system("Pause>>null");
}
