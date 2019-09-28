/*
16.	F.U.A. que peça 2 números inteiros e um número real. Calcule e mostre: 
a.	o produto do dobro do primeiro com metade do segundo . 
b.	a soma do triplo do primeiro com o terceiro. 
c.	o terceiro elevado ao cubo. 
*/
#include<iostream>
#include<locale.h>
#include<stdio.h>
#include<math.h>
using namespace std;
main()
{
	  float num1, num2, numr, produto, soma, cubo;
	  setlocale(LC_ALL,"Portuguese");
	  cout<<"Informe num 1, num 2 e o num r\n";
	  cin>>num1>>num2>>numr;
	  produto=pot((num1,2)*(num2,2));
	  soma=pot(num1,3)+numr;
	  cubo=pot(numr,3);
	  cout<<"O valor do produto é de "<<produto<<"\n";
	  cout<<"O valor da soma é de "<<soma<<"\n";
	  cout<<"O valor do produto é de "<<produto<<"\n";	  
	  system("Pause>>null");
}
	  

