/*
Lucas Trevizan
Escrever um algoritmo que leia o nome de um vendedor, o seu sal�rio fixo e o total de vendas
efetuadas por ele no m�s (em dinheiro). Sabendo que este vendedor ganha 15% de comiss�o sobre
suas vendas efetuadas, informar o seu nome, o sal�rio fixo e sal�rio no final do m�s
*/
#include<iostream>
#include<locale.h>
#include<stdio.h>
#include<math.h>
#include<string>
using namespace std;
main()
{
	  char nome[999];	  
	  float salfixo, vendas, salfinal;
	  setlocale(LC_ALL,"Portuguese");
	  cout<<"Informe seu sal�rio fixo, o total de vendas deste m�s e o seu nome:\n";
	  cin>>salfixo>>vendas>>nome;	   
	  salfinal=salfixo+(vendas*15)/100;
	  cout<<"Seu nome � "<<nome<<"\nSeu sal�rio fixo � de "<<salfixo<<" R$\nSeu sal�rio no final do m�s � de "<<salfinal<<" R$\n";	
	  system("Pause>>null");
}

