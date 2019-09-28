/*
Lucas Trevizan, Doglas Cattoni
5.	Faça um programa que peça para n pessoas a sua idade,
ao final o programa deve verificar se a média de idade da turma varia entre:
"	 0 e 25 ' turma é jovem
"	26 e 60 ' adulta
"	maior que 60 ' idosa.
Conforme a média calculada:
*/
#include<iostream>
#include<locale.h>
#include<stdio.h>
#include<math.h>
using namespace std;
main()
{
	float F, media=0;
	int idade, i, soma;
	setlocale(LC_ALL,"Portuguese");
	cout<<"Digite F para finalizar o programa\n";
	F=toupper(F);
	do{
		for(i=1;i>0;i++)
		{		
			cout<<"Informe a sua idade\n";
			cin>>idade;
			soma=media+idade;
		}
	  
	  }while(idade = F);
	
	media=soma/i;
	cout<<"A média das idades é "<<media<<"\n";
	
	if(media>=0 && media<=25)
	{
		cout<<"Turma Jovem\n";
	}
	if(media>=26 && media<= 60)
	{
		cout<<"Turma Adulta\n";
	}
	if(media>60)
	{
		cout<<"Turma Idosa\n";
	}
	system("Pause>>null");
}

