/*
12.	O custo ao consumidor de um carro novo � a soma do custo de f�brica com a percentagem do distribuidor e dos impostos (aplicados ao custo de f�brica).
Supondo que a percentagem do distribuidor seja de 28% e os impostos de 45%, escrever um algoritmo que leia o custo de f�brica de um carro e escreva o custo ao consumidor.
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
	  cout<<"Informe o custo de f�brica\n";
	  cin>>custofabrica;
	  consumidor=custofabrica*percentagem*impostos;
	  cout<<"O custo para o consumidor � de "<<custofabrica<<" * "<<percentagem<<" * "<<impostos<<" * "<<consumidor<<"\n";	  
	  system("Pause>>null");
}
	  

