#include <iostream>
#include <string>
#include <vector>
#include <conio2.h>
#include <fstream> // Para manipular gravação de arquivo com esta biblioteca

using namespace std;

#include "Tela.h"
#include "Aluno.h"
#include "Disciplina.h" 
#include "Nota.h"

main()
{
	Tela tela; 
	Aluno alunos;
	Disciplina disciplinas;
	Nota notas;
	
	notas.definirPonteiros(&alunos, &disciplinas);
	
	string op;
	vector<string> opcoes;	
	
	opcoes.push_back("1 - Alunos     "); 
	opcoes.push_back("2 - Disciplinas");
	opcoes.push_back("3 - Notas      ");
	opcoes.push_back("4 - Boletim    ");
	opcoes.push_back("0 - Sair       ");
	
	while (true)	
	{
		textcolor(WHITE);
		clrscr();
		
		//Monta o rodapé
		tela.montarMoldura(1,23,80,25,0);
		
		//Monta o cabeçalho
		tela.montarMoldura(1,1,80,3,0);
		tela.centralizar("Sistema para Controle de Notas",2); 
		
		op = tela.mostrarMenuBarras(5,5,opcoes); 
		if (op=="0") break;
		
		if (op=="1") alunos.executarCRUD ();
			
		if (op=="2") disciplinas.executarCRUD ();
		
		if (op=="3") notas.executarCRUD ();
		
		if (op=="4") notas.emitirBoletim();
	}
}
