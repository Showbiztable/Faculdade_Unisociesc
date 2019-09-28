/*
3.	FUA para calcular a média de N notas. O usuário deve informar a
quantidade de valores, bem como cada nota. Repita enquanto o usuário desejar.
*/
#include<iostream>
#include<locale.h>
#include<stdio.h>
#include<math.h>
using namespace std;
main()
{
	float media=0, quantnota=0, nota;
	char f=toupper(f);
	setlocale(LC_ALL,"Portuguese");
	cout<<"Informe uma nota\nDigite F para finalizar\n";
	cin>>nota;
	while(nota!=f)
	{
		media+=nota;
		quantnota++;
		cout<<"Informe uma nota\nDigite F para finalizar\n";
		cin>>nota;
	} 
	if(quantnota!=f)
	{
		media/=quantnota;
		cout<<"A média das notas é "<<media<<"\n";
	}
	else
		cout<<"Não foi informado nenhuma nota\n";  
	system("Pause>>null");
}
	  

