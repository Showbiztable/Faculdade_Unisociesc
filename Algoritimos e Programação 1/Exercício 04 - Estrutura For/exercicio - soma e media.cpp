/*
FUP que leia 10 números e mostre a soma e a média destes
números.
*/
#include<iostream>
#include<locale.h>
#include<stdio.h>
#include<math.h>
using namespace std;
main()
{
      
      int cont;
      float numero,soma=0,media;
	  setlocale(LC_ALL,"Portuguese");
	  
	  for(cont=0;cont<10;cont++)
	  {
	  	  cout<<"Informe um número "<<cont+1<<"\n";
	  	  cin>>numero;
	  	  soma=soma+numero;//soma+=numero;
	  }
	  media=soma/cont;
	  cout<<"A soma dos números é "<<soma<<"\n";
	  cout<<"A média dos números é "<<media<<"\n";
	  
       	
      system("Pause>>null");
}


