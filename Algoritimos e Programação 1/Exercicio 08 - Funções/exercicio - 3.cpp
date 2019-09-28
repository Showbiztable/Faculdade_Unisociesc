/*
Alunos: Lucas e Trevizan
3.	Faça um programa que tenha uma função que receba a altura e o sexo de uma pessoa e retorne seu peso ideal:
a)	Para homens : (72.7 * altura) - 58;
b)	Para mulheres : (62.1 * altura) - 44.7
*/
#include<iostream>
#include<locale.h>
#include<stdio.h>
#include<math.h>
using namespace std;
//Funções do peso Feminino e Masculino;
void calculapesoideal(float alt,char s)
{
	const int homem=58, mulheres=44.7;
	if(s=='F')
	cout<<"Seu peso ideal é "<<(62.1*alt)-mulheres<<"\n";	
	else
	cout<<"Seu peso ideal é "<<(72.7*alt)-homem<<"\n";
}
main()
{
	  char resp, sexo;
	  float altura;
	  int i;
	  setlocale(LC_ALL, "Portuguese");
	  //Entrada de dados;
	  do{
	  	do{
	  		cout<<"Informe a altura\n";
	  		cin>>altura;
	      }while(altura<0);
	  	do{
	  		cout<<"Informe seu sexo M-Masculino ou F-Feminino\n";
	  		cin>>sexo;
	  		sexo=toupper(sexo);
	  		calculapesoideal(altura,sexo);			
	  	  }while(sexo!='F' && sexo!='M');
	  	  do{
			cout<<"Quer continuar o programa\nS-sim ou N-não\n";
	  	    cin>>resp;
	  	    resp=toupper(resp);
	  		}while(resp!='S' && resp!='N');
		}while(resp=='S');
	  system("Pause>>null");
}


