/*
Alunos: Lucas Trevizan
1.	Crie um programa que leia o pre�o de cinco produtos em cinco
supermercados diferentes. Calcular a m�dia do valor de cada produto.
*/
#include<iostream>
#include<locale.h>
#include<stdio.h>
#include<math.h>
using namespace std;
main()
{
	  const int prod=5, super=5;
	  int i, j;
	  float preco[i][j], media[prod];	  
	  setlocale(LC_ALL, "Portuguese");
	  //leitura dos pre�os
	  for(i=0;i<prod;i++)
	  {
	  	media[i]=0;
	  	cout<<"Informe o pre�o do produto "<<i+1<<"\n";
	  	for(j=0;j<super;j++)
	  	{
		  do{
	  			cout<<"No supermercado "<<j+1<<"\n";
	  			cin>>preco[i][j];
		    }while(preco[i][j]<=0);
		    
		    media[i]=media[i]+preco[i][j];//soma dos pre�os
		    
	    }//fim da coluna
	    
	    media[i]=media[i]/super;//c�lculo da m�dia dos pre�os
	    
	  }//fim da linha
	  
	  //Exibir os pre�os
	  
	  for(i=0;i<prod;i++)
	  {
	  	cout<<"M�dia dos pre�os do produto"<<i+1<<" no supermercado "<<i+1<<" = "<<media[i]<<"\n";
	  }
	  
	  system("Pause>>null");
}



