//Utilizando o comando for, faça um algoritmo que imprima a tabuada completa dos numeros de 1 até 10. Cada tabuada representa a multiplicação do numero em questão por 1 até 10. 
int main() 
{
  for(int i =1 ; i <=10; i ++)
  {
    for (int a = 1; a<= 10; a ++)
    {
      cout<< i << " * "<< a << " = " << a * i << endl;
    }
    cout << "\n";
  } 
}
