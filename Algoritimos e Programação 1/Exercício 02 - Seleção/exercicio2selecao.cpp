/*
Alunos: Lucas Trevizan, Doglas Cattoni
2.	Fa�a um Programa que pe�a um valor e mostre na tela se o valor � positivo ou negativo ou zero.
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
	  cout<<"Informe um valor aleat�rio: \n";
	  cin>>valor;
	  if(valor>0)
	  cout<<"O valor � positivo.\n";
	  if(valor<0)
	  cout<<"O valor � negativo.\n";
	  if(valor==0)
	  cout<<"O valor n�o � positivo nem negativo.\n";
	  system("Pause");
}



