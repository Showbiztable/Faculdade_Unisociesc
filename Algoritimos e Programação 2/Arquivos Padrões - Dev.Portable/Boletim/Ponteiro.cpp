#include <iostream>
#include <string>
#include <vector>
#include <conio2.h>
#include <fstream>

using namespace std;

main()
{
	int idade;
	
	idade = 18;
	
	cout << idade << " - " << &idade;
	
	int *pontIdade;  // Para criar um ponteiro deve-se usar o asterisco ( * )
	pontIdade = &idade;
	
	cout << endl << endl;
	cout << pontIdade << endl;  // Mostra o endereço da variável
	cout << &idade << endl;     // Mostra o endereço da variável
	cout << *pontIdade << endl; // Mostra o valor armazenado no ponteiro
	cout << &pontIdade << endl; // Mostra o endereço do ponteiro idade
	
}
