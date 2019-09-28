/*
10.	Faça um Programa que peça um número correspondente a um determinado ano e em seguida informe se este ano é ou não bissexto.
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
	  cout<<"Informe o número de um ano aleatório: \n";
	  cin>>ano;
	  if(ano%4==0)
	  cout<<"Este ano é bissexto\n";
	  else
	  cout<<"Este ano não é bissexto\n";
	  system("Pause>>null");
}
	  

