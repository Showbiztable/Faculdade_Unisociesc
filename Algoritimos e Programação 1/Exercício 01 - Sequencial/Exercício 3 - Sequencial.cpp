/*
Lucas Trevizan
Escrever um algoritmo que leia o nome de um vendedor, o seu salário fixo e o total de vendas
efetuadas por ele no mês (em dinheiro). Sabendo que este vendedor ganha 15% de comissão sobre
suas vendas efetuadas, informar o seu nome, o salário fixo e salário no final do mês
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
	  cout<<"Informe seu salário fixo, o total de vendas deste mês e o seu nome:\n";
	  cin>>salfixo>>vendas>>nome;	   
	  salfinal=salfixo+(vendas*15)/100;
	  cout<<"Seu nome é "<<nome<<"\nSeu salário fixo é de "<<salfixo<<" R$\nSeu salário no final do mês é de "<<salfinal<<" R$\n";	
	  system("Pause>>null");
}

