/*
17.	Tendo como dados de entrada a altura de uma pessoa,
construa um algoritmo que calcule seu peso ideal,
usando a seguinte f�rmula: (72.7*altura) - 58.
*/
#include<iostream>
#include<locale.h>
#include<stdio.h>
#include<math.h>
using namespace std;
main()
{
	  float altura, pesoideal;
	  setlocale(LC_ALL,"Portuguese");
	  cout<<"Informe a altura\n";
	  cin>>altura;
	  pesoideal=(72.7*altura)-58;
	  cout<<"O valor do peso ideal � de "<<pesoideal<<"\n";	  
	  system("Pause>>null");
}
	  

