/*
10.	Fa�a um Programa que pe�a um n�mero correspondente a um determinado ano e em seguida informe se este ano � ou n�o bissexto.
*/
#include<iostream>
#include<locale.h>
#include<stdio.h>
#include<math.h>
using namespace std;
main()
{
	  int ano;
	  setlocale(LC_ALL,"Portuguese");
	  cout<<"Informe o n�mero de um ano aleat�rio: \n";
	  cin>>ano;
	  if(ano%4==0)
	  cout<<"Este ano � bissexto\n";
	  else
	  cout<<"Este ano n�o � bissexto\n";
	  system("Pause>>null");
}
	  

