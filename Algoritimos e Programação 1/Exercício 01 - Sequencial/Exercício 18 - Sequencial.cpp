/*
18.	Faça um Programa que pergunte quanto você ganha por hora e o número de horas trabalhadas no mês.
Calcule e mostre o total do seu salário no referido mês, sabendo-se que são descontados 11% para o Imposto de Renda,
8% para o INSS e 5% para o sindicato, faça um programa que nos dê: 
*/
#include<iostream>
#include<locale.h>
#include<stdio.h>
#include<math.h>
using namespace std;
main()
{
	  float ganhahora, horastrab, salariobruto, pagouinss, pagousindicato, salarioliquido;
	  const float imposto=1.11, inss=1.8, sindicato=1.5;
	  setlocale(LC_ALL,"Portuguese");
	  cout<<"Informe as horas trabalhadas e o valor ganho por hora\n";
	  cin>>ganhahora>>horastrab;
	  salariobruto=ganhahora*horastrab;
	  pagouinss=salariobruto*inss;
	  pagousindicato=salariobruto*sindicato;
	  salarioliquido=salariobruto-((pagouinss+pagousindicato)+(salariobruto*imposto));
	  cout<<"O salário bruto é de "<<ganhahora<<" * "<<horastrab<<" = "<<salariobruto<<"\n";
	  cout<<"O valor pago ao INSS é de "<<salariobruto<<" * "<<salariobruto<<" = "<<pagouinss<<"\n";
	  cout<<"O valor pago ao sindicato é de "<<salariobruto<<" * "<<sindicato<<" = "<<pagousindicato<<"\n";
	  cout<<"O valor do salário líquido é de "<<salariobruto<<" - "<<pagouinss+pagousindicato<<" + "<<salariobruto*imposto<<" = "<<salarioliquido<<"\n";	  
	  system("Pause>>null");
}
	  

