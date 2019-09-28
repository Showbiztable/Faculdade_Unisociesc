/*
1.	Faça um algoritmo que leia o tempo de duração de um evento em uma fábrica expressa em segundos e mostre-o expresso em horas, minutos e segundos.
*/
#include<iostream>
#include<locale.h>
#include<stdio.h>
#include<math.h>
using namespace std;
main()
{
	  float segundos, segundosrestantes, temp;
	  setlocale(LC_ALL,"Portuguese");
	  cout<<"Informe os segundos\n";
	  cin>>segundos;
	  temp=segundos/3600, segundos/3600 - segundos/60, segundosrestantes;
	  cout<<"O tempo de duração do evento é de "<<temp<<"\n";	  
	  system("Pause>>null");
}
	  

