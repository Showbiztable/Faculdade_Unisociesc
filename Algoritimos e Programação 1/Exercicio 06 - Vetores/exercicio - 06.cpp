/*
6.	FPC que carregue um vetor de 15 elementos inteiros e verifique
a exist�ncia de elementos iguais a 30, mostrando a posi��o que 
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
	  cout<<"Informe "<<TAM<<" n�meros\n";
	  for(i=0;i<TAM;i++)
	  {
	  	cout<<"Informe o n�mero na posi��o "<<i<<"\n";
	  	cin>>numero[i];
	  }
	  //Verificar quais n�meros s�o iguais a 30 mostra a posi��o desse numero no vetor3
	  cout<<"Posi��o dos valores iguais a 30: \n";
	  
	  for(i=0;i<TAM;i++)
	  {
	  	if(numero[i]==30)
	  		cout<<i<<"\n";
	  }
	  
	  system("Pause>>null");
}
