/*
4.	A Loja Super Baratinho est� vendendo seus produtos em 5 (cinco) presta��es sem juros.
Fa�a um algoritmo que receba um valor de uma compra e mostre o valor das presta��es.
*/
#include<iostream>
#include<locale.h>
#include<stdio.h>
#include<math.h>
using namespace std;
main()
{
	  float valcomp, valprest;
	  const int prest = 5;
	  setlocale(LC_ALL,"Portuguese");
	  cout<<"Informe o valor da compra\n";
	  cin>>valcomp
	  valprest=valcomp/prest;
	  cout<<"O valor das presta��es � de "<<valcomp<<" / "<<prest<<" = "<<valprest<<"\n";	  
	  system("Pause>>null");
}
	  

