/*
FUP que leia 10 n�meros e mostre a soma e a m�dia destes
n�meros.
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
	  	  cout<<"Informe um n�mero "<<cont+1<<"\n";
	  	  cin>>numero;
	  	  soma=soma+numero;//soma+=numero;
	  }
	  media=soma/cont;
	  cout<<"A soma dos n�meros � "<<soma<<"\n";
	  cout<<"A m�dia dos n�meros � "<<media<<"\n";
	  
       	
      system("Pause>>null");
}


