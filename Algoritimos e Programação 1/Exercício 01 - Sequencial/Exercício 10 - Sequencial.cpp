/*
10.	Fa�a um algoritmo que leia as 3 notas de um aluno e calcule a m�dia final deste aluno.
Considerar que a m�dia � ponderada e que o peso das notas �: 2,3 e 5, respectivamente.
*/
#include<iostream>
#include<locale.h>
#include<stdio.h>
#include<math.h>
using namespace std;
main()
{
	  float nota1, nota2, nota3, media;
	  setlocale(LC_ALL,"Portuguese");
	  cout<<"Informe a nota 1, nota2 e a nota 3\n";
	  cin>>nota1>>nota2>>nota3
	  media=((nota1*2)+(nota2*3)+(nota3*5))/10;
	  cout<<"A m�dia final desse aluno � de "<<meida<<"\n";	  
	  system("Pause>>null");
}
	  

