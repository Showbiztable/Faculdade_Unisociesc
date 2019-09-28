/*
Lucas Trevizan
6.	FUA que leia o sexo (F ou M) de N pessoas e retorne o número de mulheres e a porcentagem de homens. 
*/
#include<iostream>
#include<locale.h>
#include<stdio.h>
#include<math.h>
using namespace std;
main()
{
	  char sexo;
	  int quantFeminino=0, quantMasculino=0, quantPessoas;
	  float percMasculino;
	  setlocale(LC_ALL,"Portuguese");
	  do{
			do{
				cout<<"Digite o sexo:\nF-Feminino\nM-Masculino\nDigite S para sair\n";
				cin>>sexo;
				sexo=toupper(sexo);
				if(sexo!='F' && sexo!='M' && sexo!='S')
					cout<<"Valor inválido!!\n";
								
			  }while(sexo!='F' && sexo!='M' && sexo!='S');
	  		  if(sexo=='F')
				quantFeminino++;
			  else if(sexo=='M')
			  	quantMasculino++;
			    	  	
	    }while(sexo!='S');
	    	cout<<"A quantidade de mulheres é "<<quantFeminino<<"\n";
	    	quantPessoas=quantFeminino+quantMasculino;
	    	percMasculino=(quantMasculino*100)/quantPessoas;
	    	//percMasculino=(quantMasculino*100)/(quantFeminino+quantMasculino);
	    	cout<<"O percentual de homens é "<<percMasculino<<"\n";
	        system("Pause>>null");
}
