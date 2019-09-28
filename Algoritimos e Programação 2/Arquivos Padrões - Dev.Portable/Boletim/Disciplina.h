// estrutura do registro das Disciplinas
struct regDisciplina
{
	string codigo;
	string nome;
	string carga;
	string professor;
};
// classe Disciplina
class Disciplina
{
public:	
	
	//Retorna o nome da Disciplina
	
	string obterNome(string cod)
	{
		string n;
		registro.codigo = cod;
		if ( this-> procurarCodigo())
		{
			n = tabelaDisciplinas[posicao].nome;
		}
		else
		{
			n = "Nao encontrado";
		}
		return n;
	}
	
	Disciplina ()
	{
		this-> lerArquivo();
	}
	
	//Gerencia a Lógica do CRUD
	void executarCRUD() 
	{
		Tela t;
		bool achou;
		string resp;
				
		this->montarTela();
		this->entrarCodigo();
		achou = this->procurarCodigo();
		
		if( not achou )
		{
			resp = t.perguntar("Codigo nao encontrado. Deseja cadastrar nova disciplina (S/N)",24);
			if (resp == "S")
			{
				this->entrarDados();   //Para entrar codigo
				resp = t.perguntar("Confirma cadastro (S/N) : ",24);
				if (resp == "S")
				{
					this->tabelaDisciplinas.push_back(this->registro);
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
					this->tabelaDisciplinas[this->posicao] = this->registro;
				}
			}
			if (resp == "E")
			{
				resp = t.perguntar("Confirma exclusao (S/N) : ",24);
				if (resp == "S")
				{
					this->tabelaDisciplinas.erase ( this->tabelaDisciplinas.begin() + this->posicao ); // Quando for para apagar use o begin pois deve iniciar uma busca pelo começo até a posição e dai pah... Apaga
				}
			}
		}
		
		this-> gravarArquivo();
	}	
private:
	
	regDisciplina registro; 
	vector <regDisciplina> tabelaDisciplinas;
	int posicao;
		
	void montarTela ()
	{
		Tela t;
		t.montarMoldura(15,7,59,14,0);
		textcolor (YELLOW);
		gotoxy(25,8); cout << "Cadastro das Disciplinas";
		textcolor (WHITE);
		gotoxy(16,10); cout << "Codigo    :";
		gotoxy(16,11); cout << "Nome      :";
		gotoxy(16,12); cout << "Carga Hor.:";
		gotoxy(16,13); cout << "Professor :";
		
	}
		
	void entrarCodigo () 
	{
		Tela t;
		t.centralizar("Informe o codigo",24);
		gotoxy(28,10);
		getline(cin, registro.codigo);
	}	
	
	bool procurarCodigo()
	{
		int x;
		bool achei = false;
		for(x=0; x<tabelaDisciplinas.size(); x++)
		{
			if (registro.codigo == tabelaDisciplinas[x].codigo)
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
		
		t.limparArea(28,11,58,13);
		
		t.centralizar("Informe o nome",24);
		gotoxy(28,11); getline(cin, registro.nome); 
		
		t.centralizar("Informe a carga horaria",24);
		gotoxy(28,12); getline(cin, registro.carga); // Pega as informações do teclado
		
		t.centralizar("Informe o professor",24);
		gotoxy(28,13); getline(cin, registro.professor); //Para cadastrar coisas usar getline (só aceita string)
	}
	
	void mostrarDados()
	{
		gotoxy(28,11); cout<< this->tabelaDisciplinas[this->posicao].nome;
		gotoxy(28,12); cout<< this->tabelaDisciplinas[this->posicao].carga;
		gotoxy(28,13); cout<< this->tabelaDisciplinas[this->posicao].professor;
	}	
	
	void lerArquivo()
	{
		ifstream arquivo; 
		arquivo.open("DisciplinaData.txt");
		tabelaDisciplinas.clear(); 
		
		while ( not arquivo.eof() ) //eof --> End of File
		{
			getline ( arquivo, registro.codigo, '|' ); 
			getline ( arquivo, registro.nome, '|' );
			getline ( arquivo, registro.carga, '|' );
			getline ( arquivo, registro.professor, '\n' ); 
			
			if ( registro.codigo != "" ) 
			{
				tabelaDisciplinas.push_back (registro);
			}
		}
		arquivo.close();
	}
		
	void gravarArquivo()
	{
		ofstream arquivo;
		arquivo.open("DisciplinaData.txt");
		for (int i=0; i<tabelaDisciplinas.size(); i++)
		{
			arquivo << tabelaDisciplinas[i].codigo << "|";
			arquivo << tabelaDisciplinas[i].nome << "|";
			arquivo << tabelaDisciplinas[i].carga << "|";
			arquivo << tabelaDisciplinas[i].professor << endl;
		}
	    arquivo.close();
	}
};
