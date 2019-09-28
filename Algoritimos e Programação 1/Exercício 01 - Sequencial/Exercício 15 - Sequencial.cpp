/*
15.	F.U.A. que peça a temperatura em graus Farenheit, transforme e mostre a temperatura em graus Celsius. 
*/
#include<iostream>
#include<locale.h>
#include<stdio.h>
#include<math.h>
using namespace std;
main()
{
	  float farenheit, celsius;
	  setlocale(LC_ALL,"Portuguese");
	  cout<<"Informe a temperatura em farenheit\n";
	  cin>>farenheit;
	  celsius=(5*(farenheit-32)/9);
	  cout<<"O valor em graus Celsius é de "<<celsius<<"\n";	  
	  system("Pause>>null");
}
	  

