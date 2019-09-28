/*
9.	Escreva um algoritmo que leia o ano de nascimento de uma pessoa, calcule e mostre sua idade e
verifique e mostre se ela já tem idade para votar (16 anos ou mais) e
para conseguir a Carteira de Habilitação (18 anos ou mais).
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
	  cout<<"Você já possui a idade nescessária para votar\n";
	  if(idade>=18)
	  cout<<"Você já possui idade para obter a carteira de habilitação\n";
	  system("Pause>>null");
}
	  

