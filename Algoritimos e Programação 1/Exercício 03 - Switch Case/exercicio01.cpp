/*
Lucas Trevizan
01 - Fa�a um programa que leia um n�mero e exiba o dia correspondente
da semana. (1- domingo, 2 - segunda, etc), se digitar outro valor deve
aparecer valor inv�lido.
*/
#include<iostream>
#include<locale.h>
#include<stdio.h>
#include<math.h>
using namespace std;
main()
{
	  int numero;
	  setlocale(LC_ALL,"Portuguese");
	  cout<<"Informe um n�mero\n";
	  cin>>numero;
	  switch(numero)
	  {
	  		case '1':
	  				cout<<"Domingo\n";
	  				break;
	  		case '2':
	  				cout<<"Segunda - feira\n";
	  				break;
	  		case'3':
	  				cout<<"Ter�a - feira\n";
	  				break;
	  		case '4':
	  				cout<<"Quarta - feira\n";
	  				break;
	  		case '5':
	  				cout<<"Quinta - feira\n";
	  				break;
	  		case '6':
	  				cout<<"Sexta - feira\n";
	  				break;
	  		case '7':
	  				cout<<"S�bado\n";
	  				break;
	  		default:
	  				cout<<"N�mero Inv�lido\n";	  				
	  }	  
	  system("Pause>>null");
}
	  

