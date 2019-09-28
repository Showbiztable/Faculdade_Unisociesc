// estrutura do registro de Nota
struct regNota
{
	string codAluno;
	string codDisciplina;
	string sequencia;
	string nota;
};
// classe Nota
class Nota
{
public:	
	
	void definirPonteiros(Aluno *pa, Disciplina *pd)
	{
		pontAlunos = pa;
		pontDisciplinas = pd;
	}
	
	void emitirBoletim()
	{
		vector <string> cfg;
		
		this -> montarTela(2);
		cfg = this -> entrarTipo();
		
		if(cfg[0] == "A")
		{
			//Mostra o boletim do aluno
			
			this -> montarTela(3);
			this -> mostrarBoletimAluno(cfg[1]);
		}
		if(cfg[0] == "D")
		{
			//Mostra o boletim da disciplina
			
			this -> montarTela(4);
			this -> mostrarBoletimDisciplina(cfg[1]);
		}
	}

	Nota ()
	{
		this->lerArquivo();
	}

	//Gerencia a Lógica do CRUD
	void executarCRUD() 
	{
		Tela t;
		bool achou;
		string resp;
						
		this->montarTela();
		this->entrarCodigos();
		achou = this->procurarCodigos();
		
		if( not achou )
		{
			resp = t.perguntar("Nota nao encontrado. Deseja cadastrar nova nota (S/N)",24);
			if (resp == "S")
			{
				this->entrarDados();  
				resp = t.perguntar("Confirma cadastro (S/N) : ",24);
				if (resp == "S")
				{
					this->tabelaNotas.push_back(this->registro);
				}
			}
		}
		else // If (achou)
		{
			//Se achou
			
			this->mostrarDados(); 
			resp= t.perguntar("Deseja Alterar/Excluir/Voltar (A/E/V) : ",24);
			if (resp == "A")
			{
				this->entrarDados();
				resp = t.perguntar("Confirma alteracao (S/N) : ",24);
				if (resp == "S")
				{
					this->tabelaNotas[this->posicao] = this->registro;
				}
			}
			if (resp == "E")
			{
				resp = t.perguntar("Confirma exclusao (S/N) : ",24);
				if (resp == "S")
				{
					this->tabelaNotas.erase ( this->tabelaNotas.begin() + this->posicao ); 
				}
			}
		}
		
		this-> gravarArquivo();
	}	
private:
	
	regNota registro; 
	vector <regNota> tabelaNotas;
	int posicao;
	Aluno *pontAlunos;
	Disciplina *pontDisciplinas;
	
		
	void montarTela (int qual=1)
	{
		Tela t;
		if(qual == 1)
		{
			t.montarMoldura(15,7,59,14,0);
			textcolor (YELLOW);
			gotoxy(28,8); cout << "Cadastro de Notas";
			textcolor (WHITE);
			gotoxy(16,10); cout << "Aluno      :";
			gotoxy(16,11); cout << "Disciplina :";
			gotoxy(16,12); cout << "Sequencia  :";
			gotoxy(16,13); cout << "Nota       :"; 
		}
		else if (qual == 2)
		{
			t.montarMoldura(23,4,67,12,0);
			textcolor (YELLOW);
			gotoxy(36,6); cout << "Emissao de Boletim";	
			textcolor (WHITE);
			gotoxy(24,8); cout << "Aluno/Disciplina ( A/D ) :";				
		}
		else if(qual==3)
		{
			// Boletim do Aluno
			t.montarMoldura(23,4,68,22,0);
			t.montarLinha(24,8,67,8);
			t.montarLinha(24,10,67,10);
			t.montarLinha(24,12,67,12);
			t.montarColuna(35,11,35,11);
			t.montarColuna(40,11,40,11);
			t.montarColuna(45,11,45,11);
			t.montarColuna(50,11,50,11);
			t.montarColuna(58,11,58,11);
			t.montarColuna(35,13,35,21);
			t.montarColuna(40,13,40,21);
			t.montarColuna(45,13,45,21);
			t.montarColuna(50,13,50,21);
			t.montarColuna(58,13,58,21);
			textcolor (YELLOW);
			gotoxy(38,6); cout << "Boletim do Aluno";
			textcolor (WHITE);
			gotoxy(24,9); cout << "Aluno:";
			gotoxy(24,11); cout << "Disciplina";
			gotoxy(37,11); cout << "N1 ";
			gotoxy(42,11); cout << "N2 ";
			gotoxy(47,11); cout << "N3";
			gotoxy(52,11); cout << "Final";
			gotoxy(60,11); cout << "Condicao";
			
		}
		else if(qual==4)
		{
			// Boletim da Disciplina
			t.montarMoldura(23,4,68,22,0);
			t.montarLinha(24,8,67,8);
			t.montarLinha(24,10,67,10);
			t.montarLinha(24,12,67,12);
			t.montarColuna(32,11,32,11);
			t.montarColuna(38,11,38,11);
			t.montarColuna(44,11,44,11);
			t.montarColuna(50,11,50,11);
			t.montarColuna(56,11,56,11);
			t.montarColuna(32,13,32,21);
			t.montarColuna(38,13,38,21);
			t.montarColuna(44,13,44,21);
			t.montarColuna(50,13,50,21);
			t.montarColuna(56,13,56,21);
			textcolor (YELLOW);
			gotoxy(35,6); cout << "Boletim da Disciplina";
			textcolor (WHITE);
			gotoxy(24,9); cout << "Disciplina:";
			gotoxy(26,11); cout << "Aluno";
			gotoxy(35,11); cout << "N1";
			gotoxy(41,11); cout << "N2";
			gotoxy(47,11); cout << "N3";
			gotoxy(53,11); cout << "MD";
			gotoxy(59,11); cout << "Condicao";
		}
	}
		
