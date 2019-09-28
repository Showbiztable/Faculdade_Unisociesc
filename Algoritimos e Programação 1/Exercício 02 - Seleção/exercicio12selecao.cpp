/*
12.	Faça um Programa que leia três números e mostre o maior e o menor deles.
*/
#include<iostream>
#include<locale.h>
#include<stdio.h>
#include<math.h>
using namespace std;
main()
{
	  float num1, num2, num3;
	  setlocale(LC_ALL,"Portuguese");
	  cout<<"Informe três números: \n";
	  cin>>num1>>num2>>num3;
	  if(num1>num2 && num1>num3)
	  cout<<"O primeiro número é o maior número informado\n";
	  else
	  cout<<"O primeiro número é o menor número informado\n";
	  if(num2>num1 && num2>num3)
	  cout<<"O segundo número é o maior número informado\n";
	  else
	  cout<"O segundo número é o menor número informado\n";
	  if(num3>num1 && num3>num2)
	  cout<"O terceiro número é o maior número informado\n";
	  else
	  cout<"O terceiro número é menor número informado\n";
	  system("Pause>>null");
}
	  

