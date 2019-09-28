/*
Lucas Trevizan
Faça um Programa que leia um número inteiro menor que 1000 e
imprima a quantidade de centenas, dezenas e unidades do mesmo.
326 = 3 centenas, 2 dezenas e 6 unidades
12 = 1 dezena e 2 unidades
*/
#include<iostream>
#include<locale.h>
#include<stdio.h>
#include<math.h>
using namespace std;
main()
{
	  int valor, centenas, dezenas, unidades;	  
	  setlocale(LC_ALL,"Portuguese");
	  cout<<"Informe um valor que seja menor que 1000\n";
	  cin>>valor;
	  if(valor<1000)
	  {
	  centenas=valor/100;
	  dezenas=(valor-(centenas*100))/10;
	  unidades=valor-((centenas*100)+(dezenas*10));
	  cout<<"Este valor possui "<<centenas<<" centenas, "<<dezenas<<" dezenas e "<<unidades<<" unidades\n";
	  }
	  else
	  cout<<"O valor informado deve ser menor que 1000\n";
	  system("Pause>>null");
}

