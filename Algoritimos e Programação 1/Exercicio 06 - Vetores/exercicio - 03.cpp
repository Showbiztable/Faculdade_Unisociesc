/*
3.	FPC que leia 4 notas, mostre as notas e a média na tela. 
*/
#include<iostream>
#include<locale.h>
#include<stdio.h>
#include<math.h>
using namespace std;
main()
{
	  const int alunos=4;
	  float nota[alunos], media=0;
	  int cont;
	  setlocale(LC_ALL,"Portuguese");
	  cout<<"Informe "<<alunos<<" notas\n";
	  for(cont=0;cont<alunos;cont++)
	  {
	  	do{
	  		
			cout<<"Nota do aluno "<<cont+1<<"\n";
	  		cin>>nota[cont];
	  			  		
		  }while(nota[cont]<0 || nota[cont]>10);
		  
		  media+=nota[cont];
	  }
	  for(cont=0;cont<alunos;cont++)
	  {
	  	cout<<"Nota "<<cont+1<<" : "<<nota[cont]<<"\n";
	  }
	  
	  media/=alunos;
	  cout<<"A média é "<<media<<"\n";
	  
	  system("Pause>>null");
}
	  

