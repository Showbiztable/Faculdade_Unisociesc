/*
Alunos: Lucas Trevizan
8.	FUP que pe�a um n�mero inteiro e calcule o seu fatorial. O programa deve ter a op��o de repetir esta opera��o.
*/
#include<iostream>
#include<locale.h>
#include<stdio.h>
#include<math.h>
using namespace std;
main()
{
	  int valor, fat=1, i;
	  char resp;
	  setlocale(LC_ALL, "Portuguese");
	  cout<<"Digite o valor a ser fatorado\n";
	  cin>>valor;
	  for(i=valor;i>1;i--)
	  {
	  	fat=fat*i;
	  }
	  cout<<"Fatorial de "<<valor<<" = "<<fat<<"\n";	  
	  system("Pause>>null");
}


