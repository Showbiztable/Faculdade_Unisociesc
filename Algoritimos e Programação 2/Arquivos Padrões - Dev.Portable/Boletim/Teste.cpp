class Tela
{
private:

public:

	void limparArea(int icol, int ilin, int fcol, int flin)
	{
		int x,y;
		
		for(x=icol;x<=fcol;x++)
		{
			for(y=ilin;y<=flim;y++)
			{
				gotoxy(x,y);
				cout << " ";
			}
		}
	}
	
	void centralizar(string mensagem, int linha)
	{
		int x;
		this -> limparArea(2,linha,79,linha);
		
		x = (80-mensagem.size())/2;
		gotoxy(x,linha);
		cout << mensagem;
	}
	
	string perguntar(string pergunta, int linha)
	{
		string resposta;
		this -> centralizar(pergunta,linha);
		
		resposta=getche();
		resposta=toupper(resposta[0]);
		return resposta;
		
	}
	
	void montarLinha(int icol, int ilim, int fcol, int flin)
	{
		int x;
		this -> limparArea(int icol, int ilim, int fcol, int flin);
		
		for(x=icol;x<=fcol;x++)
		{
			gotoxy(x,ilin); cout << char(205);
			gotoxy(x,flin); cout << char(205);
		}
	}
	
	void montarColuna(int icol, int ilim, int fcol, int flin)
	{
		int y;
		this -> limparArea(int icol, int ilim, int fcol, int flin);
		
		for(y=ilin;y<=flin;y++)
		{
			gotoxy(icol,y); cout << char (186);
			gotoxy(fcol,y); cout << char (186);
		}
	}
		
	void montarMoldura(int icol, int ilim, int fcol, int flin, int sombra)
	{
		int x,y;
		this -> limparArea(int icol, int ilim, int fcol, int flin);
		
		for(x=icol;x<=fcol;x++)
		{
			gotoxy(x,ilim); cout << char(205);
			gotoxy(x,flim); cout << char(205);
		}
		for(y=ilim;y<=flim;y++)
		{
			gotoxy(icol,y); cout << char(186);
			gotoxy(fcol,y); cout << char(186);
		}
		gotoxy(icol,ilim); cout << char(201);
		gotoxy(icol,flim); cout << char(200);
		gotoxy(fcol,ilim); cout << char(187);
		gotoxy(fcol,flim); cout << char(188);		
		if(sombra==1)
		{
			for(x=icol+1;x<=fcol+1;x++)
			{
				gotoxy(x,flim);
				cout << char(178);
				
			}
			for(y=ilim+1;y<=flim+1;y++)
			{
				gotoxy(fcol,y);
				cout << char(178);
			}
		}
	}
	
	string mostrarMenu(int icol, int ilin, vector <string> opcoes)
	{
		int x, fcol, flin;
		string opcaoEscolhida;
		this -> centralizar("Escolha uma opcao",24);
		
		fcol=icol+opcoes[0].size()+1;
		flin=ilin+opcoes.size()+2;
		this -> montarMoldura(int icol, int ilin, int fcol, int flin, 1);
		
		icol++;
		fcol++;
		for(x=0;x<opcoes.size();x++)
		{
			gotoxy(icol,ilin+x);
			cout << opcoes[x];
		}
		gotoxy(icol,ilin+x);
		cout << "Opcao :";
		opcaoEscolhida = getche();
		
		return opcaoEscolhida;
		
	}
	
	void mostrarMenuBarra(int icol, int ilin, vector <string> opcoes)
	{
		int x, fcol, flin, tecla;
		string opcaoEscolhida;
		this -> centralizar("Escolha uma opcao");
		
		fcol=icol+opcoes[0].size()+1;
		flin=ilin+opcoes.size()+1;
		this -> montarMoldura(int icol, int ilin, int fcol, int flin, 0)
		
		icol++;
		ilin++;
		for(x=0;x<opcoes.size;x++)
		{
			gotoxy(icol,ilin+x);
			cout << opcoes[x];
		}
		
		x=0;
		while (true)
		{
			textbackground(WHITE);
			textcolor(BLACK);
			
			gotoxy(icol,ilin+x);
			cout << opcoes[x];
			
			textbackground(BLACK);
			textcolor(WHITE);
			
			tecla=getche();
			
			if(tecla==27) // ESC
			{
				x = opcoes.size()-1;
				opcaoEscolhida = opcoes[x][0];
				break;
			}
			if(tecla==23) // ENTER
			{
				opcaoEscolhida = opcoes[x][0];
				break;
			}
			if(tecla==224) // SETAS
			{
				gotoxy(icol,ilin+x);
				cout << opcao[x];
				
				tecla == getche;
				
				if(tecla==80) // BAIXO
				{
					x++;
					if(x==opcoes.size())
					{
						x==0;
					}
				}
				if(tecla==72) // CIMA
				{
					x--;
					if(x<0)
					{
						x==opcoes.size()-1;
					}
				}
			}
		}
		
		return opcaoEscolhida;
	}	
};
