/*
9.	Faça um algoritmo que leia a idade de uma pessoa expressa em dias e mostre-a expressa em anos, meses e dias.
*/
#include<iostream>
#include<locale.h>
#include<stdio.h>
#include<math.h>
using namespace std;
main()
{
	  float dias, idade, diasrestantes;
	  setlocale(LC_ALL,"Portuguese");
	  cout<<"Informe os dias\n";
	  cin>>dias;
	  idade=dias/365, dias/12, diasrestantes;
	  cout<<"O valor da idade é de "<<idade<<"\n";	  
	  system("Pause>>null");
}
	  

