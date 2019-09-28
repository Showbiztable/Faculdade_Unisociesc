/*
12.	O custo ao consumidor de um carro novo é a soma do custo de fábrica com a percentagem do distribuidor e dos impostos (aplicados ao custo de fábrica).
Supondo que a percentagem do distribuidor seja de 28% e os impostos de 45%, escrever um algoritmo que leia o custo de fábrica de um carro e escreva o custo ao consumidor.
*/
#include<iostream>
#include<locale.h>
#include<stdio.h>
#include<math.h>
using namespace std;
main()
{
	  float custofabrica, consumidor;
	  const float percentagem=1.28, impostos=1.45;
	  setlocale(LC_ALL,"Portuguese");
	  cout<<"Informe o custo de fábrica\n";
	  cin>>custofabrica;
	  consumidor=custofabrica*percentagem*impostos;
	  cout<<"O custo para o consumidor é de "<<custofabrica<<" * "<<percentagem<<" * "<<impostos<<" * "<<consumidor<<"\n";	  
	  system("Pause>>null");
}
	  

