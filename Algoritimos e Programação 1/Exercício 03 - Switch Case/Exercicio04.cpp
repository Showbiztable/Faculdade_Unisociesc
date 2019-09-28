/*
Lucas Trevizan ; Doglas Cattoni
4.	Faça um Programa que tendo como dados de entrada o preço de custo de um produto e um código de origem,
emita o preço junto de sua procedência. Caso o código não seja nenhum dos especificados, o produto deve ser classificado como importado.
Código de origem: 1 - Sul, 2 - Norte 3 - Leste, 4 - Oeste, 5 - nordeste 6 - Centro-oeste. 
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
      cout<<"Informe o preço do produto\n";
      cin>>preco;//entrada de dados
      cout<<"Informe o codigo de origem:\n";
      cout<<"1 - Sul\n2 - Norte\n3 - Leste\n4 - Oeste\n5 - Nordeste\n6 - Centro-Oeste\n";
      cin>>codigo;
      switch(codigo)
      {
      		case 1:
      			cout<<"A origem é Sul\nSeu preço é "<<preco<<" R$\n";
      			break;
      		case 2:
			    cout<<"A origem é Norte\nSeu preço é "<<preco<<" R$\n";
			    break;
			case 3: 
				cout<<"A origem é Leste\nSeu preço é "<<preco<<" R$\n";
				break;
			case 4:
				cout<<"A origem é Oeste\nSeu preço é "<<preco<<" R$\n";
				break;
			case 5:
				cout<<"A origem é Nordeste\nSeu preço é "<<preco<<" R$\n";
				break;
		    case 6:
				cout<<"A origem é Centro-Oeste\nSeu preço é "<<preco<<" R$\n";
				break;
			default:
				cout<<"Produto Importado\nSeu preço é "<<preco<<" R$\n";			 	
	  }
      system("Pause>>null");
}



