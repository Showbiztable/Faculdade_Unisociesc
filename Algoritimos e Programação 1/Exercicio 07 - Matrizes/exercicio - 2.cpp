/*
2.	Faça um Programa que leia uma matriz 3x4 e calcule qual o maior e o menor número informado.
*/
#include<iostream>
#include<locale.h>
#include<stdio.h>
#include<math.h>
using namespace std;
main()
{
	  const int linha=3, coluna=4;
	  int i, j;
	  float maior, menor, num[linha][coluna];
	  setlocale(LC_ALL,"Portuguese");
	  //Leitura da matriz:
	  for(i=0;i<3;i++)
	  {
	  	cout<<"Informe os números da linha "<<i+1<<"\n";
	  	for(j=0;j<coluna;j++)
	  	{
	  		cout<<"Informe o número "<<j+1<<"\n";
			cin>>num[i][j];
	  		
	  		if(i==0 && j==0)//o primeiro número informado na i - 0 e j - 0.
	  		{
	  			maior=num[i][j];// a variavel recebe o primeiro valor informado.
	  		}
	  		else if(num[i][j]>maior)// ocorre a comparação da variavel com os números que seram informados.
	  		{
	  			maior=num[i][j];// se o número informado for maior que o valor da variavel, discarta-se o primeiro número e guarda este.
			}
			if(i==0 && j==0)// o primeiro número informado na i - 0 e j - 0.
			{
				menor=num[i][j];// a variavel recebe o primeiro valor informado.
			}
			else if(num[i][j]<menor)// ocorre a comparação da variavel com os números que seram informados.
			{
				menor=num[i][j];//se o número informado for menor que o valor da variavel, descarta-se o primeiro número e guarda este.
			}
		}//fim da coluna;
	  }//fim da linha;
	  //Mostrar a matriz:
	  cout<<"O maior número informado é "<<maior<<"\n";
	  cout<<"O menor número informado é "<<menor<<"\n";
	  system("Pause>>null");
}
