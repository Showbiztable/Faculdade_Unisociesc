/*
Alunos: Lucas Trevizan
4.	A prefeitura de uma cidade fez uma pesquisa entre seus habitantes, coletando dados sobre o sal�rio,
a idade e o n�mero de filhos de 50 habitantes. Voc� deve fazer um programa que leia estas informa��es
(no programa principal) e que tenha fun��es para:
a.	Uma fun��o que calcule e retorne a media dos sal�rios (deve receber o vetor dos sal�rios)
b.	Uma fun��o que retorne a maior idade (deve receber o vetor das idades)
c.	Uma fun��o que retorne o menor sal�rio (deve receber o vetor dos sal�rios)
d.	Uma fun��o que retorne a quantidade de habitantes com mais de 3 filhos e que tenham sal�rio menor
que R$ 500,00 (deve receber o vetor com o numero de filhos e o vetor com os sal�rios).
*/
#include<iostream>
#include<locale.h>
#include<stdio.h>
#include<math.h>
using namespace std;
//Constantes e Vari�veis globais
const int tam=5;
int i;
//Fun��o calcula m�dia dos sal�rios
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
//Fun��o que encontra a maior idade
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
//Fun��o que retorne o menor sal�rio
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
//Fun��o que retornea quantidade de habitantes com mais de 3 filhos e que tenham sal�rio menor que R$ 500,00
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
	  //Estrutura de repeti��o para ler os vetores
	  for(i=0;i<tam;i++)
	  {
	  	cout<<"Dados do habitante "<<i+1<<"\n";
		  do{
	  		cout<<"Informe a idade\n";
	  		cin>>idade[i];
		    }while(idade[i]<0 || idade[i]>110);
	   	  do{
	  	  		cout<<"Informe o sal�rio\n";
	  	  		cin>>salario[i];
			}while(salario[i]<0);
		  do{
		  		cout<<"Informe o n�mero de filhos\n";
		  		cin>>nFilhos[i];
		    }while(nFilhos[i]<0);
	   }
	  cout<<"A m�dia dos sal�rios � "<<mediaSalario(salario)<<"\n";		//N�o precisa identificar a linha ou a coluna de sal�rio;
	  cout<<"A maior idade � "<<maiorIdade(idade)<<"\n";
	  cout<<"O menor sal�rio � "<<menorSalario(salario)<<"\n";
	  cout<<"O n�mero de habitantes com mais de 3 filhos e sal�rio menor que R$ 500,00 � "<<quantHabitantes(nFilhos,salario)<<"\n";
	  system("Pause>>null");
}
