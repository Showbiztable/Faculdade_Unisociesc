/*
Lucas Trevizan ; Doglas Cattoni
4.	Fa�a um Programa que tendo como dados de entrada o pre�o de custo de um produto e um c�digo de origem,
emita o pre�o junto de sua proced�ncia. Caso o c�digo n�o seja nenhum dos especificados, o produto deve ser classificado como importado.
C�digo de origem: 1 - Sul, 2 - Norte 3 - Leste, 4 - Oeste, 5 - nordeste 6 - Centro-oeste. 
*/
#include<iostream>
#include<locale.h>
#include<stdio.h>
#include<math.h>
using namespace std;
main()
{
	  float preco;
	  int codigo; 
      setlocale(LC_ALL,"Portuguese");
      cout<<"Informe o pre�o do produto\n";
      cin>>preco;//entrada de dados
      cout<<"Informe o codigo de origem:\n";
      cout<<"1 - Sul\n2 - Norte\n3 - Leste\n4 - Oeste\n5 - Nordeste\n6 - Centro-Oeste\n";
      cin>>codigo;
      switch(codigo)
      {
      		case 1:
      			cout<<"A origem � Sul\nSeu pre�o � "<<preco<<" R$\n";
      			break;
      		case 2:
			    cout<<"A origem � Norte\nSeu pre�o � "<<preco<<" R$\n";
			    break;
			case 3: 
				cout<<"A origem � Leste\nSeu pre�o � "<<preco<<" R$\n";
				break;
			case 4:
				cout<<"A origem � Oeste\nSeu pre�o � "<<preco<<" R$\n";
				break;
			case 5:
				cout<<"A origem � Nordeste\nSeu pre�o � "<<preco<<" R$\n";
				break;
		    case 6:
				cout<<"A origem � Centro-Oeste\nSeu pre�o � "<<preco<<" R$\n";
				break;
			default:
				cout<<"Produto Importado\nSeu pre�o � "<<preco<<" R$\n";			 	
	  }
      system("Pause>>null");
}



