#include <iostream>
using namespace std;

int main() 
{
  //VARIAVEIS INPUT: Devem ser coletados os dados de idade, sexo (M/F) e salário
  int idade = 0;
  char sexo;
  double salario;

  //VARIAVEIS de CALCULO e OUTPUT
  double mediaSalarios = 0;
  int qtdPessoas = 0;
  int maiorIdade=0, menorIdade=120;
  int qtdMulheresSalarioBaixo = 0;
  double menorSalario = 9999999;
  int idadeMenorSalario;
  char sexoMenorSalario;

  while (idade >=0) //Finalize a entrada de dados ao ser digitada uma idade negativa.
  {
    cout << "Informe a idade: ";
    cin >> idade;
    if(idade >=0) // só pergunto sexo e salario se a idade não for negativa.
    {
      cout << "Informe o sexo(M/F): ";
      cin >> sexo;
      cout << "Informe o salario: ";
      cin >> salario;

      mediaSalarios += salario; // Vai acumulando cada salario informado (mediaSalarios = mediaSalarios + salario)
      qtdPessoas++; // Conta o numero de entrevistados

      //maior e menor idade
      if(idade > maiorIdade)
        maiorIdade = idade;

      if(idade < menorIdade)
        menorIdade = idade;

      //A quantidade de mulheres com salário até R$ 200,00;
      if((sexo=='F' || sexo =='f' )&& salario <=200) 
      {
        qtdMulheresSalarioBaixo++;
      }

      //A idade e o sexo da pessoa que possui o menor salário.
      if(salario < menorSalario)
      {
        menorSalario = salario;
        sexoMenorSalario = sexo;
        idadeMenorSalario = idade;
      }
    }
  }

  mediaSalarios = mediaSalarios / qtdPessoas;
  cout << "A média de salarios do grupo eh: " << mediaSalarios << endl;

  cout << "A menor idade do grupo eh " << menorIdade << " e a maior idade do grupo eh: " << maiorIdade << endl;
  cout << "A quantidade de mulheres que ganha menos de 200 eh: " << qtdMulheresSalarioBaixo << endl;

  cout << "A idade da pessoa com menor salario eh " << idadeMenorSalario << endl;
  cout << "Sexo da pessoa com menor salario: " << sexoMenorSalario << endl;

  return 0;
}
