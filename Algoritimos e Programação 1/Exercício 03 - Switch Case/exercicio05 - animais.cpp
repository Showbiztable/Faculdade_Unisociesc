/*
Lucas Trevizan ; Doglas Cattoni
5.	Construa um algoritmo que seja capaz de concluir qual dentre os seguintes animais foi escolhido, atrav�s de perguntas e respostas.
Animais poss�veis: le�o, cavalo, homem, macaco, morcego, baleia, avestruz, pinguim, pato, �guia, tartaruga, crocodilo e cobra.
Utilize a seguinte classifica��o:
*/
#include<iostream>
#include<locale.h>
#include<stdio.h>
#include<math.h>
using namespace std;
main()
{
	  char opcao;
      setlocale(LC_ALL,"Portuguese");
      cout<<"Digite:\nM - Mamifero\nA - Aves\nR - R�pteis\n";
      cin>>opcao;//entrada de dados
      opcao=toupper(opcao);
      switch(opcao){
      				case 'M':
      					cout<<"Digite:\nQ - Quadr�pedes\nB - B�pedes\nV - Voadores\nA - Aqu�ticos\n";
      					cin>>opcao;
      					opcao=toupper(opcao);
      					switch(opcao){
									  case 'Q':
      							      cout<<"Digite:\nC - Carn�voro\nH - Herb�voro\n";
      								  cin>>opcao;
      								  opcao=toupper(opcao);
      								  switch(opcao){
      								  				case 'C':
														cout<<"Le�o\n";
														break;
													case 'H':
														cout<<"Cavalo\n";
														break;
													default:
															cout<<"Op��o Inv�lida\n";
										}
      									break;
									case 'B':
										cout<<"Digite: \nO - On�voros\nF - Frutivoros\n";
										cin>>opcao;
										opcao=toupper(opcao);
										switch(opcao){
													  case 'O':
													  	cout<<"Homem\n";
													  	break;
													  case 'F':
													  	cout<<"Macaco\n";
													  	break;
													  default:
													  		cout<<"Op��o Inv�lida\n";
										}
										
									 	break;
									case 'V':
										cout<<"Morcego\n";
										break;
									case 'A':
										cout<<"Baleia\n";
										break;
									default:
											cout<<"Op��o Inv�lida\n";
						  }
						  break;
      				case 'A':
      						cout<<"Digite:\nV - N�o voadores\nN - Nadadores\nR - Rapina\n";
      						cin>>opcao;
      						opcao=toupper(opcao);
      						switch(opcao){
      									   case 'V':
      											cout<<"Digite:\nT - Tropicais\nP - Polares\n";
      											cin>>opcao;
      											opcao=toupper(opcao);
      											switch(opcao){
      													case 'T':
      															cout<<"Avestruz\n";
      															break;
      													case 'P':
      															cout<<"Pinguim\n";
      															break;
      													default:
      															cout<<"Op��o Inv�lida\n";
							  }
							break;
											case 'N':
													cout<<"Pato\n";
													break;
											case 'R':
													cout<<"�guia\n";
													break;
											default:
													cout<<"Op��o Inv�lida\n";
						      }
						    break;						
      				case 'R':
      						cout<<"Digite:\nC - Com casco\nA - Carn�voro\nP - Sem patas\n";
      						cin>>opcao;
      						opcao=toupper(opcao);
      						switch(opcao){
      										case 'C':
      												cout<<"Tartaruga\n";
      												break;
      										case 'A':
      												cout<<"Crocodilo\n";
      												break;
      										case 'P':
      												cout<<"Cobra\n";
      												break;
      										default:
      												cout<<"Op��o Inv�lida\n";
      						   }
							break;
					default:
							cout<<"Op��o Inv�lida\n";
	}
      system("Pause");
}
