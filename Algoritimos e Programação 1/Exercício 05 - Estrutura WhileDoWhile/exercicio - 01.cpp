/*
Lucas Trevizan 
1. FUA para ler N n�meros e imprima se o numero � PAR ou IMPAR. Utilizar a fun��o %.
*/
#include<iostream>
#include<locale.h>
#include<stdio.h>
#include<math.h>
using namespace std;
main()
{
	  int num;
	  char resp;
	  setlocale(LC_ALL,"Portuguese");
	  do{
	  		cout<<"Informe um n�mero\n";
	  		cin>>num;
	  		if(num%2==0)
	  			cout<<num<<" � Par!\n";
	  		else
	  			cout<<num<<" � Impar\n";
	  		//perguntar se quer informar outro n�mero
	  		do{
			  	cout<<"Quer informar outro n�mero?\nS-Sim ou N-N�o\n";
	  		  	cin>>resp;
			  	resp=toupper(resp);
			  }while(resp!='S' && resp!='N');			  
	
	  }while(resp=='S');
	  
	  system("Pause>>null");
}
