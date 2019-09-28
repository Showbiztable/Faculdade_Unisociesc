/*
10.	Faça um algoritmo que leia as 3 notas de um aluno e calcule a média final deste aluno.
Considerar que a média é ponderada e que o peso das notas é: 2,3 e 5, respectivamente.
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
	  cout<<"A média final desse aluno é de "<<meida<<"\n";	  
	  system("Pause>>null");
}
	  

