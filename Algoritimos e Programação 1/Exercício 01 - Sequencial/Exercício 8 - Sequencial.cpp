/*
8.	Faça um algoritmo que leia a idade de uma pessoa expressa em anos, meses e dias e mostre-a expressa apenas em dias.
*/
#include<iostream>
#include<locale.h>
#include<stdio.h>
#include<math.h>
using namespace std;
main()
{
	  float anos, meses, dias, idade;
	  setlocale(LC_ALL,"Portuguese");
	  cout<<"Informe a idade em anos, meses e dias\n";
	  cin>>anos>>meses>>dias;
	  idade=anos*365+meses*30+dias;
	  cout<<"O valor da idade é de"<<anos*365<<" + "<<meses*30<<" + "<<dias<<" = "<<idade<<"\n";	  
	  system("Pause>>null");
}
	  

