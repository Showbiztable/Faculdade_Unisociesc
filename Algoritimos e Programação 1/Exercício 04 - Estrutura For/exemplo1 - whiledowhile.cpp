/*
Lucas Trevizan, Doglas Cattoni
Exemplo While/doWhile: FUP que leia diversas idades, calcule e mostre a m�dia destas idades.
Para finalizar o programa digite 0 para a idade;
*/
#include<iostream>
#include<locale.h>
#include<stdio.h>
#include<math.h>
using namespace std;
main()
{
	int idade, media=0, quantPes=0;
	setlocale(LC_ALL,"Portuguese");
	cout<<"Informe a idade\nDigite 0 para finalizar\n";
	cin>>idade;
	while(idade!=0)
	{
		media=media+idade;
		quantPes++;
		cout<<"informe a idade\nDigite 0 para finalizar\n";
		cin>>idade;
	media/=quantPes; //media=media/quantPes;
	cout<<"A m�dia das idades �: "<<media<<"\n";
	}
	if(quantPes!=0)
	{
		media/=quantPes;//media=media/quantPes;
		cout<<"A m�dia das idads �:"<<media<<"\n";
	}
	else
	  cout<<"N�o foi informada nenhuma idade\n";
	  system("Pause>>null");
}

