/*
Lucas Trevizan, Doglas Cattoni
4. Fa�a um programa que, dado um conjunto de 20 n�meros,
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
		cout<<"Informe o n�mero"<<cont+1<<"\n";
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
		cout<<"O maior n�mero �: "<<maior<<"\n";
		cout<<"O menor n�mero �: "<<menor<<"\n";
		cout<<"A soma dos n�meros �: "<<soma<<"\n";
	  system("Pause>>null");
}
