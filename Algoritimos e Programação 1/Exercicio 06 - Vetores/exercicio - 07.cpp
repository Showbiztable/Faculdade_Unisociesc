/*
Lucas Trevizan Arabites, Doglas Eduardo Evaristo Cattoni
7.	FPC que carregue um vetor com dez n�meros reais, calcule e mostre
a quantidade de n�meros negativos e a soma dos  n�meros positivos desse vetor.
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
	  cout<<"Informe "<<numero<<" n�meros reais:\n";
	  	for(i=0;i<numero;i++)
	  	{
	  		cout<<"Informe o n�mero de posi��o "<<i+1<<"\n";
	  		cin>>elemento[i];
		  		if(elemento[i]<0)
	  				quantNeg++;
	  					else if(elemento[i]>0)
	  						soma+=elemento[i];
	  			
	 	 }
	 	for(i=0;i<numero;i++)
		 { 
		 	cout<<"O n�mero de posi��o "<<i+1<<" : "<<elemento[i]<<"\n";
		 }
		 cout<<quantNeg<<" s�o n�meros negativos!\n";
	 	 cout<<soma<<" � a soma dos n�meros positivos!\n";
	 	
	  system("Pause>>null");
}



