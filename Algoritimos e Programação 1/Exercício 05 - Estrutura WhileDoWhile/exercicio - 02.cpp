/*
2.	FUA que pe�a a idade de N pessoas. O Algoritmo dever� calcular
a media das idades e mostrar uma mensagem de acordo com a m�dia:
"	Se a m�dia for entre 0 e 25 - "Turma Jovem"
"	Se a m�dia for entre 26 e 60 - "Turma Adulta"
"	Se a m�dia for maior que 60 - "Turma Idosa"
*/
#include<iostream>
#include<locale.h>
#include<stdio.h>
#include<math.h>
using namespace std;
main()
{
	  int idade, media=0, pes=0;
	  setlocale(LC_ALL,"Portuguese");
	  cout<<"Informe o valor da idade\nDigite 0 para finalizar\n";
	  cin>>idade;
	  while(idade!=0)
	  {
	  	media=media+idade;
	  	pes++;
	  	cout<<"Informe o valor da idade\nDigite 0 para finalizar\n";
	  	cin>>idade;
	  }
	  if(pes!=0)
      {
	  	media/=pes;//media=media/quantPes;
      	cout<<"A m�dia das idades � "<<media<<"\n";
      }
      else
        cout<<"N�o foi informada nenhuma idade\n";
      if (media>=0 && media<=25)
      	cout<<"Turma jovem\n";
      if (media>=26 && media<=60)
      	cout<<"Turma adulta\n";
      if (media>60)
      	cout<<"Turma idosa\n";
	  system("Pause>>null");
}
	  

