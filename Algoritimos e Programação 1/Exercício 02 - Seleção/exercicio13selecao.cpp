/*
13.	Fa�a um programa que pergunte o pre�o de tr�s produtos e informe qual produto voc� deve comprar, sabendo que a decis�o � sempre pelo mais barato.
*/
#include<iostream>
#include<locale.h>
#include<stdio.h>
#include<math.h>
using namespace std;
main()
{
	  float pre1, pre2, pre3;
	  setlocale(LC_ALL,"Portuguese");
	  cout<"Informe o pre�o de tr�s produtos: \n";
	  cin>>pre1>>pre2>>pre3;
	  if(pre1>pre2>pre3)
	  cout<"Deve - se comprar o produto com o terceito pre�o\n";
	  if(pre2>pre3>pre1)
	  cout<"Deve - se comprar o produto com o primeiro pre�o\n";
	  if(pre3>pre2>pre1)
	  cout<"Deve - se comprar o produto com o segundo pre�o\n";
	  system("Pause>>null");
}
	  

