struct regFood
{
	string codigo;
	string nome;
	string preco;
};
class Produto
{
public:  	// Fazer um método para verificar se há um pedido registrado ao produto 
		
	void executarCRUD()
	{
		Tela t;
		bool achou;
		string resp;
		
		this->lerArquivo();
		this -> montarTela();
		this -> entrarCodigo();
		achou = this -> procurarCodigo();
		{
			if (not achou)
			{
				textcolor(YELLOW);
				resp = t.perguntar("Codigo nao encontrado. Deseja cadastrar novo codigo (S|N)",24);
				if (resp=="S")
				{
					this -> entrarDados();
					resp = t.perguntar("Confirma cadastro (S|N)",24);
					if(resp=="S")
					{
						tabelaFood.push_back(registro);
					}					
				}				
			}
			else // Se achou
			{
				this -> mostrarDados();
				textcolor(YELLOW);
				resp = t.perguntar("Deseja Excluir|Alterar|Voltar (E|A|V)",24);
				if (resp=="E")
				{
					// Função para verificar se há um pedido sobre o produto
					
					resp = t.perguntar ("Confirma exclusao (S|N)",24);
					if(resp=="S")
					{
						tabelaFood.erase (tabelaFood.begin() + posicao);
					}
				}
				if (resp=="A")
				{
					this -> entrarDados();
					resp = t.perguntar("Confirma alteracao (S|N)",24);
					if(resp=="S")
					{
						tabelaFood[posicao] = registro;
					}
				}
				
			}
		}
		this -> gravarArquivo();
	}
	
private:
	
	regFood registro;
	vector <regFood> tabelaFood;
	int posicao;
	
	void montarTela ()
	{
		Tela t;
		t.montarMoldura(22,5,65,12,0);
		textcolor (YELLOW);
		gotoxy(34,6); cout << "Cadastro do Produto";
		textcolor (WHITE);
		gotoxy(23,8); cout << "Codigo  :";
		gotoxy(23,9); cout << "Nome    :";
		gotoxy(23,10); cout << "Preco   :";
		
	}
	
	void entrarCodigo () 
	{
		Tela t;
		textcolor(YELLOW);
		t.centralizar("Informe o codigo",24);
		textcolor(WHITE);
		gotoxy(35,8);
		getline(cin, registro.codigo);
		
		//cin >> registro.matricula;
		//fflush(stdin) para limpar o buffer de memória do teclado, só para casos onde há cin e getline
	
	}
	
	bool procurarCodigo() 
	{
		int x;
		bool achei = false;
		for(x=0; x<tabelaFood.size(); x++)
		{
			if (registro.codigo == tabelaFood[x].codigo)
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
		
		t.limparArea(35,9,64,11);
						
		textcolor(YELLOW);
		t.centralizar("Informe o nome",24);
		textcolor(WHITE);
		gotoxy(35,9); getline(cin, registro.nome); 
		
		textcolor(YELLOW);
		t.centralizar("Informe o preco",24);
		textcolor(WHITE);
		gotoxy(35,10); getline(cin, registro.preco);
	}
	
	void mostrarDados()
	{
		textcolor(WHITE);
		gotoxy(35,9); cout<< this->tabelaFood[this->posicao].nome;
		gotoxy(35,10); cout<< this->tabelaFood[this->posicao].preco;
	}
	
	void lerArquivo ()
	{
		ifstream texto;
		
		texto.open("MenuSabores.txt");
		tabelaFood.clear();
				
		while ( not texto.eof())
		{
			getline ( texto, registro.codigo, '|');
			getline ( texto, registro.nome, '|');
			getline ( texto, registro.preco, '\n');
			
			if(registro.codigo != "")
			{
				tabelaFood.push_back(registro);
			}
		}
		texto.close();		
	}
	
	void gravarArquivo ()
	{
		ofstream texto;
		texto.open("MenuSabores.txt");
		for (int i=0; i<tabelaFood.size(); i++)
		{
			texto << tabelaFood[i].codigo << "|";
			texto << tabelaFood[i].nome << "|";
			texto << tabelaFood[i].preco << endl;
		}
	    texto.close();
	}	
	
};
