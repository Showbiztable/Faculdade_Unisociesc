/*
Alunos: Lucas Trevizan
1.	Crie um programa que leia o preço de cinco produtos em cinco
supermercados diferentes. Calcular a média do valor de cada produto.
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
	  //leitura dos preços
	  for(i=0;i<prod;i++)
	  {
	  	media[i]=0;
	  	cout<<"Informe o preço do produto "<<i+1<<"\n";
	  	for(j=0;j<super;j++)
	  	{
		  do{
	  			cout<<"No supermercado "<<j+1<<"\n";
	  			cin>>preco[i][j];
		    }while(preco[i][j]<=0);
		    
		    media[i]=media[i]+preco[i][j];//soma dos preços
		    
	    }//fim da coluna
	    
	    media[i]=media[i]/super;//cálculo da média dos preços
	    
	  }//fim da linha
	  
	  //Exibir os preços
	  
	  for(i=0;i<prod;i++)
	  {
	  	cout<<"Média dos preços do produto"<<i+1<<" no supermercado "<<i+1<<" = "<<media[i]<<"\n";
	  }
	  
	  system("Pause>>null");
}



