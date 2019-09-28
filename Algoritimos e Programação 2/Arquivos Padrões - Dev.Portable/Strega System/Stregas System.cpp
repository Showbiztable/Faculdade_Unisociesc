#include <iostream>
#include <vector>
#include <string>
#include <conio2.h>
#include <fstream>

using namespace std;

#include "Tela.h"
#include "Stregas.h"
//#include "habilidade.h"
//#include "nivel.h"
//#include "enchanted.h"
//#include "campos.h"

main()
{
	Tela tela;
	Stregas lutadores; 
//	Estilo habilidade;
//	Patente nivel;
//	Blades enchanted;
//	Battle campos;	
	
	string op;	
	vector <string> opcoes;
		
	opcoes.push_back("1 - Strega        ");
	opcoes.push_back("2 - Estilo        ");
	opcoes.push_back("3 - Patente       "); 
	opcoes.push_back("4 - Ogre Luxs     ");
	opcoes.push_back("5 - Battle Fields "); 	
	opcoes.push_back("0 - Sair          ");
	
	while (true)
	{
		textcolor(RED);
		clrscr();
	    
		// Rodapé
		tela.montarMoldura(1,23,80,25,0);
		
		// Cabeçalho
		tela.montarMoldura(1,1,80,3,0);
		tela.centralizar("Fight System: Online",2);
	
				
	
		op = tela.mostrarMenu(6,6,opcoes); 
		
		if (op == "0") break;
		
		if (op == "1") lutadores.analisarStrega ();
		
		//if (op == "2") habilidade.analisarStrega ();
		
		//if (op == "3") nivel.analisarStrega ();
		
		//if (op == "4") enchanted.analisarStrega ();
		
		//if (op == "5") campos.analisarStrega ();
	}		
}
