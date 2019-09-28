/*
Lucas Trevizan Arabites, Doglas Eduardo Evaristo Cattoni
14.	FUP que leia a temperatura em cada mês do ano e armazene-as em um vetor. 
Calcule e mostre a media das temperaturas no ano. Ao final o programa deve mostrar:
a)	As temperaturas de cada mês;
b)	A média calculada;
c)	A quantidade de temperaturas maior de 30º.
*/
#include<iostream>
#include<locale.h>
#include<stdio.h>
#include<math.h>
using namespace std;
main()
{
	  const int mes=12;
	  float temp[mes], media=0;
	  int i, quant30=0;
	  setlocale(LC_ALL,"Portuguese");
	  for(i=0;i<mes;i++)
	  {
	  	cout<<"Informe a temperatura do mês "<<i+1<<"\n";
	  	cin>>temp[i];
	  	//Somando todas as temperaturas e armazenando a soma na variável média
	  	media+=temp[i];//média=temp[1]+media
	  	//verificando se a temperatura > 30
	  	if(temp[i]>30)
	  		quant30++;
	  }
	  //Quando terminar o for na variável média tem a soma de todas as temperaturas e então posso calcular a média
	  media/=mes;
	  cout<<"A média de temperaturas é: "<<media<<"\n";
	  cout<<quant30<<" temperaturas maiores que 30º foram informadas\n";
	  //mostrar o vetor das temperaturas
	  for(i=0;i<mes;i++)
	  {
	  		cout<<"Temperatura no mês"<<i+1<<" : "<<temp[i]<<"\n";
	  }
	  
	  system("Pause>>null");
}



