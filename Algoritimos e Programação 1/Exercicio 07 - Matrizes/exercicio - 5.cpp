/*
Alunos: Lucas Trevizan
5.	Nas Olimp�adas da Sociesc acontecem v�rias competi��es, entre elas salto em dist�ncia,
nesta competi��o cada atleta tem direito a cinco saltos, para valorizar o atleta mais
constante � feita a m�dia dos saltos. Voc� foi contratado para implementar um sistema
que far� o controle desta competi��o, utilizando o recurso de Matriz, resolva os itens abaixo:
- Solicitar os cinco saltos de cada atleta;
- Ap�s o atleta saltar mostrar a m�dia;
- Permitir a utiliza��o do sistema por 5 atletas;
- Ao final, ou seja, ap�s os 5 atletas digitarem os saltos o programa deve mostrar:
- Saltos de cada atleta, seguidos de sua m�dia;
- A m�dia dos saltos do campe�o e do �ltimo lugar;
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
	  	cout<<"A m�dia dos saltos � "<<media[i]<<"\n";
      }//Fim da linha - i
	  cout<<"A m�dia dos saltos do campe�o � "<<maiorMedia<<"\n";
	  cout<<"A m�dia dos saltos do �ltimo lugar � "<<menorMedia<<"\n";
	  system("Pause>>null");
}


