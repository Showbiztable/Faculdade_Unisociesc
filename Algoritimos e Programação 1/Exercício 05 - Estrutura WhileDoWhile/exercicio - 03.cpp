/*
3.	FUA para calcular a m�dia de N notas. O usu�rio deve informar a
quantidade de valores, bem como cada nota. Repita enquanto o usu�rio desejar.
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
		cout<<"A m�dia das notas � "<<media<<"\n";
	}
	else
		cout<<"N�o foi informado nenhuma nota\n";  
	system("Pause>>null");
}
	  

