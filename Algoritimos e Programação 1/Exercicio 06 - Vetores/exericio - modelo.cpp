/*
Lucas Trevizan ; Doglas Cattoni
FUP que leia a nota de 30 alunos na disciplina do Camargo
-->  Calcule e mostre a m�dia da turma
--> Mostrar as notas de cada aluno
--> Mostrar quantos alunos tiveram nota acima da m�dia da turma
--> Mostrar quantos alunos tiveram nota abaixo da m�dia da turma
*/
#include<iostream>
#include<locale.h>
#include<stdio.h>
#include<math.h>
using namespace std;
main()
{
	  const int alunos=30;
	  float nota[alunos], media=0;
	  int cont, quantMaior=0, quantMenor=0, quantIgual=0;
      setlocale(LC_ALL,"Portuguese");
      cout<<"Informe "<<alunos<<"notas\n";
      for(cont=0; cont<alunos; cont++)
      {
      		do{//valida��o da nota
      		
					cout<<"Nota do aluno "<<cont+1<<"\n";
      				cin>>nota[cont];
      	      }while(nota[cont]<0 || nota[cont]>10);
      				
					media+=nota[cont];
      		
	  }
      			    //calcular a m�dia da turma
      			    media=media/alunos;//alunos pode ser substituido por cont
      			    cout<<"A m�dia da turma � "<<media<<"\n";
      			    		for(cont=0;cont<alunos;cont++)
      			    		{
      			    			cout<<"Nota do aluno "<<cont+1<<" : "<<nota[cont]<<"\n";
      			    			if(nota[cont]>media)//alunos � o total de notas e o cont vai ser o lugar da nota      			    			
      			    				quantMaior++;
      			    			else if(nota[cont]<media)
      			    				quantMenor++;
      			    			else
      			    				quantIgual++;
							}
							cout<<quantMaior<<" Alunos tiveram nota maior que "<<media<<"\n";	
							cout<<quantMenor<<" Alunos tiveram nota menor que "<<media<<"\n";				
							cout<<quantIgual<<" Alunos tiveram nota igual que "<<media<<"\n";				
			
		system("Pause");
}



