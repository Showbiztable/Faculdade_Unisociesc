/*
2.	Fa�a um Programa que leia uma matriz 3x4 e calcule qual o maior e o menor n�mero informado.
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
	  	cout<<"Informe os n�meros da linha "<<i+1<<"\n";
	  	for(j=0;j<coluna;j++)
	  	{
	  		cout<<"Informe o n�mero "<<j+1<<"\n";
			cin>>num[i][j];
	  		
	  		if(i==0 && j==0)//o primeiro n�mero informado na i - 0 e j - 0.
	  		{
	  			maior=num[i][j];// a variavel recebe o primeiro valor informado.
	  		}
	  		else if(num[i][j]>maior)// ocorre a compara��o da variavel com os n�meros que seram informados.
	  		{
	  			maior=num[i][j];// se o n�mero informado for maior que o valor da variavel, discarta-se o primeiro n�mero e guarda este.
			}
			if(i==0 && j==0)// o primeiro n�mero informado na i - 0 e j - 0.
			{
				menor=num[i][j];// a variavel recebe o primeiro valor informado.
			}
			else if(num[i][j]<menor)// ocorre a compara��o da variavel com os n�meros que seram informados.
			{
				menor=num[i][j];//se o n�mero informado for menor que o valor da variavel, descarta-se o primeiro n�mero e guarda este.
			}
		}//fim da coluna;
	  }//fim da linha;
	  //Mostrar a matriz:
	  cout<<"O maior n�mero informado � "<<maior<<"\n";
	  cout<<"O menor n�mero informado � "<<menor<<"\n";
	  system("Pause>>null");
}
