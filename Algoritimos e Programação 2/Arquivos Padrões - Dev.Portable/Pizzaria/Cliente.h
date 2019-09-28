struct regCliente
{
	string telefone;
	string nome;
	string endereco;
};
class Cliente
{
public:
		
	void executarCRUD() 
	{
		Tela t;
		bool achou;
		string resp;
		
		this->lerArquivo();
		this->montarTela ();
		this->entrarTelefone();
		achou = this->procurarTelefone();
		
		if( not achou )
		{
			textcolor(GREEN);
			resp = t.perguntar("Telefone nao encontrado. Deseja cadastrar novo cliente (S/N)",24);
			if (resp == "S")
			{
				this->entrarDados();
				textcolor(GREEN);
				resp = t.perguntar("Confirma cadastro (S/N) : ",24);
				if (resp == "S")
				{
					this->tabelaClientes.push_back(this->registro);
				}
			}
		}
		else // If (achou)
		{
			//Se achou
			
			textcolor(GREEN);
			this->mostrarDados();
			resp= t.perguntar("Deseja Alterar/Excluir/Voltar (A/E/V) : ",24);
			if (resp == "A")
			{
				this->entrarDados();
				resp = t.perguntar("Confirma alteracao (S/N) : ",24);
				if (resp == "S")
				{
					this->tabelaClientes[this->posicao] = this->registro;
				}
			}
			if (resp == "E")
			{
				resp = t.perguntar("Confirma exclusao (S/N) : ",24);
				if (resp == "S")
				{
					this->tabelaClientes.erase ( this->tabelaClientes.begin() + this->posicao ); 
					
					//Deve haver um ponteiro aqui para apagar o pedido também;
				}
			}			
		}
		this -> gravarArquivo();
	}	
private:
	
	regCliente registro;
	vector <regCliente> tabelaClientes;
	int posicao;
	
	void montarTela ()
	{
		Tela t;
		t.montarMoldura(22,5,65,12,0);
		textcolor (GREEN);
		gotoxy(34,6); cout << "Cadastro do Cliente";
		textcolor (WHITE);
		gotoxy(23,8); cout << "Telefone  :";
		gotoxy(23,9); cout << "Nome      :";
		gotoxy(23,10); cout << "Endereco  :";
		
	}
	
	void entrarTelefone () 
	{
		Tela t;
		textcolor(GREEN);
		t.centralizar("Informe o telefone",24);
		textcolor(WHITE);
		gotoxy(35,8);
		getline(cin, registro.telefone);
		
		//cin >> registro.matricula;
		//fflush(stdin) para limpar o buffer de memória do teclado, só para casos onde há cin e getline
	
	}
	
	bool procurarTelefone() 
	{
		int x;
		bool achei = false;
		for(x=0; x<tabelaClientes.size(); x++)
		{
			if (registro.telefone == tabelaClientes[x].telefone)
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
						
		t.centralizar("Informe o nome",24);
		textcolor(WHITE);
		gotoxy(35,9); getline(cin, registro.nome); 
		
		textcolor(GREEN);
		t.centralizar("Informe o endereco",24);
		textcolor(WHITE);
		gotoxy(35,10); getline(cin, registro.endereco); 
		textcolor(GREEN);
	}
	
	void mostrarDados()
	{
		textcolor(WHITE);
		gotoxy(35,9); cout<< this->tabelaClientes[this->posicao].nome;
		gotoxy(35,10); cout<< this->tabelaClientes[this->posicao].endereco;
		textcolor(GREEN);
	}
	void lerArquivo()
	{
		ifstream arquivo;
		arquivo.open("ClienteData.txt");
		tabelaClientes.clear(); 
		
		while ( not arquivo.eof() ) //eof --> End of File
		{
			getline ( arquivo, registro.telefone, '|' ); 
			getline ( arquivo, registro.nome, '|' );
			getline ( arquivo, registro.endereco, '\n' );
			
			if ( registro.telefone != "" ) 
			{
				tabelaClientes.push_back (registro);
			}
		}
		arquivo.close();
	}

	void gravarArquivo()
	{
		ofstream arquivo;
		arquivo.open("ClienteData.txt");
		for (int i=0; i<tabelaClientes.size(); i++)
		{
			arquivo << tabelaClientes[i].telefone << "|";
			arquivo << tabelaClientes[i].nome << "|";
			arquivo << tabelaClientes[i].endereco << endl;
		}
	    arquivo.close();
	}
};
