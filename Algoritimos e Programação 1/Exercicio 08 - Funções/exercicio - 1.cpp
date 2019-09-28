/*
Lucas Trevizan
1.	Faça um programa que tenha uma função que receba a base e o expoente.
A função deverá calcular e retornar ao programa principal o valor da potência.
*/
#include<iostream>
#include<locale.h>
#include<stdio.h>
#include<math.h>
using namespace std;
float calculaPotencia(float bah, float expo)
{
	float valor;
	valor=pow(bah,expo);
	return valor;
}
main()
{
	  float base, expoente, potencia;
	  setlocale(LC_ALL,"Portuguese");
	  cout<<"Informe uma número de base\n";
	  cin>>base;
	  cout<<"Informe um valor de expoente\n";
	  cin>>expoente;
	  potencia=calculaPotencia(base,expoente);
	  cout<<"Resultado da potência = "<<potencia<<"\n";
	  system("Pause>>null");
}

