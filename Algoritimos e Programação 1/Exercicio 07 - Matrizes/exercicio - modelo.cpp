/*
Alunos: Lucas Trevizan
Faça um programa que leia o preço de 5 produtos em 3 supermercados, armazenar os preços em uma matriz:
1)Mostrar os preços de todos os produtos x supermercados;
2)Encontre o produto mais caro e a qual supermercado pertence;
3)Faça a média de preço de cada produto.
*/
#include<iostream>
#include<locale.h>
#include<stdio.h>
#include<math.h>
using namespace std;
main()
{
	  const int prod=5, super=3;
	  int i, j, maiorSuper, maiorProd; 
	  float preco[prod][super], maiorPreco, media[prod];
	  setlocale(LC_ALL, "Portuguese");
	  //leitura da matriz preco
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
			  
			  if(i==0 && j==0)
			  {
			  	maiorPreco=preco[i][j];
			  	maiorProd=i+1;
				maiorSuper=j+1;
			  }
			  
			  else
			  {
			  	if(preco[i][j]>maiorPreco)
			  	{
			  		maiorPreco=preco[i][j];
			  		maiorProd=i+1;
			  		maiorSuper=j+1;
				}
			  }//fim do else
			  
			  media[i]=media[i]+preco[i][j];//pode fazer aqui ou antes do if do segundo for; acumula a soma do preço do produto i
			  			  			  			
		 }//fim do for coluna
		 
		 media[i]=media[i]/super;//sup --> j
		 
	  }//fim do for linha
	  //Mostrar a matriz preço
	  for(i=0;i<prod;i++)
	  {
	  	  cout<<"Produto "<<i+1<<"\n";
		  for(j=0;j<super;j++)
	  	{
	  		cout<<"No supermercado "<<j+1<<" : R$ "<<preco[i][j]<<"\n";
		}//fim do for da coluna - j
		
		cout<<"Média de Preço: R$ "<<media[i]<<"\n";
		
	  }//fim do for linha - i
	  cout<<"O maior preço é "<<maiorPreco<<" do produto "<<maiorProd<<" no supermercado "<<maiorSuper<<"\n";
	  system("Pause>>null");
}