	void mostrarBoletimAluno(string codigo)
	{		
		gotoxy(32,9); cout << pontAlunos -> obterNome(codigo);
		gotoxy(24,13); cout << pontDisciplinas -> obterNome(codigo);
		
//		gotoxy(37,13); cout << this-> primeiraNota();

		getche();		
	}
	
	void mostrarBoletimDisciplina(string codigo)
	{		
		gotoxy(37,9); cout << pontDisciplinas->obterNome(codigo);
		getche();
	}	
	
	vector<string> entrarTipo()
	{
		vector<string> config(2);
		gotoxy(51,8); getline(cin, config[0]);
		config[0] = toupper (config[0][0]);
		if(config[0] == "A")
		{
			gotoxy(24,9); cout << "Codigo do Aluno        :";
		}
		if(config[0] == "D")
		{
			gotoxy(24,9); cout << "Codigo da Disciplina   :";
		}
		
		gotoxy(49,9); getline(cin,config[1]); // Esse 1 é a posição
				
		return config;		
	}
	
	void entrarCodigos () 
	{
		Tela t;
		t.centralizar("Informe o codigo do aluno",24);
		gotoxy(29,10); getline(cin, registro.codAluno);
		gotoxy(39,10); cout << pontAlunos->obterNome(registro.codAluno);
			
		t.centralizar("Informe o codigo da disciplina",24);
		gotoxy(29,11); getline(cin, registro.codDisciplina);
		gotoxy(39,11); cout << pontDisciplinas->obterNome(registro.codDisciplina);
		
		t.centralizar("Informe a sequencia",24);
		gotoxy(29,12); getline(cin, registro.sequencia);
			
	}
	
	bool procurarCodigos ()
	{
		int x;
		bool achei = false;
		for(x=0; x<tabelaNotas.size(); x++)
		{
			if (registro.codAluno == tabelaNotas[x].codAluno && registro.codDisciplina == tabelaNotas[x].codDisciplina && registro.sequencia == tabelaNotas[x].sequencia)
			{
				achei = true;
				this-> posicao = x;
				break;
			}
		}
		
		return achei;
	}	
	
	void entrarDados()
	{
		Tela t;
		
		t.limparArea(28,13,58,13);
		
		t.centralizar("Informe a nota",24);
		gotoxy(29,13); getline(cin, registro.nota); 
	}
	
	void mostrarDados()
	{
		gotoxy(29,13); cout<< this->tabelaNotas[this->posicao].nota;
	}	

//	string primeiraNota()
//	{
//		string n;
//		
//		while(tabelaNotas[this->posicao].sequencia==1) 
//		{
//			if(this-> procurarCodigos())
//			{
//				n = tabelaNotas[this->posicao].nota;
//				break;
//			}
//			else
//			{
//				n = " ";
//				break;
//			}		
//		}
//		return n;
//	}
	
	void lerArquivo()
	{
		ifstream arquivo; 
		arquivo.open("NotaData.txt");
		tabelaNotas.clear(); //Para garantir que esteja tudo limpo
		
		while ( not arquivo.eof() ) //eof --> End of File
		{
			getline ( arquivo, registro.codAluno, '|' ); // ' ' -> char ; " " -> string
			getline ( arquivo, registro.codDisciplina, '|' );
			getline ( arquivo, registro.sequencia, '|' );
			getline ( arquivo, registro.nota, '\n' ); // Desnecessauro o caracter especial
			
			if ( registro.codAluno != "" )
			{
				tabelaNotas.push_back (registro);
			}
		}
		arquivo.close();
	}
	
	void gravarArquivo()
	{
		ofstream arquivo;
		arquivo.open("NotaData.txt");
		for (int i=0; i<tabelaNotas.size(); i++)
		{
			arquivo << tabelaNotas[i].codAluno << "|";
			arquivo << tabelaNotas[i].codDisciplina << "|";
			arquivo << tabelaNotas[i].sequencia << "|";
			arquivo << tabelaNotas[i].nota << endl;
		}
	    arquivo.close();
	}
};
