/*
13.	F.U.A. que converta metros para cent�metros. 
*/
#include<iostream>
#include<locale.h>
#include<stdio.h>
#include<math.h>
using namespace std;
main()
{
	  float metros, convert;
	  const float cent=100;
	  setlocale(LC_ALL,"Portuguese");
	  cout<<"Informe os metros\n";
	  cin>>metros;
	  convert=metros*cent;
	  cout<<"O valor em cent�metros � de "<<metros<<" * "<<cent<<" = "<<convert<<"\n";	  
	  system("Pause>>null");
}
	  

