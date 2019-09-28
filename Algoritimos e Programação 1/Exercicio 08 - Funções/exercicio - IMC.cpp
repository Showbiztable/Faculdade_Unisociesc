/*
Alunos: Lucas Trevizan
FUP que leia o peso e a altura de 10 pessoas.
- Faça uma função para calcular o imc;
- Faça uma função que mostre se é gordo ou não.
*/
#include<iostream>
#include<locale.h>
#include<stdio.h>
#include<math.h>
using namespace std;
float calculaIMC(float p, float alt)
{
	float indice;
	indice=p/(pow(alt,2));
	return indice;
}
void mostraClassificacao(float indiceIMC)
{
	if(indiceIMC<17)
		cout<<"Desnutrido\n";
	else if(indiceIMC<18.5)
		cout<<"Meio magro\n";
	else if(indiceIMC<25)
		cout<<"Normal, nada de interessante\n";
	else if(indiceIMC<30)
		cout<<"Começando a ter aquela pança de chopp\n";
	else if(indiceIMC<35)
		cout<<"Balofo nivel 1\n";
	else if(indiceIMC<40)
		cout<<"Balofo nivel 2\n";
	else
		cout<<"Balofo nivel FatGuy\n";
}
main()
{
	  float altura, peso, imc;
	  setlocale(LC_ALL, "Portuguese");
	  do{
	  		cout<<"Informe o seu peso\n";
	  		cin>>peso;
	  	}while(peso<0);
	  do{
		  	cout<<"Informe a altura\n";
		  	cin>>altura;
	  	}while(altura<0);
	  	imc=calculaIMC(peso,altura);
	  	cout<<"Seu IMC é "<<imc<<"\n";
	  	mostraClassificacao(imc);
	  system("Pause>>null");
}
