/*
Alunos: Lucas Trevizan
4.	A prefeitura de uma cidade fez uma pesquisa entre seus habitantes, coletando dados sobre o salário,
a idade e o número de filhos de 50 habitantes. Você deve fazer um programa que leia estas informações
(no programa principal) e que tenha funções para:
a.	Uma função que calcule e retorne a media dos salários (deve receber o vetor dos salários)
b.	Uma função que retorne a maior idade (deve receber o vetor das idades)
c.	Uma função que retorne o menor salário (deve receber o vetor dos salários)
d.	Uma função que retorne a quantidade de habitantes com mais de 3 filhos e que tenham salário menor
que R$ 500,00 (deve receber o vetor com o numero de filhos e o vetor com os salários).
*/
#include<iostream>
#include<locale.h>
#include<stdio.h>
#include<math.h>
using namespace std;
//Constantes e Variáveis globais
const int tam=5;
int i;
//Função calcula média dos salários
float mediaSalario( float sal[tam])
{
	float media=0;
	for(i=0;i<tam;i++)
	{
		media+=sal[i];
	}
	media/=tam;
	return media;	
}
//Função que encontra a maior idade
int maiorIdade(int id[tam])
{
	int maior=id[0];
	for(i=1;i<tam;i++)
	{
		if(id[i]>maior)
			maior=id[i];			
	}
	return maior;
}
//Função que retorne o menor salário
float menorSalario(float sal[tam])
{
	float menor=sal[0];
	for(i=1;i<tam;i++)
	{
		if(sal[i]<menor)
			menor=sal[i];
	}
	return menor;
}
//Função que retornea quantidade de habitantes com mais de 3 filhos e que tenham salário menor que R$ 500,00
int quantHabitantes(int nFi[tam], float sal[tam])
{
	int quant=0;
	for(i=0;i<tam;i++)
	{
		if(nFi[i]>3 && sal[i]<500)
			quant++;
	}
	return quant;
}
main()
{
	  int idade[tam], nFilhos[tam];
	  float salario[tam];
	  setlocale(LC_ALL, "Portuguese");
	  //Estrutura de repetição para ler os vetores
	  for(i=0;i<tam;i++)
	  {
	  	cout<<"Dados do habitante "<<i+1<<"\n";
		  do{
	  		cout<<"Informe a idade\n";
	  		cin>>idade[i];
		    }while(idade[i]<0 || idade[i]>110);
	   	  do{
	  	  		cout<<"Informe o salário\n";
	  	  		cin>>salario[i];
			}while(salario[i]<0);
		  do{
		  		cout<<"Informe o número de filhos\n";
		  		cin>>nFilhos[i];
		    }while(nFilhos[i]<0);
	   }
	  cout<<"A média dos salários é "<<mediaSalario(salario)<<"\n";		//Não precisa identificar a linha ou a coluna de salário;
	  cout<<"A maior idade é "<<maiorIdade(idade)<<"\n";
	  cout<<"O menor salário é "<<menorSalario(salario)<<"\n";
	  cout<<"O número de habitantes com mais de 3 filhos e salário menor que R$ 500,00 é "<<quantHabitantes(nFilhos,salario)<<"\n";
	  system("Pause>>null");
}
