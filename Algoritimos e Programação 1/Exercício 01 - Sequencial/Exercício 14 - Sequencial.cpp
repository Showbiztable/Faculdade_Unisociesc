/*
14.	F.U.A. que calcule e mostre a �rea de um quadrado
*/
#include<iostream>
#include<locale.h>
#include<stdio.h>
#include<math.h>
using namespace std;
main()
{
	  float lado, area;
	  setlocale(LC_ALL,"Portuguese");
	  cout<<"Informe o valor de um lado\n";
	  cin>>lado;
	  area=lado*lado;
	  cout<<"O valor da �rea � de "<<lado<<" * "<<lado<<" = "<<area<<"\n";	  
	  system("Pause>>null");
}
	  

