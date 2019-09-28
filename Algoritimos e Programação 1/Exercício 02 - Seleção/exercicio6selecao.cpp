/*
6.	As Organizações Tabajara resolveram dar um aumento 
de salário aos seus colaboradores e lhe contrataram 
para desenvolver o programa que calculará os reajustes.
Faça um programa que recebe o salário de um colaborador 
e o reajuste segundo o seguinte critério, tendo como base 
o salário atual:
"	Salários até R$ 280,00 (incluindo): aumento de 20%
"	Salários entre R$ 280,00 e R$ 700,00: aumento de 15%
"	Salários entre R$ 700,00 e R$ 1500,00: aumento de 10%
"	Salários de R$ 1500,00 em diante: aumento de 5% 
Após o aumento ser realizado, informe na tela:
"	Salário antes do reajuste;
"	Percentual de aumento aplicado;
"	Valor do aumento;
"	Novo salário, após o aumento.

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
      cout<<"O salário antes do reajuste R$ "<<salario<<"\n";
      cout<<"O percentual de aumento é "<<percentual<<"% \n";
      cout<<"O valor do aumento é R$ "<<aumento<<"\n";
      cout<<"O novo salário é R$ "<<novoSal<<"\n";     
      system("Pause>>null");
}

