/*
Lucas Trevizan e Doglas E E Cattoni
8.	FPC que leia dois vetores de 10 posi��es e fa�a a multiplica��o dos elementos de mesmo �ndice, 
colocando o resultado em um terceiro vetor. Mostre o vetor resultante.

*/
#include<iostream>
#include<locale.h>
#include<stdio.h>
#include<math.h>
using namespace std;
main()
{
	const int TAM=10;
	int num1[TAM], num2[TAM], num3[TAM], mult[TAM], soma, i;
	setlocale(LC_ALL,"Portuguese");
	//leitura do vetor num1
	cout<<"Informe "<<TAM<<" n�meros para o vetor 1:\n";
	for(i=0;i<TAM;i++)
	{
		cin>>num1[i];
	}
	
	//Leitura do vetor num2
	cout<<"Informe "<<TAM<<" n�meros para o vetor 2:\n";
	for(i=0;i<TAM;i++)
	{
		cin>>num2[i];
	}
	//Multiplica��o dos vetores
	cout<<"Resultado da multiplica��o dos vetores: \n";
	for(i=0;i<TAM;i++)
	{
		mult[i]=num1[i]*num2[i];
		cout<<num1[i]<<" * "<<num2[i]<<" = "<<mult[i]<<"\n";
	}
	for(i=0;i<TAM;i++)
	{
		soma+=mult[i];
	}
		cout<<soma<<" � a soma de todas as multiplica��es.\n";
	  system("Pause>>null");

}

