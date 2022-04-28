#include <iostream>
using std::cin;
using std::cout;

const int SIZE = 5; // input size.

int main(void)
{
      int valor;
      int quantidade=0;

    for (int i=0; i<SIZE; ++i ) {

         std::cin >> valor;
   
          if (valor<0) {
            quantidade++;   
        }
    }
 
 
std::cout << quantidade;


    return 0;
}
