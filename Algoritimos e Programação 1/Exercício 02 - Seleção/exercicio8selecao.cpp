/*
8.	Elabore um algoritmo que, dada a idade de um nadador, classifique-o em uma das seguintes categorias:
Idade	Categoria
5 at� 7 anos	Infantil A
8 at� 10 anos	Infantil B
11 at� 13 anos	Juvenil A
14 at� 17 anos	Juvenil B
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
	  cout<<"Voc� � da classe Infantil A\n";
	  if(idade>=8 || idade<=10)
	  cout<<"Voc� � da classe Infantil B\n";
	  if(idade>=11 || idade<=13)
	  cout<<"Voc� � da classe Juvenil A\n";
	  if(idade>=14 || idade<=17)
	  cout<<"Voc� � da classe Juvenil B\n";
	  if(idade>18)
	  cout<<"Voc� � da classe Adulto\n";
	  system("Pause>>null");
}
	  

