/*
Alunos: Lucas Trevizan
5.	Nas Olimpíadas da Sociesc acontecem várias competições, entre elas salto em distância,
nesta competição cada atleta tem direito a cinco saltos, para valorizar o atleta mais
constante é feita a média dos saltos. Você foi contratado para implementar um sistema
que fará o controle desta competição, utilizando o recurso de Matriz, resolva os itens abaixo:
- Solicitar os cinco saltos de cada atleta;
- Após o atleta saltar mostrar a média;
- Permitir a utilização do sistema por 5 atletas;
- Ao final, ou seja, após os 5 atletas digitarem os saltos o programa deve mostrar:
- Saltos de cada atleta, seguidos de sua média;
- A média dos saltos do campeão e do último lugar;
*/
#include<iostream>
#include<locale.h>
#include<stdio.h>
#include<math.h>
using namespace std;
main()
{
	  const int atletas=5, saltos=5;
	  int i, j;
	  float media[atletas], nota[atletas][saltos], maiorMedia, menorMedia;
	  setlocale(LC_ALL, "Portuguese");
	  //Leitura da Matriz;
	  for(i=0;i<atletas;i++)
	  {
	  	cout<<"Atleta "<<i+1<<"\n";
	  	media[i]=0;
	  	for(j=0;j<saltos;j++)
	  	{
	  	  
		  cout<<"Nota do salto "<<j+1<<"\n";
	  	  cin>>nota[i][j];
	  	  media[i]=media[i]+nota[i][j];

	      
	  	}//Fim da coluna - j	  	
	  	
	  	media[i]=media[i]/saltos;
		 
		  if(i==0)
	  	{
	  	  maiorMedia=media[i];
		  menorMedia=media[i];	
		}
		else
		{
			if(media[i]>maiorMedia)
				maiorMedia=media[i];
			if(media[i]<menorMedia)
				menorMedia=media[i];
		} 
		
	  }//Fim da linha - i 
	 
	  //Mostrar os resultados da matriz;
	  for(i=0;i<atletas;i++)
	  {
	  	cout<<"Notas do atleta "<<i+1<<"\n";
	    for(j=0;j<saltos;j++)
	  {
	  	cout<<"Nota do salto "<<j+1<<" : "<<nota[i][j]<<"\n";
	  }//Fim da coluna - j
	  	cout<<"A média dos saltos é "<<media[i]<<"\n";
      }//Fim da linha - i
	  cout<<"A média dos saltos do campeão é "<<maiorMedia<<"\n";
	  cout<<"A média dos saltos do último lugar é "<<menorMedia<<"\n";
	  system("Pause>>null");
}


