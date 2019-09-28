/*
7.	Escreva um algoritmo que leia três números inteiros e positivos (A, B, C) e calcule a seguinte expressão:
*/
#include<iostream>
#include<locale.h>
#include<stdio.h>
#include<math.h>
using namespace std;
main()
{
	  float num1, num2, num3, d;	
	  setlocale(LC_ALL,"Portuguese");
	  cout<<"Informe num1, num2 e o num3\n";
	  cin>>num1>>num2>>num3;
	  d=pow(num1,2+num2,2)+pow(num2,2+num3,2)/2;
	  cout<<"O valor de d é de "<<d<<"\n";	  
	  system("Pause>>null");
}
	  

