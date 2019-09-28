/*
Lucas Trevizan e Doglas E E Cattoni
2.	Altere o programa anterior para mostrar no final a soma dos números. 
*/
#include<iostream>
#include<locale.h>
#include<stdio.h>
#include<math.h>
using namespace std;
main()
{
	int n1,n2,cont,troca, soma=0;
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
		soma=soma+cont;
	}
	cout<<"A soma dos intervalos é: "<<soma<<"\n";
	  system("Pause>>null");
}
