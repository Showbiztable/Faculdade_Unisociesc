/*
18.	Fa�a um Programa que pergunte quanto voc� ganha por hora e o n�mero de horas trabalhadas no m�s.
Calcule e mostre o total do seu sal�rio no referido m�s, sabendo-se que s�o descontados 11% para o Imposto de Renda,
8% para o INSS e 5% para o sindicato, fa�a um programa que nos d�: 
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
	  cout<<"O sal�rio bruto � de "<<ganhahora<<" * "<<horastrab<<" = "<<salariobruto<<"\n";
	  cout<<"O valor pago ao INSS � de "<<salariobruto<<" * "<<salariobruto<<" = "<<pagouinss<<"\n";
	  cout<<"O valor pago ao sindicato � de "<<salariobruto<<" * "<<sindicato<<" = "<<pagousindicato<<"\n";
	  cout<<"O valor do sal�rio l�quido � de "<<salariobruto<<" - "<<pagouinss+pagousindicato<<" + "<<salariobruto*imposto<<" = "<<salarioliquido<<"\n";	  
	  system("Pause>>null");
}
	  

