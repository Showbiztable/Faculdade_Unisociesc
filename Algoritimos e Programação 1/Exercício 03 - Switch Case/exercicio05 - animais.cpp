/*
Lucas Trevizan ; Doglas Cattoni
5.	Construa um algoritmo que seja capaz de concluir qual dentre os seguintes animais foi escolhido, através de perguntas e respostas.
Animais possíveis: leão, cavalo, homem, macaco, morcego, baleia, avestruz, pinguim, pato, águia, tartaruga, crocodilo e cobra.
Utilize a seguinte classificação:
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
      cout<<"Digite:\nM - Mamifero\nA - Aves\nR - Répteis\n";
      cin>>opcao;//entrada de dados
      opcao=toupper(opcao);
      switch(opcao){
      				case 'M':
      					cout<<"Digite:\nQ - Quadrúpedes\nB - Bípedes\nV - Voadores\nA - Aquáticos\n";
      					cin>>opcao;
      					opcao=toupper(opcao);
      					switch(opcao){
									  case 'Q':
      							      cout<<"Digite:\nC - Carnívoro\nH - Herbívoro\n";
      								  cin>>opcao;
      								  opcao=toupper(opcao);
      								  switch(opcao){
      								  				case 'C':
														cout<<"Leão\n";
														break;
													case 'H':
														cout<<"Cavalo\n";
														break;
													default:
															cout<<"Opção Inválida\n";
										}
      									break;
									case 'B':
										cout<<"Digite: \nO - Onívoros\nF - Frutivoros\n";
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
													  		cout<<"Opção Inválida\n";
										}
										
									 	break;
									case 'V':
										cout<<"Morcego\n";
										break;
									case 'A':
										cout<<"Baleia\n";
										break;
									default:
											cout<<"Opção Inválida\n";
						  }
						  break;
      				case 'A':
      						cout<<"Digite:\nV - Não voadores\nN - Nadadores\nR - Rapina\n";
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
      															cout<<"Opção Inválida\n";
							  }
							break;
											case 'N':
													cout<<"Pato\n";
													break;
											case 'R':
													cout<<"Águia\n";
													break;
											default:
													cout<<"Opção Inválida\n";
						      }
						    break;						
      				case 'R':
      						cout<<"Digite:\nC - Com casco\nA - Carnívoro\nP - Sem patas\n";
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
      												cout<<"Opção Inválida\n";
      						   }
							break;
					default:
							cout<<"Opção Inválida\n";
	}
      system("Pause");
}
