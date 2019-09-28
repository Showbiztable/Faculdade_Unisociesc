/*
Alunos: Lucas Trevizan
7.	Numa eleição existem 3 candidatos. FUA que peça para cada um votar,
ao final deve mostrar o número de votos de cada candidato e sua respectiva
porcentagem. Para finalizar o programa digite 0 (zero) para o voto.
*/
#include<iostream>
#include<locale.h>
#include<stdio.h>
#include<math.h>
using namespace std;
main()
{
	  int votacao, cand1=0, cand2=0, cand3=0, porcentagem;
	  char resp;
	  setlocale(LC_ALL, "Portuguese");
	  do{
	  	cout<<"Informe:\n1 - Kennedy\n2 - Bush\n3 - Maccoy\n";
	  	cin>>votacao;
	  		if(votacao==1)
	  	    cand1++;
	  	    else if(votacao==2)
	  		cand2++;
	  		else if(votacao==3)
	  		cand3++;
	  	do{
		    cout<<"Quer votar denovo (Burlar o sistema)\nQ - que se lasque eu quero sim\n0 - ah deixa pra lá, já tenho muito coisa pra fazer\n";
	  	    cin>>resp;
	  	    resp=toupper(resp);	  	    
	  	  }while(resp!='Q' && resp!='0');
	    }while(resp=='Q');
	    cout<<"Votos para Kennedy = "<<cand1<<" ,Porcentagem de voto = "<<cand1*100/(cand1+cand2+cand3)<<" %\n";
	    cout<<"Votos para Bush = "<<cand2<<" ,Porcentagem de voto = "<<cand2*100/(cand1+cand2+cand3)<<" %\n";
	    cout<<"Votos para Maccoy = "<<cand3<<" ,Porcentagem de voto = "<<cand3*100/(cand1+cand2+cand3)<<" %\n";	    
	  system("Pause>>null");
}


