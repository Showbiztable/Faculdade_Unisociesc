/*
Lucas Trevizan
9.	FPC que leia um vetor de 50 posi��es de n�meros inteiros e mostre somente os n�meros positivos.
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
	  cout<<"Informe 50 n�meros inteiros\n";
	  for(i=0;i<vetor;i++)
	  {
	  	cout<<"Digite o "<<i+1<<"� n�mero\n";
	  	cin>>valor[i];
	  }
	  cout<<"N�meros Positivos:\n";
	  for(i=0;i<vetor;i++)
	  {
	  	if(valor[i]>=0)
	  	{
	  	cout<<valor[i]<<"\n";	  	
        }
	  }
	  system("Pause>>null");
}
