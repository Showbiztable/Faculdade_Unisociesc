/*
Lucas Trevizan ; Doglas Cattoni
*/
#include<iostream>
#include<locale.h>
#include<stdio.h>
#include<math.h>
using namespace std;
main()
{
	  int cont, fat=1, numero;
      setlocale(LC_ALL,"Portuguese");
      cout<<"Informe um número a ser fatorado\n";
      cin>>numero;//entrada de dados
      for(cont=numero;cont>1;cont--)
      {
      	fat*=cont;
	  }
	  cout<<"Fatorial de "<<numero<<" é "<<fat<<"\n";      
      system("Pause");
}



