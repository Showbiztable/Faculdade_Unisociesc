/*
16.	F.U.A. que pe�a 2 n�meros inteiros e um n�mero real. Calcule e mostre: 
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
	  cout<<"O valor do produto � de "<<produto<<"\n";
	  cout<<"O valor da soma � de "<<soma<<"\n";
	  cout<<"O valor do produto � de "<<produto<<"\n";	  
	  system("Pause>>null");
}
	  

