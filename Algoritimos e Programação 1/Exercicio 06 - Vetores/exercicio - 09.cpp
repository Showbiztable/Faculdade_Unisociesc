/*
Lucas Trevizan
9.	FPC que leia um vetor de 50 posições de números inteiros e mostre somente os números positivos.
*/
#include<iostream>
#include<locale.h>
#include<stdio.h>
#include<math.h>
using namespace std;
main()
{
	  const int vetor=10;
	  int i, valor[vetor];	  
	  setlocale(LC_ALL,"Portuguese");
	  cout<<"Informe 50 números inteiros\n";
	  for(i=0;i<vetor;i++)
	  {
	  	cout<<"Digite o "<<i+1<<"º número\n";
	  	cin>>valor[i];
	  }
	  cout<<"Números Positivos:\n";
	  for(i=0;i<vetor;i++)
	  {
	  	if(valor[i]>=0)
	  	{
	  	cout<<valor[i]<<"\n";	  	
        }
	  }
	  system("Pause>>null");
}
