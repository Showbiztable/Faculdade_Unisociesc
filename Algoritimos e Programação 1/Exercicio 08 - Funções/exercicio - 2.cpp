/*
Lucas Trevizan
2.	Fa�a um programa que tenha uma fun��o que receba dois n�meros como par�metro
e retorne para o programa principal a soma dos n�meros entre estes n�meros.
*/
#include<iostream>
#include<locale.h>
#include<stdio.h>
#include<math.h>
using namespace std;
float calculaSoma(float n1, float n2)
{
	float valor;
	int i;
	char troca;
	if(n1>n2)
	{
		troca=n1;
		n1=n2;
		n2=troca;
	}
	for(i=n1+1;i<n2;i++)
	{
		valor=valor+i;
	}	
	return valor;
}
main()
{
	  float num1, num2, soma;
	  setlocale(LC_ALL,"Portuguese");
	  cout<<"Informe o 1� n�mero\n";
	  cin>>num1;
	  cout<<"Informe o 2� n�mero\n";
	  cin>>num2;
	  soma=calculaSoma(num1,num2);
	  cout<<"Soma entre os intervalos = "<<soma<<"\n";
	  system("Pause>>null");
}
