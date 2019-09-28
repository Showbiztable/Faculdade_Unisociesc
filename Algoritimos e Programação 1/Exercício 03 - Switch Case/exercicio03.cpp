/*
Lucas Trevizan
03 - FUP que pergunte em que turno você estuda. Peça para digitar M-matutino
ou V-vespertino ou N-noturno. Imprima a mensagem "Bom dia", "Boa Tarde" ou 
"Boa noite", conforme o caso.
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
	  do{
	  cout<<"Digite:\nM - Matutino\nV - Vespertino\nN - Noturno\n";
	  cin>>letra;
	  letra=toupper(letra);
	  switch(letra)
	  {
	  		case 'M':
	  				cout<<"Bom Dia\n";
	  				break;
	  		case 'V':
	  				cout<<"Boa Tarde\n";
	  				break;
	  		case 'N':
	  				cout<<"Boa Noite\n";
	  				break;
	  		default:
	  				cout<<"Letra Inválida\n";
	  }

}while();
	  system("Pause>>null");
}
	  

