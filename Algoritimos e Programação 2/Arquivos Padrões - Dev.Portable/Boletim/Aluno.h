// estrutura do registro de Aluno
struct regAluno
{
	string matricula;
	string nome;
	string email;
	string telefone;
};
// classe Aluno
class Aluno
{
public:	
	
	string obterNome(string cod)
	{
		string n;
		registro.matricula = cod;
		if ( this-> procurarMatricula() )
		{
			n = tabelaAlunos[posicao].nome;
		}
		else
		{
			n = "Nao Encontrado";
		}
		return n;
	}	
	
	Aluno ()
	{
		this->lerArquivo();
	}
	
	//Gerencia a L�gica do CRUD
	void executarCRUD() 
	{
		Tela t;
		bool achou;
		string resp;
		
		 //Criando m�todo para ler arquivo de dado
		
		this->montarTela();
		this->entrarMatricula();
		achou = this->procurarMatricula();
		
		if( not achou )
		{
			resp = t.perguntar("Matricula nao encontrada. Deseja cadastrar novo aluno (S/N)",24);
			if (resp == "S")
			{
				this->entrarDados();   //Para entrar matr�cula
				resp = t.perguntar("Confirma cadastro (S/N) : ",24);
				if (resp == "S")
				{
					this->tabelaAlunos.push_back(this->registro);
				}
			}
		}
		else // If (achou)
		{
			//Se achou
			
			this->mostrarDados(); // Criando uma nova fun��o
			resp= t.perguntar("Deseja Alterar/Excluir/Voltar (A/E/V) : ",24);
			if (resp == "A")
			{
				this->entrarDados();
				resp = t.perguntar("Confirma alteracao (S/N) : ",24);
				if (resp == "S")
				{
					this->tabelaAlunos[this->posicao] = this->registro;
				}
			}
			if (resp == "E")
			{
				resp = t.perguntar("Confirma exclusao (S/N) : ",24);
				if (resp == "S")
				{
					this->tabelaAlunos.erase ( this->tabelaAlunos.begin() + this->posicao ); // Quando for para apagar use o begin pois deve iniciar uma busca pelo come�o at� a posi��o e dai pah... Apaga
				}
			}
		}
		
		this-> gravarArquivo();
	}	
private:
	
	regAluno registro; // Registro � criado a partir de regAluno
	vector <regAluno> tabelaAlunos;
	int posicao;
	
	//Montar a tela de cadastro do aluno
	void montarTela ()
	{
		Tela t;
		t.montarMoldura(15,7,59,14,0);
		textcolor (YELLOW);
		gotoxy(28,8); cout << "Cadastro de Aluno";
		textcolor (WHITE);
		gotoxy(16,10); cout << "Matricula :";
		gotoxy(16,11); cout << "Nome      :";
		gotoxy(16,12); cout << "Email     :";
		gotoxy(16,13); cout << "Telefone  :";
		
	}
	
	//Faz a entrada da matr�cula do aluno
	void entrarMatricula () // Acho que pode ser void, antes era bool, falar com o professor!!!
	{
		Tela t;
		t.centralizar("Informe a matricula",24);
		gotoxy(28,10);
		getline(cin, registro.matricula);
		//cin >> registro.matricula;
		//fflush(stdin) para limpar o buffer de mem�ria do teclado, s� para casos onde h� cin e getline
	
	}
	
	//Procura por uma matr�cula na tabelaAlunos
	bool procurarMatricula()
	{
		int x;
		bool achei = false;
		for(x=0; x<tabelaAlunos.size(); x++)
		{
			if (registro.matricula == tabelaAlunos[x].matricula)
			{
				achei = true;
				this-> posicao = x;
				break;
			}
		}
		
		return achei;
	}
	
	//faz a entrada de dados do registro;
	void entrarDados()
	{
		Tela t;
		
		t.limparArea(28,11,58,13);
		
		t.centralizar("Informe o nome",24);
		gotoxy(28,11); getline(cin, registro.nome); // coluna 28 linha 11 posionamento do cursor
		
		t.centralizar("Informe o email",24);
		gotoxy(28,12); getline(cin, registro.email); // Pega as informa��es do teclado
		
		t.centralizar("Informe o telefone",24);
		gotoxy(28,13); getline(cin, registro.telefone); //Para cadastrar coisas usar getline (s� aceita string)
	}
	
	//Mostra os dados da matricula encontrada
	void mostrarDados()
	{
		Tela t;
		
		t.limparArea(28,11,58,13);
		
		gotoxy(28,11); cout<< this->tabelaAlunos[this->posicao].nome;
		gotoxy(28,12); cout<< this->tabelaAlunos[this->posicao].email;
		gotoxy(28,13); cout<< this->tabelaAlunos[this->posicao].telefone;
	}	
	
	//L� os dados dos alunos de um arquivo texto
	void lerArquivo()
	{
		ifstream arquivo; // Criado vari�vel "arquivo", Para abrir o arquivo e ler os dados que est�o l�
		arquivo.open("AlunoData.txt");
		tabelaAlunos.clear(); //Para garantir que esteja tudo limpinho l�
		
		while ( not arquivo.eof() ) //eof --> End of File, enquanto n�o chegar ao fim do arquivo continua lendo, quando chegar para
		{
			getline ( arquivo, registro.matricula, '|' ); // Aspas simples s� para char, duas aspas para quando foi do tipo string
			getline ( arquivo, registro.nome, '|' );
			getline ( arquivo, registro.email, '|' );
			getline ( arquivo, registro.telefone, '\n' ); // L� tudo at� encontrar o enter por isso n�o � necess�rio botar o caracter especial
			
			if ( registro.matricula != "" ) // Vai puxar enquanto ele n�o l� o vazio 
			{
				tabelaAlunos.push_back (registro);
			}
		}
		arquivo.close();
	}
	
	// Grava os dados do vetor tabelaAluno no arquivo texto
	void gravarArquivo()
	{
		ofstream arquivo;
		arquivo.open("AlunoData.txt");
		for (int i=0; i<tabelaAlunos.size(); i++)
		{
			arquivo << tabelaAlunos[i].matricula << "|";
			arquivo << tabelaAlunos[i].nome << "|";
			arquivo << tabelaAlunos[i].email << "|";
			arquivo << tabelaAlunos[i].telefone << endl;
		}
	    arquivo.close();
	}
};
