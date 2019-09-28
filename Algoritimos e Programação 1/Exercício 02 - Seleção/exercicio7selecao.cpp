/*
7.	Tendo como dados de entrada a altura e o sexo de uma pessoa, construa um algoritmo que calcule seu peso ideal, utilizando as seguintes fórmulas:
Para homens: (72,7 * h) - 58;
Para mulheres: (62,1 * h) - 44,7.
*/
#include<iostream>
#include<locale.h>
#include<stdio.h>
#include<math.h>
using namespace std;
main()
{
	  float altura, pesoideal;
	  char sexo, homem, mulher;
	  setlocale(LC_ALL,"Portuguese");
	  cout<<"Informe sua altura e qual é o seu sexo: \n";
	  cin>>altura>>sexo;
	  if(sexo==homem)
	  pesoideal=(72.7*altura)-58;
	  cout<<"Seu peso ideal é de"<<pesoideal<<"\n";
	  if(sexo==mulher)
	  pesoideal=(62.1*altura)-47.7;
	  cout<<"Seu peso ideal é de"<<pesoideal<<"\n";	  
	  system("Pause>>null");
}
	  

