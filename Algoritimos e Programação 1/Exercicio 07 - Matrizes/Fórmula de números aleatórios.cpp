#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

main(){

   srand(time(NULL));
   
   for (int x = 0; x < 10; x++){
   	cout << (rand() % 100) << " | ";
   }

   cout << "\n\n";
   system("pause>>null");

}
