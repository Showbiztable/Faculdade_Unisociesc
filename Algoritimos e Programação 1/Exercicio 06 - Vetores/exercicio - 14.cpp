/*
Lucas Trevizan Arabites, Doglas Eduardo Evaristo Cattoni
14.	FUP que leia a temperatura em cada m�s do ano e armazene-as em um vetor. 
Calcule e mostre a media das temperaturas no ano. Ao final o programa deve mostrar:
a)	As temperaturas de cada m�s;
b)	A m�dia calculada;
c)	A quantidade de temperaturas maior de 30�.
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
	  	cout<<"Informe a temperatura do m�s "<<i+1<<"\n";
	  	cin>>temp[i];
	  	//Somando todas as temperaturas e armazenando a soma na vari�vel m�dia
	  	media+=temp[i];//m�dia=temp[1]+media
	  	//verificando se a temperatura > 30
	  	if(temp[i]>30)
	  		quant30++;
	  }
	  //Quando terminar o for na vari�vel m�dia tem a soma de todas as temperaturas e ent�o posso calcular a m�dia
	  media/=mes;
	  cout<<"A m�dia de temperaturas �: "<<media<<"\n";
	  cout<<quant30<<" temperaturas maiores que 30� foram informadas\n";
	  //mostrar o vetor das temperaturas
	  for(i=0;i<mes;i++)
	  {
	  		cout<<"Temperatura no m�s"<<i+1<<" : "<<temp[i]<<"\n";
	  }
	  
	  system("Pause>>null");
}



