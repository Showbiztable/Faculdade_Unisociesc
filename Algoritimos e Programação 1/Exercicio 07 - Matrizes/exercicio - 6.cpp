/*
Lucas Trevizan Arabites
6.	Faça um Programa que tenha uma matriz 3x4 gerada a partir números aleatórios e calcule qual o maior e o menor número informado.
*/
#include<iostream>
#include<locale.h>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
using namespace std;
main()
{
	  const int linha=3, coluna=4;
	  int i, j, menorNumero, maiorNumero, numero[linha][coluna];
	  srand(time(NULL));
	  setlocale(LC_ALL,"Portuguese");
	  for(i=0;i<linha;i++)
	  {
	  	 
	  	for(j=0;j<coluna;j++)
	    {
	        numero[i][j]=rand() % 100; 
	        cout<<numero[i][j]<<"\n";
	  	   	         
	           if(i==0 && j==0)
	            {
	                menorNumero=numero[i][j];
	  	   	        maiorNumero=numero[i][j];
				}
				else
				{
				 	if(numero[i][j]>maiorNumero)
				 	maiorNumero=numero[i][j];
				 	if(numero[i][j]<menorNumero)
				 	menorNumero=numero[i][j];
				}
		}//Fim da coluna;
	  }//Fim da linha;
	  cout<<"O menor valor informado é "<<menorNumero<<"\n";
	  cout<<"O maior valor informado é "<<maiorNumero<<"\n";	  
	  system("Pause>>null");
}



