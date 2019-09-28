/*
Lucas Trevizan
1.	Faça um programa que receba dois números inteiros e gere os números inteiros que estão no intervalo compreendido por eles. 
*/
#include<iostream>
#include<locale.h>
#include<stdio.h>
#include<math.h>
using namespace std;
main()
{

	int n1,n2,cont,troca;
	setlocale(LC_ALL,"Portuguese");
	cout<<"Informe dois números\n";
	cin>>n1>>n2;
	if(n1>n2)
	{
		troca=n1;
		n1=n2;
		n2=troca;
		
	}
	cout<<"O intervalo entre o número "<<n1<<" e "<<n2<<"\n";
	for(cont=n1+1;cont<n2;cont++)
	{
		cout<<cont<<"\n";
	}
	  system("Pause>>null");
}
	  
