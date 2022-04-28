/*!
 * @brief This code implements the "Soma Vizinhos" programming problem
 * @author selan
 * @data June, 6th 2021
 */
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main( void )
{
    
  int primeiro; 
  int segundo;

  cin >> primeiro; cin >>segundo; 

  while (segundo>= -10000 && segundo <= 1000){ // não é necessário verificar o intervalo

      int resultado=0;
    
     if (segundo > 0){
   
         for (int cont=1; cont<=segundo; ++cont) {
             resultado=resultado+primeiro;
             primeiro++;
         } 
     }
    
     else if (segundo < 0){
       
         for (int cont=1; cont <= abs (segundo);  ++cont) {
            resultado= resultado+(primeiro);
            primeiro--;
          
         } 
     }

    else { resultado = primeiro;}

    

        cout << resultado;
  
        cin >> primeiro; cin >>segundo;  // desse modo não é possível verificar o fim da entrada de dados
}
  
    return 0;
}
