/*
Alunos: Lucas Trevizan
FUP que leia um n�mero e FUF para calcular a tabuada deste n�mero.
*/
#include<iostream>
#include<locale.h>
#include<stdio.h>
#include<math.h>
using namespace std;
//Fun��o calcula tabuada
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
	  	cout<<"Informe um n�mero para calcular a tabuada\n";
	  	cin>>numero;
	  	calculaTabuada(numero);	    
		do{
			cout<<"Quer calculador outra tabuada? S - sim, N - n�o\n";
			cin>>resp;
			resp=toupper(resp);
		  }while(resp!='S' && resp!='N');
		}while(resp=='S');
	  system("Pause>>null");
}


