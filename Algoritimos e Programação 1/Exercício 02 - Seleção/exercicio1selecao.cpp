/*
Alunos: Lucas Trevizan, Doglas Cattoni
1.	Fa�a um Programa que pe�a dois n�meros e mostre o maior deles.
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
	  cout<<"Informe dois n�meros: \n";
	  cin>>n1>>n2;
	  if(n1>n2)
	  cout<<"O primeiro n�mero � maior!\n";
	  else
	  cout<<"O segundo n�mero � maior!\n";	  	  
	  system("Pause");
}



