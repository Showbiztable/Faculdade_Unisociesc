/*
Lucas Trevizan
1.	Fa�a um programa que tenha uma fun��o que receba a base e o expoente.
A fun��o dever� calcular e retornar ao programa principal o valor da pot�ncia.
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
	  cout<<"Informe uma n�mero de base\n";
	  cin>>base;
	  cout<<"Informe um valor de expoente\n";
	  cin>>expoente;
	  potencia=calculaPotencia(base,expoente);
	  cout<<"Resultado da pot�ncia = "<<potencia<<"\n";
	  system("Pause>>null");
}

