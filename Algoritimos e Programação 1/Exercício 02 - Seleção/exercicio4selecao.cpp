/*
Alunos: Lucas Trevizan, Doglas Cattoni
4.	Fa�a um programa para a leitura de duas notas parciais de um aluno. O programa deve calcular a m�dia alcan�ada por aluno e apresentar:
"	A mensagem "Aprovado", se a m�dia alcan�ada for maior ou igual a sete;
"	A mensagem "Exame", se a m�dia for menor do que sete e maior do que tr�s;
"	A mensagem "Reprovado", se a m�dia for menor que tr�s.
*/
#include<iostream>
#include<locale.h>
#include<stdio.h>
#include<math.h>
using namespace std;
main()
{
	  float n1, n2, media;
	  setlocale(LC_ALL, "Portuguese");
	  cout<<"Informe duas notas: \n";
	  cin>>n1>>n2;
	  media=(n1+n2)/2;
	  if(media>=7)
	  cout<<"Aluno aprovado.\n";
	  else if(media>=3)
	  cout<<"Aluno em exame.\n";
	  if(media<3)
	  cout<<"Reprovado.\n";	  
	  system("Pause");
}



