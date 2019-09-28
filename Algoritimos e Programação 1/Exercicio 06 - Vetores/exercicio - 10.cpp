/*
Lucas Trevizan
10.	FPC que leia um vetor inteiro de 30 posições e crie um segundo
vetor, substituindo os valores nulos por 1. Mostre os dois vetores.
*/
#include<iostream>
#include<locale.h>
#include<stdio.h>
#include<math.h>
using namespace std;
main()
{
	  const int vetor=5, vetor2=5;
	  int i, valor[i];
	  setlocale(LC_ALL,"Portuguese");
	  cout<<"Informe 30 números inteiros\n";
	  for(i=0;i<vetor;i++)
	  {
	  	cout<<"Digite o "<<i+1<<"º número inteiro:\n";
	  	cin>>valor[i];	  	
	  }
	  cout<<"Valores do 1º vetor:\n";
	  for(i=0;i<vetor;i++)
	  {
	  	cout<<"Número "<<i+1<<" = "<<valor[i]<<"\n";
	  }
	  cout<<"Valores do 2º vetor:\n";
	  for(i=0;i<vetor2;i++)
	  {
	  	if(valor[i]=0)
	  	{
	  		valor[i]==1;
		}
		cout<<"Número "<<i+1<<" = "<<valor[i]<<"\n";
	  }	  
	  system("Pause>>null");
}

