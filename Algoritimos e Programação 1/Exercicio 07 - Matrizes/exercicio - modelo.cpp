/*
Alunos: Lucas Trevizan
Fa�a um programa que leia o pre�o de 5 produtos em 3 supermercados, armazenar os pre�os em uma matriz:
1)Mostrar os pre�os de todos os produtos x supermercados;
2)Encontre o produto mais caro e a qual supermercado pertence;
3)Fa�a a m�dia de pre�o de cada produto.
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
		cout<<"Informe o pre�o do produto "<<i+1<<"\n";
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
			  
			  media[i]=media[i]+preco[i][j];//pode fazer aqui ou antes do if do segundo for; acumula a soma do pre�o do produto i
			  			  			  			
		 }//fim do for coluna
		 
		 media[i]=media[i]/super;//sup --> j
		 
	  }//fim do for linha
	  //Mostrar a matriz pre�o
	  for(i=0;i<prod;i++)
	  {
	  	  cout<<"Produto "<<i+1<<"\n";
		  for(j=0;j<super;j++)
	  	{
	  		cout<<"No supermercado "<<j+1<<" : R$ "<<preco[i][j]<<"\n";
		}//fim do for da coluna - j
		
		cout<<"M�dia de Pre�o: R$ "<<media[i]<<"\n";
		
	  }//fim do for linha - i
	  cout<<"O maior pre�o � "<<maiorPreco<<" do produto "<<maiorProd<<" no supermercado "<<maiorSuper<<"\n";
	  system("Pause>>null");
}
