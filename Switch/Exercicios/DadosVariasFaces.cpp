#include <iostream>

using namespace std;
int main() 
{
  int smt, dados,objetos;
  smt=time(0);
  srand(smt); 


  cout<<"Quantas faces o usuário presente usar?"<<endl;
  cin>>objetos;

  dados=rand()%objetos+1;

  switch	(objetos) 
  {
    case 4: 
      smt=rand()%(4)+1;  
    break;
    case 6: 
      smt=rand()%(6)+1;   
    break;
    case 8: 
      smt=rand()%(8)+1;  
    break;
    case 10: 
      smt=rand()%(10)+1;  
    break;
    case 12: 
      smt=rand()%(12)+1;  
    break;
    case 16:
       smt=rand()%(16)+1;  
    break;
  }
  cout<<"O número escolhido foi "<<dados<<endl;
}