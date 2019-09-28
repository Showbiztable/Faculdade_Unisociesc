/*
Alunos: Lucas Trevizan
4.	Utilizando a estrutura de matriz, fa�a um programa que para um col�gio que tem 10 alunos e estes s�o avaliados em duas provas.
O programa deve permitir digita��o das duas notas dos dez alunos e ap�s isto mostrar as seguintes informa��es:
   - As duas Notas de cada aluno
   - A m�dia de cada aluno
   - A maior e menor nota
   - A maior e menor m�dia
   - A m�dia geral da turma
   - O numero de alunos acima e abaixo da Media Geral da Turma
   Obs: A m�dia tamb�m deve ser armazenada na matriz 
*/
#include<iostream>
#include<locale.h>
#include<stdio.h>
#include<math.h>
using namespace std;
main()
{
	  const int linha=10, coluna=3;
	  float mediageral=0, menornota, maiornota, maiorMedia, menorMedia, nota[linha][coluna];
	  int i, j, quantAcima=0, quantAbaixo=0;	  
	  setlocale(LC_ALL, "Portuguese");
	  //Leitura da Matriz:
	  
	  for(i=0;i<linha;i++)
	  {
	  	cout<<"Aluno "<<i+1<<"\n";
	  	nota[i][2]=0;
	  	for(j=0;j<coluna-1;j++)
	  	{
	  	  do{
	  	  		cout<<"Nota na prova "<<j+1<<"\n";
	  	  		cin>>nota[i][j];
	  	    }while(nota[i][j]<0 || nota[i][j]>10);
	  	  nota[i][2]=nota[i][2]+nota[i][j];//Soma da notas de cada aluno na �ltima coluna;
	  	  
	  	  if(i==0 && j==0)
	  	  {
	  	  	maiornota=nota[i][j];
	  	  	menornota=nota[i][j];
		  }
		  else
		  {
		  	if(nota[i][j]>maiornota)
				maiornota=nota[i][j];
			if(nota[i][j]<menornota)
				menornota=nota[i][j];
		  }	  
				  
		}//Fim da coluna;
		
		nota[i][2]=nota[i][2]/(coluna-1);//Calculo da m�dia de cada aluno;
		
		mediageral=mediageral+nota[i][2];		
		
		if(i==0)
		{
			 maiorMedia=nota[i][2];
			 menorMedia=nota[i][2];
		}
		else 
		{
			if(nota[i][2]>maiorMedia)
				maiorMedia= nota[i][2];
			if(nota[i][2]<menorMedia)
				menorMedia= nota[i][2];
		}	
	  }//Fim da linha;
	  	 	  
	  mediageral=mediageral/linha;
	  
	  //Mostrar as notas dos alunos:
	  
	  for(i=0;i<linha;i++)
	  {
	  	cout<<"Notas do aluno "<<i+1<<"\n";
		for(j=0;j<coluna-1;j++)
	  	{
	  	  cout<<"Valor da Nota: "<<nota[i][j]<<"\n";		  	
		}//Fim da coluna;
		  cout<<"Valor da M�dia: "<<nota[i][2]<<"\n";
		  //encontrar a quantidade de alunos com m�dia acima e abaixo da m�dia geral da turma;
  	  
		if(nota[i][2]<mediageral)
	    {
	  		quantAbaixo++;
	    }
	  	else if(nota[i][2]>mediageral)
	    {
	  		quantAcima++;
	    }	  
	  }//Fim da linha;
	  
	  cout<<"A maior nota � "<<maiornota<<"\n";
	  cout<<"A menor nota � "<<menornota<<"\n";
	  cout<<"A maior m�dia � "<<maiorMedia<<"\n";
	  cout<<"A menor m�dia � "<<menorMedia<<"\n";
	  cout<<"A m�dia geral da turma � "<<mediageral<<"\n";
	  cout<<"A quantidade de alunos com m�dia acima da m�dia geral � "<<quantAcima<<"\n";
	  cout<<"A quantidade de alunos com m�dia abaixo da m�dia geral � "<<quantAbaixo<<"\n";
	  system("Pause>>null");
}
