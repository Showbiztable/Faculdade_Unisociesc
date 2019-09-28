/*
13.	Faça um programa que pergunte o preço de três produtos e informe qual produto você deve comprar, sabendo que a decisão é sempre pelo mais barato.
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
	  cout<"Informe o preço de três produtos: \n";
	  cin>>pre1>>pre2>>pre3;
	  if(pre1>pre2>pre3)
	  cout<"Deve - se comprar o produto com o terceito preço\n";
	  if(pre2>pre3>pre1)
	  cout<"Deve - se comprar o produto com o primeiro preço\n";
	  if(pre3>pre2>pre1)
	  cout<"Deve - se comprar o produto com o segundo preço\n";
	  system("Pause>>null");
}
	  

