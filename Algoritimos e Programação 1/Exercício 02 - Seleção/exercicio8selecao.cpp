/*
8.	Elabore um algoritmo que, dada a idade de um nadador, classifique-o em uma das seguintes categorias:
Idade	Categoria
5 até 7 anos	Infantil A
8 até 10 anos	Infantil B
11 até 13 anos	Juvenil A
14 até 17 anos	Juvenil B
Maiores de 18 anos	Adulto
*/
#include<iostream>
#include<locale.h>
#include<stdio.h>
#include<math.h>
using namespace std;
main()
{
	  float idade;
	  setlocale(LC_ALL,"Portuguese");
	  cout<<"Informe a sua idade: \n";
	  cin>>idade;
	  if(idade>=5 || idade<=7)
	  cout<<"Você é da classe Infantil A\n";
	  if(idade>=8 || idade<=10)
	  cout<<"Você é da classe Infantil B\n";
	  if(idade>=11 || idade<=13)
	  cout<<"Você é da classe Juvenil A\n";
	  if(idade>=14 || idade<=17)
	  cout<<"Você é da classe Juvenil B\n";
	  if(idade>18)
	  cout<<"Você é da classe Adulto\n";
	  system("Pause>>null");
}
	  

