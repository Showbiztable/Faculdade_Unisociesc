#include <vector>
#include <fstream>
#include <iostream>
#include <conio2.h>
#include <string>

using namespace std;

main()
{
	int Life; // Vari�vel
	
	Life=18;
	
	cout << Life << " - " << &Life << endl;
	
	int *pontLife;	// Ponteiro
	pontLife = &Life;
	
	cout << pontLife << endl;	// Endere�o
	cout << Life << endl;	 	// Valor
	cout << &Life << endl;		// Endere�o
	cout << *pontLife << endl;		// Valor
	cout << &pontLife << endl;	// 2*Endere�o
}
