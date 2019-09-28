/*
3.	Faça um Programa que leia uma matriz 5x5 e após mostre todos os números da diagonal principal da matriz.
*/
#include<iostream>
#include<locale.h>
#include<stdio.h>
#include<math.h>
using namespace std;
main()
{
	  const int linha=5, coluna=5;
	  int i, j;
	  float num[linha][coluna];
	  setlocale(LC_ALL,"Portuguese");
	  //Leitura da Matriz:
	  for(i=0;i<linha;i++)
	  {
	  	cout<<"Informe os números da linha "<<i+1<<"\n";
	  	for(j=0;j<coluna;j++)
		{
			cout<<"Informe o número "<<j+1<<"\n";
			cin>>num[i][j];
		}//Fim da coluna;
	  }//Fim da linha;
	  //Mostrar a Matriz:
	  cout<<"Elementos da diagonal principal:\n";
	  for(i=0;i<linha;i++)
	  {
	  	for(j=0;j<coluna;j++)
	  	{
	  		if(i==j)
	  		{
	  			cout<<num[i][j]<<"\n";
			}
		}//Fim da coluna;
	  }//Fim da linha;
	  system("Pause>>null");
}
