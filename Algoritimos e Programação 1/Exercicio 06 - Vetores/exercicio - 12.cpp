/*
Lucas Trevizan e Doglas E E Cattoni
12.	FUP que leia a altura, o peso e o sexo de 20 pessoas. O programa deverá calcular e mostrar (IMC= peso/(altura2)):
a)	O IMC de cada pessoa. 
b)	A quantidade de pessoas que estão acima do peso ideal.
c)	A quantidade de pessoas que estão abaixo do peso ideal.
d)	O percentual de mulheres que estão acima do peso ideal.
Aqui vai uma imagem.
*/
#include<iostream>
#include<locale.h>
#include<stdio.h>
#include<math.h>
using namespace std;
main()
{
	const int TAM=20;
	float alt[TAM], peso[TAM], imc[TAM], percM1, percM2;
	char sexo[TAM];
	int i, quantAC=0, quantAB=0, quantM=0, quantM1=0;
	setlocale(LC_ALL,"Portuguese");
	for(i=0;i<TAM;i++)
	{
		cout<<"Informe os dados da pessoa "<<i+1<<"\n";
		do{
			cout<<"Informe o peso\n";
			cin>>peso[i];
	      }while(peso[i]<=0);
	    
		do{
			cout<<"Informe a altura\n";
			cin>>alt[i];
		  }while(alt[i]<=0 || alt[i]>=2.20); 
		do{
			cout<<"Informe o sexo\nF - Feminino\nM - Masculino\n";
			cin>>sexo[i];
			sexo[i]=toupper(sexo[i]);			
	      }while(sexo[i] != 'F' && sexo[i] != 'M');
	     
		  //cálculo do IMC
	      
		  imc[i]=peso[i]/(pow(alt[i],2));
	      
	      if(imc[i]>=25)
	      	quantAC++;
	      
		  else if(imc[i]<=18.5)
		  	quantAB++;
		  	
		  if(sexo[i]=='F')
		  {
		  	quantM1++;//Quantidade de mulheres
		  	
		  	if (imc[i]>=25)
		  		quantM++;//Quantidade de Mulheres acima do peso ideal
		  }
		  
		  percM1=(quantM*100)/TAM;
		  percM2=(quantM1*100)/quantM1;
		  cout<<"Quantidade de mulheres acima do peso ideal sobre o total de pessoas "<<percM1<<" %\n";
		  cout<<"Quantidade de mulheres acima do peso ideal sobre o total de mulheres "<<percM2<<" %\n";
		  cout<<"Quantidade de pessoas acima do peso ideal "<<quantAC<<"\n";
		  cout<<"Quantidade de pessoas abaixo do peso ideal "<<quantAB<<"\n";
		  
		  //Mostrar o vetor imc
		  for(i=0;i<TAM;i++)
		  {
		  	cout<<"IMC da pessoas "<<i+1<<" : "<<imc[i]<<"\n";
		  }
		
	}

	  system("Pause>>null");
}

