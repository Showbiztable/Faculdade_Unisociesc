/*
Lucas Trevizan
4.	FUA que calcule e imprima a tabuada (1 a 10) de um numero qualquer. O usu�rio deve
informar de qual numero quer ver a tabuada e deve ter a op��o de repetir esta opera��o quantas vezes quiser.
*/
#include<iostream>
#include<locale.h>
#include<stdio.h>
#include<math.h>
using namespace std;
main()
{
	  int numero, cont, tab;
	  setlocale(LC_ALL,"Portuguese");
	  do{
	  		cout<<"Informe um n�mero para calcular a tabuada:\nDigite 0 para finalizar o programa\n";
	  		cin>>numero;
	  		if(numero!=0)
	  		{
			 	for(cont=1;cont<=10;cont++)
	  			{
	  			//tab=numero*cont;
	  			//cout<<numero<<" * "<<cont<<" = "<<tab<<"\n";
	  			cout<<numero<<" * "<<cont<<" = "<<numero*cont<<"\n";
				}
			
			
			}
	  		
	   }while(numero!=0);
	        system("Pause>>null");
}


