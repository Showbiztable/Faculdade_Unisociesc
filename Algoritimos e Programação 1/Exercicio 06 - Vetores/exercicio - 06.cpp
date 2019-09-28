/*
6.	FPC que carregue um vetor de 15 elementos inteiros e verifique
a existência de elementos iguais a 30, mostrando a posição que 
estes elementos apareceram.
*/
#include<iostream>
#include<locale.h>
#include<stdio.h>
#include<math.h>
using namespace std;
main()
{
	  const int TAM=15;
	  int i, numero[TAM];
	  setlocale(LC_ALL,"Portuguese");
	  //leitura do vetor
	  cout<<"Informe "<<TAM<<" números\n";
	  for(i=0;i<TAM;i++)
	  {
	  	cout<<"Informe o número na posição "<<i<<"\n";
	  	cin>>numero[i];
	  }
	  //Verificar quais números são iguais a 30 mostra a posição desse numero no vetor3
	  cout<<"Posição dos valores iguais a 30: \n";
	  
	  for(i=0;i<TAM;i++)
	  {
	  	if(numero[i]==30)
	  		cout<<i<<"\n";
	  }
	  
	  system("Pause>>null");
}
