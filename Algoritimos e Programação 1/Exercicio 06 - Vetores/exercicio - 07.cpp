/*
Lucas Trevizan Arabites, Doglas Eduardo Evaristo Cattoni
7.	FPC que carregue um vetor com dez números reais, calcule e mostre
a quantidade de números negativos e a soma dos  números positivos desse vetor.
*/
#include<iostream>
#include<locale.h>
#include<stdio.h>
#include<math.h>
using namespace std;
main()
{
	  const int numero=3;
	  int i, elemento[numero], quantNeg=0, soma=0;
	  setlocale(LC_ALL,"Portuguese");
	  cout<<"Informe "<<numero<<" números reais:\n";
	  	for(i=0;i<numero;i++)
	  	{
	  		cout<<"Informe o número de posição "<<i+1<<"\n";
	  		cin>>elemento[i];
		  		if(elemento[i]<0)
	  				quantNeg++;
	  					else if(elemento[i]>0)
	  						soma+=elemento[i];
	  			
	 	 }
	 	for(i=0;i<numero;i++)
		 { 
		 	cout<<"O número de posição "<<i+1<<" : "<<elemento[i]<<"\n";
		 }
		 cout<<quantNeg<<" são números negativos!\n";
	 	 cout<<soma<<" é a soma dos números positivos!\n";
	 	
	  system("Pause>>null");
}



