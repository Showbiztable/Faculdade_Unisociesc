class Tela
{
public:
	string perguntar(string pergunta, int linha)
	{
		string resposta;
		this->centralizar(pergunta, linha);
		resposta = getche ();
		resposta = toupper(resposta[0]);//Cai na prova; string não combina com toupper
		return resposta;
	}	
	
	void centralizar (string mensagem, int linha)
	{
		int coluna;
		this->limparArea(2,linha,79,linha);
		coluna = (80-mensagem.size())/2;
		gotoxy(coluna,linha); cout << mensagem;
	}
	
	void limparArea (int colini, int linini, int colfim, int linfim)
	{
		int coluna, linha;
		for(coluna=colini; coluna<=colfim; coluna++)
		{
			for(linha=linini; linha<=linfim; linha++)
			{
				gotoxy (coluna, linha);
				cout<<" ";
			}
		}
	}		
	
	void montarMoldura(int colini, int linini, int colfim, int linfim, int sombra)
	{
		int x, y;
		
		this->limparArea(colini, linini, colfim, linfim);
		
		for (x=colini; x<=colfim; x++)
		{
			gotoxy(x, linini); cout << char(205);
			gotoxy(x, linfim); cout << char(205);
		}
		
		for (y=linini; y<=linfim; y++)
		{
			gotoxy(colini, y); cout << char(186);
			gotoxy(colfim, y); cout << char(186);
		}
		
		gotoxy(colini, linini); cout << char(201);
		gotoxy(colini, linfim); cout << char(200);
		gotoxy(colfim, linini); cout << char(187);
		gotoxy(colfim, linfim); cout << char(188);
		
		
		// sombra
		if (sombra==1)
		{
			for(x=colini+1; x<=colfim+1; x++)
			{
				gotoxy(x, linfim+1); cout << char(178);
			}
			for (y=linini+1; y<=linfim+1; y++)
			{
				gotoxy(colfim+1, y); cout << char(178);
			}
		}
	}	
	
	
	string mostrarMenu(int colini, int linini, vector<string> opcoes)
	{
		int x, colfim, linfim;
		string opcaoEscolhida;
		this->centralizar("Loading Data",24);

		colfim = colini+opcoes[0].size()+1;
		linfim = linini+opcoes.size()+2;
		this->montarMoldura(colini, linini, colfim, linfim, 0);
		
		colini++;
		linini++;
		for (x=0; x<opcoes.size(); x++)
		{
			gotoxy(colini, linini+x);
			cout << opcoes[x];
		}
		gotoxy(colini, linini+x);
		cout << "Opcao : ";
		opcaoEscolhida = getche(); 
		
		return opcaoEscolhida;
	}
	
private:
};

