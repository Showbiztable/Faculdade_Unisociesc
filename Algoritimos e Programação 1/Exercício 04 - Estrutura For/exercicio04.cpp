/*
Lucas Trevizan, Doglas Cattoni
4. Faça um programa que, dado um conjunto de 20 números,
determine o menor valor, o maior valor e a soma dos valores. 
*/
#include<iostream>
#include<locale.h>
#include<stdio.h>
#include<math.h>
using namespace std;
main()
{
	const int TAM=20;
	int cont;
	float num, menor, maior, soma=0;
	setlocale(LC_ALL,"Portuguese");
	for(cont=0;cont<TAM;cont++)
	{
		cout<<"Informe o número"<<cont+1<<"\n";
		cin>>num;
		soma+=num;//soma=soma+num;
		if(cont==0)
		{
			maior=num;
			menor=num;
		}
		else
		{
			if(num>maior)
				maior=num;
			if(num<menor)
				menor=num;
		}
	}
		cout<<"O maior número é: "<<maior<<"\n";
		cout<<"O menor número é: "<<menor<<"\n";
		cout<<"A soma dos números é: "<<soma<<"\n";
	  system("Pause>>null");
}
