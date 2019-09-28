/*
5.	Faça um Programa que pergunte em que turno você estuda.
Peça para digitar M-matutino ou V-Vespertino ou N- Noturno.
Imprima a mensagem "Bom Dia!", "Boa Tarde!" ou "Boa Noite!" ou "Valor Inválido!", conforme o caso.
*/
#include<iostream>
#include<locale.h>
#include<stdio.h>
#include<math.h>
using namespace std;
main()
{
	  char turno, m_matutino, v_vespertino, n_noturno;
	  setlocale(LC_ALL,"Portuguese");
	  cout<<"Informe o turno em que você estuda: m_matutino, v_vespertino ou n_noturno \n";
	  cin>>turno;
	  if(turno==m_matutino)
	  cout<<"Bom dian\n";
	  if(turno==v_vespertino)
	  cout<<"Boa Tarde\n";
	  if(turno==n_noturno)
	  cout<<"Boa noite\n";
	  system("Pause>>null");
}
	  

