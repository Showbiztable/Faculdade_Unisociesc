/*
5.	Fa�a um algoritmo que receba o pre�o de custo de um produto e  mostre o valor de venda.
Sabe-se que o pre�o de custo receber� um acr�scimo de acordo com um percentual informado pelo usu�rio
*/
#include<iostream>
#include<locale.h>
#include<stdio.h>
#include<math.h>
using namespace std;
main()
{
	  float precusto, acres, valvenda;
	  setlocale(LC_ALL,"Portuguese");
	  cout<<"Informe o pre�o de custo e o percentual de acr�scimo\n";
	  cin>>precusto>>acres;
	  valvenda=precusto+acres;
	  cout<<"O valor da venda � de "<<precusto<<" + "<<acres<<" = "<<valvenda<<"\n";	  
	  system("Pause>>null");
}
	  

