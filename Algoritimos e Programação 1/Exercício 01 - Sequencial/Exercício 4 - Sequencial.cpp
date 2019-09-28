/*
4.	A Loja Super Baratinho está vendendo seus produtos em 5 (cinco) prestações sem juros.
Faça um algoritmo que receba um valor de uma compra e mostre o valor das prestações.
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
	  cout<<"O valor das prestações é de "<<valcomp<<" / "<<prest<<" = "<<valprest<<"\n";	  
	  system("Pause>>null");
}
	  

