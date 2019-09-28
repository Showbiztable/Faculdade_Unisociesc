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
	// Criando void para fazer as linhas
	void montarLinha(int colini, int linini, int colfim, int linfim)
	{
		int x,y;
		this -> limparArea(colini, linini, colfim, linfim);
		
		//gotoxy(colini,linini); cout << char (204);
		//gotoxy(colfim,linfim); cout << char (185);
		
		for(x=colini;x<=colfim;x++)
		{
			gotoxy(x,linini); cout << char (205);
			gotoxy(x,linfim); cout << char (205);
		}
	}
	
	void montarColuna(int colini, int linini, int colfim, int linfim)
	{
		int x,y;
		
		for(y=linini;y<=linfim;y++)
		{
			gotoxy(colini,y); cout << char (186);
			gotoxy(colfim,y); cout << char (186);
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
		this->centralizar("Escolha uma opcao",24);

		colfim = colini+opcoes[0].size()+1;
		linfim = linini+opcoes.size()+2;
		this->montarMoldura(colini, linini, colfim, linfim, 1);
		
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
	
		string mostrarMenuBarras(int colini, int linini, vector<string> opcoes) // Método para o opção ficar selecionada
	{
		int x, colfim, linfim, tecla;
		string opcaoEscolhida;
		this->centralizar("Escolha uma opcao",24);

		colfim = colini+opcoes[0].size()+1; // Primeira opcao do seu vetor e seu tamanho
		linfim = linini+opcoes.size()+1;
		this->montarMoldura(colini, linini, colfim, linfim, 1);
		
		colini++;
		linini++;
		for (x=0; x<opcoes.size(); x++)
		{
			gotoxy(colini, linini+x);
			cout << opcoes[x];
		}
		
		x = 0;
		while (true)
		{
			//Inverte as cores
			
			textcolor(BLACK);
			textbackground(WHITE);
			
			//Imprime o item selecionado
			
			gotoxy(colini,linini+x); cout << opcoes[x];
			
			//Volta as cores ao nomal
			
			textcolor(WHITE);
			textbackground(BLACK);
			
			//Verifica uma tecla ser acionada
			
			tecla = getch();
			
			//Verfica qual tecla foi acionada
			
			//Se foi ESC
			
			if (tecla == 27)
			{
				x = opcoes.size()-1;
				opcaoEscolhida = opcoes[x][0]; // 0 --> primeiro caracter, x --> opção escolhida
				break;
		    }
			//Se foi ENTER
			
			if(tecla == 13)
			{
				opcaoEscolhida = opcoes[x][0];
				break;
			}
			
			//Se foi uma das setas
			
			if(tecla == 224)
			{
				gotoxy(colini,linini+x); cout << opcoes[x];
				
				tecla = getch();
				
				//seta para baixo 224 80
				
				if(tecla == 80)
				{
					x++;
					if(x == opcoes.size()) x = 0;
				}
				
				//seta para cima 224 72 
				
				if(tecla == 72)
				{
					x--;
					if( x < 0) x = opcoes.size()-1;
				}
			}
		}
						
		return opcaoEscolhida;
	}
	
private:
};

