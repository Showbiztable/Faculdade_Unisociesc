/*
Coment�rios
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
      cout<<"Digite:\nM - Mam�fero\n";
      cout<<"A - Aves \nR - Repteis\n";
      cin>>opcao;
      opcao=toupper(opcao);
      switch(opcao){
                    case 'M':
                         cout<<"Digite:\nQ - Quadr�pede\nB - B�pede\n";
                         cout<<"V - Voadores\nA - Aqu�ticos\n";
                         cin>>opcao;
                         opcao=toupper(opcao);
                         switch(opcao){
                                       case 'Q':
                                            cout<<"Digite:\nC - Carn�voro\nH - Herb�voro\n";
                                            cin>>opcao;
                                            opcao=toupper(opcao);
                                            switch(opcao){
                                                          case 'C':
                                                               cout<<"O Animal � o Le�o\n";
                                                               break;
                                                          case 'H':
                                                               cout<<"O Animal � o Cavalo\n";
                                                               break;
                                                          default:
                                                                  cout<<"Op��o Inv�lida";
                                            }
                                            break;
                                       case 'B':
                                            cout<<"Digite:\nO - On�voro\nF - Frutivoro\n";
                                            cin>>opcao;
                                            opcao=toupper(opcao);
                                            switch(opcao){
                                                          case 'O':
                                                               cout<<"O Animal � o Homem\n";
                                                               break;
                                                          case 'F':
                                                               cout<<"O Animal � o Macaco\n";
                                                               break;
                                                          default: 
                                                                   cout<<"Op��o Inv�lida\n";
                                            }
                                            
                                            break;
                                       case 'V':
                                            cout<<"O Animal � o Morcego\n";
                                            break;
                                       case 'A':
                                            cout<<"O Animal � a Baleia\n";
                                            break;
                                       default:
                                               cout<<"Op��o Inv�lida\n";
                         }
                         break;
                    case 'A':
                         cout<<"Digite:\nV - N�o Voadora\nN -Nadadora\n";
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
                                                               cout<<"O Animal � o Avestruz\n";
                                                               break;
                                                          case 'P':
                                                               cout<<"O Animal � o Pinguim\n";
                                                               break;
                                                          default:
                                                                  cout<<"Op��o Inv�lida\n";
                                            }
                                            break;
                                       case 'N':
                                            cout<<"O Animal � o Pato\n";
                                            break;
                                       case 'R':
                                            cout<<"O Animal � a �guia\n";
                                            break;
                                       default:
                                               cout<<"Op��o Inv�lida\n";
                         }
                         break;
                    case 'R':
                         cout<<"Digite:\nC -Com Casco\nR - Carn�voro\n";
                         cout<<"P - Sem patas\n";
                         cin>>opcao;
                         opcao=toupper(opcao);
                         switch(opcao){
                                       case 'C':
                                            cout<<"O Animal � a Tartaruga\n";
                                            break;
                                       case 'R':
                                            cout<<"O Animal � o Crocodilo\n";
                                            break;
                                       case 'P':
                                            cout<<"O Animal � a Cobra\n";
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


