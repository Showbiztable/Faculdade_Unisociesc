/*
6.	Construa um algoritmo que, tendo como dados de entrada dois pontos quaisquer no plano, P(x1,y1) e P(x2,y2), escreva a dist�ncia entre eles.
A f�rmula que efetua tal c�lculo �: 
*/
#include<iostream>
#include<locale.h>
#include<stdio.h>
#include<math.h>
using namespace std;
main()
{
	  float ponto1, ponto2, ponto3, ponto4, distancia;
	  setlocale(LC_ALL,"Portuguese");
	  cout<<"Informe o ponto 1, ponto 2, ponto 3 e o ponto 4\n";
	  cin>>ponto1>>ponto2>>ponto3>>ponto4
	  distancia=rad(pot(ponto1,2-ponto2,2)+pot(ponto3,2-ponto4,2));
	  cout<<"O valor da dist�ncia � de "<<valvenda<<"\n";
	  system("Pause>>null");
}
	  

