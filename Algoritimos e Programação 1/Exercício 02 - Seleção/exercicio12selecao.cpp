/*
12.	Fa�a um Programa que leia tr�s n�meros e mostre o maior e o menor deles.
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
	  cout<<"Informe tr�s n�meros: \n";
	  cin>>num1>>num2>>num3;
	  if(num1>num2 && num1>num3)
	  cout<<"O primeiro n�mero � o maior n�mero informado\n";
	  else
	  cout<<"O primeiro n�mero � o menor n�mero informado\n";
	  if(num2>num1 && num2>num3)
	  cout<<"O segundo n�mero � o maior n�mero informado\n";
	  else
	  cout<"O segundo n�mero � o menor n�mero informado\n";
	  if(num3>num1 && num3>num2)
	  cout<"O terceiro n�mero � o maior n�mero informado\n";
	  else
	  cout<"O terceiro n�mero � menor n�mero informado\n";
	  system("Pause>>null");
}
	  

