/*
Lucas Trevizan e Doglas E E Cattoni
9.	O Sr. Manoel Joaquim acaba de adquirir uma panificadora e pretende implantar a metodologia da tabelinha,
que j� � um sucesso na sua loja de 1,99. Voc� foi contratado para desenvolver o programa que monta a tabela
de pre�os de p�es, de 1 at� 50 p�es, a partir do pre�o do p�o informado pelo usu�rio, conforme o exemplo abaixo: 
Pre�o do p�o: R$ 0.18
Panificadora P�o de Ontem - Tabela de pre�os
1 - R$ 0.18
2 - R$ 0.36
...
50 - R$ 9.00
*/
#include<iostream>
#include<locale.h>
#include<stdio.h>
#include<math.h>
using namespace std;
main()
{
	float preco;
	int cont;
	setlocale(LC_ALL,"Portuguese");
	cout<<"Pre�o do P�o: R$ ";
	cin>>preco;
    cout<<"Panificaradora P�o de Ontem - Tabela de pre�os\n";
    for(cont=1;cont<=50;cont++)
    {
    	cout<<cont<<" - R$ "<<preco*cont<<"\n";    	
	}
	system("Pause>>null");

}

