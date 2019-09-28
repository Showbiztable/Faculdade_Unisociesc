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
	  int cont, numero, tab;
      setlocale(LC_ALL,"Portuguese");
      cout<<"Informe um número\n";
      cin>>numero;//entrada de dados
      for(cont=0;cont<=10;cont++)
	  {
	  		tab=numero*cont;
	  		cout<<numero<<" * "<<cont<<" = "<<tab<<"\n";
	  }
	  system("Pause");
}



