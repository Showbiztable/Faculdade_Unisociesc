/*
Alunos: Lucas Trevizan, Doglas Cattoni
1.	Faça um Programa que peça dois números e mostre o maior deles.
*/
#include<iostream>
#include<locale.h>
#include<stdio.h>
#include<math.h>
using namespace std;
main()
{
	  float n1, n2;
	  setlocale(LC_ALL, "Portuguese");
	  cout<<"Informe dois números: \n";
	  cin>>n1>>n2;
	  if(n1>n2)
	  cout<<"O primeiro número é maior!\n";
	  else
	  cout<<"O segundo número é maior!\n";	  	  
	  system("Pause");
}



