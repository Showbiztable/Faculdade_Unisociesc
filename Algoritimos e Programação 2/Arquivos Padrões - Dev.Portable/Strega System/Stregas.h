struct fileluta
{
	string code;
	string altura;
	string peso;
	string idade;
	string faccao;
};
class Stregas
{
public:
	
	void analisarStrega ()
	{
		Tela t;
		bool achou;
		string resp;
		
		this -> montarTela ();
		this -> enterCode ();
		achou = this -> findCode ();
		{
			if(not achou)
			{
				resp = t.perguntar("Code not find. You want to register a new fighter ( Y|N ) ",24);
				getch();
				
				if(resp == "Y")
				{
					this -> enterFile ();
					resp = t.perguntar("Confirm register ( Y|N )",24);
					if (resp == "Y")
					{
						this -> tabelaDados.push_back(this -> dados);
					}
				}
			}
			
			else // achou
			{
				this -> showFile();
				resp = t.perguntar("You want Chance/Delete/Back ( C|D|B ) : ",24);
				
				if (resp == "C")
				{
					this->enterFile();
					resp = t.perguntar("Confirm chance ( Y|N ) : ",24);
					
					if (resp == "Y")
					{
						this->tabelaDados[this -> posicao] = this -> dados;
					}
				}
				
				if (resp == "D")
				{
					resp = t.perguntar("Confirm delete ( Y|N ) : ",24);
			    
					if (resp == "Y")
					{
						this -> tabelaDados.erase ( this -> tabelaDados.begin() + this -> posicao );
					}
				}
			}
		}		
	}
	
private:
	
	fileluta dados;	// dados = Registro
	
	vector <fileluta> tabelaDados; 
	int posicao;
	
	void montarTela ()
	{
		Tela t;
		t.montarMoldura(26,6,68,14,0);
		textcolor(RED);
		gotoxy(40,7); cout << "Stregas Files";
		gotoxy(27,9); cout << "Code   :";
		gotoxy(27,10); cout << "Altura :";
		gotoxy(27,11); cout << "Peso   :";
		gotoxy(27,12); cout << "Idade  :";
		gotoxy(27,13); cout << "Faccao :";
	}
	
	void enterCode()
	{
		Tela t;
		textcolor(RED);
		t.centralizar("Enter the Code",24);
		textcolor(GREEN);
		gotoxy(37,9);
		getline(cin, dados.code);
	}
	
	bool findCode()
	{
		int x;
		bool achei = false;
		
		for(x=0;x<tabelaDados.size();x++)
		{
			if(dados.code == tabelaDados[x].code)
			{
				achei = true;
				this -> posicao = x;
				break;
			}
		}
		return achei;
	}
	
	void enterFile()
	{
		Tela t;
		t.limparArea(37,10,67,13);
		
		t.centralizar("Enter the heigh",24);
		gotoxy(37,10); getline(cin, dados.altura);
		
		t.centralizar("Enter the weight",24);
		gotoxy(37,11); getline(cin, dados.peso);
		
		t.centralizar("Enter the age",24);
		gotoxy(37,12); getline(cin, dados.idade);
		
		t.centralizar("Enter the faction",24);
		gotoxy(37,13); getline(cin, dados.faccao);
		
	}
	
	void showFile()
	{
		gotoxy(37,10); cout<< this -> tabelaDados[this -> posicao].altura;
		gotoxy(37,11); cout<< this -> tabelaDados[this -> posicao].peso;
		gotoxy(37,12); cout<< this -> tabelaDados[this -> posicao].idade;
		gotoxy(37,13); cout<< this -> tabelaDados[this -> posicao].faccao;
	}	
};
