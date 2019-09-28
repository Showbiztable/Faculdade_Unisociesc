struct regAluno
{
	string matricula
	string nome;
	string email;
	string telefone;
};
class Aluno
{
	
public:
	
	string obterNome(string cod)
	{
		string n;
		registro.matricula=cod;
		if(this -> procurarMatricula())
		{
			n = tabelaAlunos[posicao].nome
		}
		else
		{
			n = "Nao encontrada";
		}
		
		return n; 
	}
	
	Aluno()
	{
		this -> lerArquivo();
	}
	
	void executarCRUD()
	{
		Tela t;
		bool achei;
		string resp;
		
		this -> montarTela();
		this -> entrarMatricula();
		achou = this -> procurarMatricula();
		
		if (not achou)
		{
			t.perguntar("Matricula nao encontrada. Deseja novo aluno (S|N)",24);
			getch();
			if(resp=="S")
			{
				this -> entrarDados();
				t.perguntar("Confirma cadastro (S|N)",24);
				if(resp=="S")
				{
					this -> tabelaAlunos.push_back(this -> registro);
				}		
			}
		}
		else // Achou
		{
			this -> mostrarDados();
			t.perguntar("Deseja Alterar|Excluir|Voltar (A|E|V)",24);
			if(resp=="A")
			{
				this -> entrarDados();
				t.perguntar("Confirma alteracao (S|N)",24);
				if(resp=="S")
				{
					this -> tabelaAlunos[posicao] = this -> registro;
				}
			}
			if(resp=="E")
			{
				t.perguntar("Confirma alteracao (S|N)",24);
				if(resp=="S")
				{
					tabelaAlunos.erase(this -> tabelaAlunos.begin() + this -> posicao);
				}
			}
		}
		
		this -> gravarArquivo();		
	}

private:	

	regAluno registro;
	vector <regAluno> tabelaAlunos;
	int posicao;
	
	void montarTela()
	{
		Tela t;
		montarMoldura(15,7,59,14,0);
		textcolor(GREEN);
		gotoxy(28,8); cout << "Cadastro de Alunos";
		textcolor(WHITE)
		gotoxy(16,10); cout << "Matricula :";
	    gotoxy(16,11); cout << "Nome	  :";
		gotoxy(16,12); cout << "Email	  :";
		gotoxy(16,13); cout << "Telefone  :";
	}
	
	void entrarMatricula();
	{
		Tela t;
		t.centralizar("Informe a Matricula",24);
		gotoxy(28,10); 
		getline (cin, registro.matricula);
	}
	
	bool procurarMatricula();
	{
		int x;
		bool achei = false;
		
		for(x=0;x<tabelaAlunos.size();x++)
		{
			if(tabelaAlunos[x].matricula == registro.matricula)
			{
				achei = true;
				x = posicao;
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
		
		t.centralizar("Informe o email",24);
		gotoxy(28,12); getline(cin, registro.email);
		
		t.centralizar("Informe o telefone",24);
		gotoxy(28,13); getline(cin, registro.telefone);
	}

	void mostrarDados()
	{
		gotoxy(28,11); cout << this -> tabelaAlunos[this -> posicao].nome;
		gotoxy(28,12); cout << this -> tabelaAlunos[this -> posicao].email;
		gotoxy(28,13); cout << this -> tabelaAlunos[this -> posicao].telefone;
	}

	void gravarArquivo()
	{
		int i;
		ofstream arquivo;		
		arquivo.open("AlunoData.txt");
		
		for(i=0;i<tabelaAlunos.size();i++)
		{
			arquivo << tabelaAlunos[i].matricula << "|";
			arquivo << tabelaAlunos[i].nome << "|";
			arquivo << tabelaAlunos[i].email << "|";
			arquivo << tabelaAlunos[i].telefone << endl;
		}
		
		arquivo.close();
	}

	void lerArquivo()
	{
		ifstream arquivo;
		arquivo.open("AlunoData.txt");
		tabelaAlunos.clear();
		
		while( not arquivo.eof())
		{
			getline(arquivo, registro.matricula, '|');
			getline(arquivo, registro.nome, '|');
			getline(arquivo, registro.email, '|');
			getline(arquivo, registro.telefone, '\n');
			
			if(registro.matricula != "")
			{
				tabelaAlunos.push_back(this -> registro);
			}
		}
		arquivo.close();
	}
};
