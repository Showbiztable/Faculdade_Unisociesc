/*
Lucas Trevizan
02 - Faça um programa que verifique se uma letra digitada é "F"
ou "M". Conforme a letra escrever: F - feminino, M - masculino.
*/
#include<iostream>
#include<locale.h>
#include<stdio.h>
#include<math.h>
using namespace std;
main()
{
	  char letra;
	  setlocale(LC_ALL,"Portuguese");
	  cout<<"Digite uma letra\n";
	  cin>>letra;
	  letra=toupper(letra);
	  switch(letra)
	  {
	  		case 'F':
	  				cout<<"Feminino\n";
	  				break;
	  		case 'M':
	  				cout<<"Masculino\n";
	  				break;
	  		default:
	  				cout<<"Letra Inválida\n";
	  }
	  system("Pause>>null");
}
	  

