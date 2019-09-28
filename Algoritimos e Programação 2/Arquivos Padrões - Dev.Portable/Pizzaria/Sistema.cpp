#include <iostream>
#include <string>
#include <vector>
#include <conio2.h>
#include <fstream>

using namespace std;

#include "Tela.h"
#include "Cliente.h"  
#include "Produto.h"

main()
{
	Tela tela; 
	Cliente clientes;
	Produto produtos; 
	
	string op;
	vector<string> opcoes;	
	
	opcoes.push_back("1 - Clientes   "); 
	opcoes.push_back("2 - Produtos   ");
	opcoes.push_back("3 - Pedidos    ");
	opcoes.push_back("4 - Vendas     ");
	opcoes.push_back("0 - Sair       ");
	
	while (true)	
	{
		textcolor(GREEN);
		clrscr();
		
		//Monta o rodapé
		tela.montarMoldura(1,23,80,25,0);
		
		//Monta o cabeçalho
		tela.montarMoldura(1,1,80,3,0);
		tela.centralizar("Sistema para Controle de Pedidos",2); // Falar com o professor !!!!!
		
		//gotoxy(30,2); cout<<"Sistema para Controle de Pedidos"; 
		
		op = tela.mostrarMenu(5,5,opcoes); 
		if (op=="0") break;
		
		if (op=="1") clientes.executarCRUD ();
		
		if (op=="2") produtos.executarCRUD ();		
	}
}
