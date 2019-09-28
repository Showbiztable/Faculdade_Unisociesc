/*
5.	Faça um algoritmo que receba o preço de custo de um produto e  mostre o valor de venda.
Sabe-se que o preço de custo receberá um acréscimo de acordo com um percentual informado pelo usuário
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
	  cout<<"Informe o preço de custo e o percentual de acréscimo\n";
	  cin>>precusto>>acres;
	  valvenda=precusto+acres;
	  cout<<"O valor da venda é de "<<precusto<<" + "<<acres<<" = "<<valvenda<<"\n";	  
	  system("Pause>>null");
}
	  

