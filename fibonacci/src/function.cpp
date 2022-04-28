#include "function.h"

std::vector<unsigned int> fib_below_n( unsigned int n )
{
    std::vector<unsigned int> fibonacci; 

  
   int a=1;
   int b=1;
   

   fibonacci.push_back(a);
   fibonacci.push_back(b);
  
  
    for (int i=0; i<=n; ++i){
        int resultado = 0;
           resultado=a+b;
           a=b;
           b=resultado;
         
         if (resultado <=n) { // deveria ser retornado somente o valores menores que n
             fibonacci.push_back(resultado);
         }
     
     }
   
    
    return fibonacci;
}
