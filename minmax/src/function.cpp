#include "function.h"

/*! 
 * Finds and returns a pair with the first instance of the smallest element
 * and the last instance of the largest element in an array.
 *
 * @param V This is the array-to-pointer decay representing an array.
 * @param n The array's size.
 *
 * @return A pair of indexes to the first smallest and last largest values.
 */

std::pair<int,int> min_max( int V[], size_t n )
{
    int num1, num2, maior, menor;
    std::pair<int,int>  valor; 

    maior=V[0];
    menor=V[0];
  
  for (int i=1; i< n; i++){
    
        if (menor>V[i]){
             menor = V[i];
             num1=i;
         }

        if (maior<=V[i]){
             maior = V[i];
             num2=i;
         }
        
  
  }
  // faltou tratar o caso n == 0 retornando {-1,-1}
  
     valor =  std::make_pair (num1, num2);

    return  valor  ;   
}
