/*
Lucas Trevizan e Doglas E E Cattoni
1.	Fa�a um programa que receba dois n�meros inteiros e gere os n�meros inteiros que est�o no intervalo compreendido por eles. 
*/
#include<iostream>
#include<locale.h>
#include<stdio.h>
#include<math.h>
using namespace std;
main()
{

	int n1,n2,cont;
	setlocale(LC_ALL,"Portuguese");
	cout<<"Informe dois n�meros:\n";
	cin>>n1>>n2;
	if(n1>n2)
	{
		cout<<"O intervalo entre o n�mero "<<n1<<" e "<<n2<<":\n";
		for(cont=n1-1;cont>n2;cont--)
		{
		cout<<cont<<"\n";
		}
	}
	else if(n1<n2)
	{
		cout<<"O intervalo entre o n�mero "<<n1<<" e "<<n2<<":\n";
		for(cont=n1+1;cont<n2;cont++)
		{
		cout<<cont<<"\n";
		}
	}
	else
		cout<<"Os n�meros s�o iguais, n�o existe intervalo.\n";
	  system("Pause>>null");
}
