/*
Lucas Trevizan, Doglas Cattoni
Exemplo Do While
FUP que leia diversas idades, calcule e mostre a média

*/
#include<iostream>
#include<locale.h>
#include<stdio.h>
#include<math.h>
using namespace std;
main()
{
	int idade, media=0, quantPes=0;
	setlocale(LC_ALL,"Portuguese");
 	do{
 		cout<<"Informe a idade\nPara finalizar digite 0\n";
 		cin>>idade;
 		if(idade!=0)
 		{
 			media+=idade;
 			quantPes++;
		 }
 	 }while(idade!=0);
 	 
	  if(quantPes!=0)
 	 {
 	 	media/=quantPes;
 	    cout<<"A média das idades é"<<media<<"\n";
     }
		else
		cout<<"Não foi informado nenhuma idade\n";
		system("Pause>>null");
}
