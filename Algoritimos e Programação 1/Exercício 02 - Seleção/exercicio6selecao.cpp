/*
6.	As Organiza��es Tabajara resolveram dar um aumento 
de sal�rio aos seus colaboradores e lhe contrataram 
para desenvolver o programa que calcular� os reajustes.
Fa�a um programa que recebe o sal�rio de um colaborador 
e o reajuste segundo o seguinte crit�rio, tendo como base 
o sal�rio atual:
"	Sal�rios at� R$ 280,00 (incluindo): aumento de 20%
"	Sal�rios entre R$ 280,00 e R$ 700,00: aumento de 15%
"	Sal�rios entre R$ 700,00 e R$ 1500,00: aumento de 10%
"	Sal�rios de R$ 1500,00 em diante: aumento de 5% 
Ap�s o aumento ser realizado, informe na tela:
"	Sal�rio antes do reajuste;
"	Percentual de aumento aplicado;
"	Valor do aumento;
"	Novo sal�rio, ap�s o aumento.

*/
#include<iostream>
#include<locale.h>
#include<stdio.h>
#include<math.h>
using namespace std;
main()
{
      const float perc1=0.2,perc2=0.15,perc3=0.1,perc4=0.05;
      float salario,aumento,novoSal,percentual;
      setlocale(LC_ALL,"Portuguese");
      cout<<"Informe seu salario\n";
      cin>>salario;
      if(salario<=280)
      {
           aumento=salario*perc1;
           percentual=perc1*100;
      }
      else if(salario<=700)
      {
           aumento=salario*perc2;
           percentual=perc2*100;
      }
      else if(salario<=1500)
      {
           aumento=salario*perc3;
           percentual=perc3*100;
      }
      else
      {
          aumento=salario*perc4;
          percentual=perc4*100;
      }
      novoSal=salario+aumento;
      cout<<"O sal�rio antes do reajuste R$ "<<salario<<"\n";
      cout<<"O percentual de aumento � "<<percentual<<"% \n";
      cout<<"O valor do aumento � R$ "<<aumento<<"\n";
      cout<<"O novo sal�rio � R$ "<<novoSal<<"\n";     
      system("Pause>>null");
}

