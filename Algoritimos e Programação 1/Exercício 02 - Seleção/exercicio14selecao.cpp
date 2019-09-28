/*
Faça um Programa que leia três números e mostre-os em ordem decrescente.
*/
#include<iostream>
#include<locale.h>
#include<stdio.h>
#include<math.h>
using namespace std;
main()
{
	  float n1, n2, n3;
	  setlocale(LC_ALL,"Portuguese");
	  cout<"Informe três números: \n";
	  cin>>n1>>n2>>n3;
	  if(n1>n2>n3)
	  cout<"n3 ; n2 ; n1\n";
	  if(n2>n3>n1)
	  cout<"n1 ; n3 ; n2\n";
	  if(n3>n2>n1)
	  cout<"n1 ; n2 ; n3\n";
	  system("Pause>>null");
}
	  

