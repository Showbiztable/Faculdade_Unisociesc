/*
Alunos: Lucas Trevizan, Doglas Cattoni
4.	Faça um programa para a leitura de duas notas parciais de um aluno. O programa deve calcular a média alcançada por aluno e apresentar:
"	A mensagem "Aprovado", se a média alcançada for maior ou igual a sete;
"	A mensagem "Exame", se a média for menor do que sete e maior do que três;
"	A mensagem "Reprovado", se a média for menor que três.
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



