/*
2.	FPC que leia um vetor de 10 n�meros reais e mostre-os na ordem inversa. 
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
	  cout<<"Informe "<<numeros<<" N�meros reais\n";
	  for(cont=0;cont<numeros;cont++)
	  {
	  		cout<<"Informe o "<<cont+1<<" n�mero real\n";
	  		cin>>pessoas[cont];
	  }
	  //mostrar o vetor na ordem inversa
	  for(cont=numeros-1;cont>=0;cont--)
	  {
	  	cout<<"N�mero "<<cont+1<<" : "<<pessoas[cont]<<"\n";
	  }
	  system("Pause>>null");
}
