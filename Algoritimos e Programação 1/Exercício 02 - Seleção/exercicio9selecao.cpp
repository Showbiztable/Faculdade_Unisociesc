/*
9.	Escreva um algoritmo que leia o ano de nascimento de uma pessoa, calcule e mostre sua idade e
verifique e mostre se ela j� tem idade para votar (16 anos ou mais) e
para conseguir a Carteira de Habilita��o (18 anos ou mais).
*/
#include<iostream>
#include<locale.h>
#include<stdio.h>
#include<math.h>
using namespace std;
main()
{
	  float ano, idade;
	  setlocale(LC_ALL,"Portuguese");
	  cout<<"Informe seu ano de nascimento: \n";
	  cin>>ano;
	  idade=2015-ano;
	  if(idade>=16)
	  cout<<"Voc� j� possui a idade nescess�ria para votar\n";
	  if(idade>=18)
	  cout<<"Voc� j� possui idade para obter a carteira de habilita��o\n";
	  system("Pause>>null");
}
	  

