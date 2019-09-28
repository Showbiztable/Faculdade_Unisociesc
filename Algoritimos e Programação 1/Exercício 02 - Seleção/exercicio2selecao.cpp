/*
Alunos: Lucas Trevizan, Doglas Cattoni
2.	Faça um Programa que peça um valor e mostre na tela se o valor é positivo ou negativo ou zero.
*/
#include<iostream>
#include<locale.h>
#include<stdio.h>
#include<math.h>
using namespace std;
main()
{
	  float valor;
	  setlocale(LC_ALL, "Portuguese");
	  cout<<"Informe um valor aleatório: \n";
	  cin>>valor;
	  if(valor>0)
	  cout<<"O valor é positivo.\n";
	  if(valor<0)
	  cout<<"O valor é negativo.\n";
	  if(valor==0)
	  cout<<"O valor não é positivo nem negativo.\n";
	  system("Pause");
}



