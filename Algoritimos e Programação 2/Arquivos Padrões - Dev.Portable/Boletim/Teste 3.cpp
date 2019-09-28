#include <vector>
#include <fstream>
#include <iostream>
#include <conio2.h>
#include <string>

using namespace std;

main()
{
	int Life; // Variável
	
	Life=18;
	
	cout << Life << " - " << &Life << endl;
	
	int *pontLife;	// Ponteiro
	pontLife = &Life;
	
	cout << pontLife << endl;	// Endereço
	cout << Life << endl;	 	// Valor
	cout << &Life << endl;		// Endereço
	cout << *pontLife << endl;		// Valor
	cout << &pontLife << endl;	// 2*Endereço
}
