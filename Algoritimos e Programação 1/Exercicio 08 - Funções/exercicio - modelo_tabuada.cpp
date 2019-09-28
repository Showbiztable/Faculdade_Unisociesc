/*
Alunos: Lucas Trevizan
FUP que leia um número e FUF para calcular a tabuada deste número.
*/
#include<iostream>
#include<locale.h>
#include<stdio.h>
#include<math.h>
using namespace std;
//Função calcula tabuada
void calculaTabuada(int num)
{
	int i;
	for(i=0;i<=10;i++)
		cout<<num<<" * "<<i<<" = "<<num*i<<"\n";
}
main()
{
	  int numero;
	  char resp;
	  setlocale(LC_ALL, "Portuguese");
	  do{
	  	cout<<"Informe um número para calcular a tabuada\n";
	  	cin>>numero;
	  	calculaTabuada(numero);	    
		do{
			cout<<"Quer calculador outra tabuada? S - sim, N - não\n";
			cin>>resp;
			resp=toupper(resp);
		  }while(resp!='S' && resp!='N');
		}while(resp=='S');
	  system("Pause>>null");
}


