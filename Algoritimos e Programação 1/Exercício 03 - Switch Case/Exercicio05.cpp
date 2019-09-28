/*
Comentários
*/
#include<iostream>
#include<locale.h>
#include<stdio.h>
#include<math.h>
using namespace std;
main()
{
      
      char opcao;
      setlocale(LC_ALL,"");
      cout<<"Digite:\nM - Mamífero\n";
      cout<<"A - Aves \nR - Repteis\n";
      cin>>opcao;
      opcao=toupper(opcao);
      switch(opcao){
                    case 'M':
                         cout<<"Digite:\nQ - Quadrúpede\nB - Bípede\n";
                         cout<<"V - Voadores\nA - Aquáticos\n";
                         cin>>opcao;
                         opcao=toupper(opcao);
                         switch(opcao){
                                       case 'Q':
                                            cout<<"Digite:\nC - Carnívoro\nH - Herbívoro\n";
                                            cin>>opcao;
                                            opcao=toupper(opcao);
                                            switch(opcao){
                                                          case 'C':
                                                               cout<<"O Animal é o Leão\n";
                                                               break;
                                                          case 'H':
                                                               cout<<"O Animal é o Cavalo\n";
                                                               break;
                                                          default:
                                                                  cout<<"Opção Inválida";
                                            }
                                            break;
                                       case 'B':
                                            cout<<"Digite:\nO - Onívoro\nF - Frutivoro\n";
                                            cin>>opcao;
                                            opcao=toupper(opcao);
                                            switch(opcao){
                                                          case 'O':
                                                               cout<<"O Animal é o Homem\n";
                                                               break;
                                                          case 'F':
                                                               cout<<"O Animal é o Macaco\n";
                                                               break;
                                                          default: 
                                                                   cout<<"Opção Inválida\n";
                                            }
                                            
                                            break;
                                       case 'V':
                                            cout<<"O Animal é o Morcego\n";
                                            break;
                                       case 'A':
                                            cout<<"O Animal é a Baleia\n";
                                            break;
                                       default:
                                               cout<<"Opção Inválida\n";
                         }
                         break;
                    case 'A':
                         cout<<"Digite:\nV - Não Voadora\nN -Nadadora\n";
                         cout<<"R - De Rapina\n";
                         cin>>opcao;
                         opcao=toupper(opcao);
                         switch(opcao){
                                       case 'V':
                                            cout<<"Digite:\nT - Tropicais\nP - Polar\n";
                                            cin>>opcao;
                                            opcao=toupper(opcao);
                                            switch(opcao){
                                                          case 'T':
                                                               cout<<"O Animal é o Avestruz\n";
                                                               break;
                                                          case 'P':
                                                               cout<<"O Animal é o Pinguim\n";
                                                               break;
                                                          default:
                                                                  cout<<"Opção Inválida\n";
                                            }
                                            break;
                                       case 'N':
                                            cout<<"O Animal é o Pato\n";
                                            break;
                                       case 'R':
                                            cout<<"O Animal é a Águia\n";
                                            break;
                                       default:
                                               cout<<"Opção Inválida\n";
                         }
                         break;
                    case 'R':
                         cout<<"Digite:\nC -Com Casco\nR - Carnívoro\n";
                         cout<<"P - Sem patas\n";
                         cin>>opcao;
                         opcao=toupper(opcao);
                         switch(opcao){
                                       case 'C':
                                            cout<<"O Animal é a Tartaruga\n";
                                            break;
                                       case 'R':
                                            cout<<"O Animal é o Crocodilo\n";
                                            break;
                                       case 'P':
                                            cout<<"O Animal é a Cobra\n";
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


