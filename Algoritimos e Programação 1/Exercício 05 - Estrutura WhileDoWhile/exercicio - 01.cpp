/*
Lucas Trevizan 
1. FUA para ler N números e imprima se o numero é PAR ou IMPAR. Utilizar a função %.
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
	  		cout<<"Informe um número\n";
	  		cin>>num;
	  		if(num%2==0)
	  			cout<<num<<" É Par!\n";
	  		else
	  			cout<<num<<" É Impar\n";
	  		//perguntar se quer informar outro número
	  		do{
			  	cout<<"Quer informar outro número?\nS-Sim ou N-Não\n";
	  		  	cin>>resp;
			  	resp=toupper(resp);
			  }while(resp!='S' && resp!='N');			  
	
	  }while(resp=='S');
	  
	  system("Pause>>null");
}
