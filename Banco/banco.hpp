#ifndef BANCO_H
#define BANCO_H
#include <vector>

#include "../ContaBancaria/contabancaria.hpp"

class Banco{
public:
  void inserir(ContaBancaria* _conta);
  void remover(ContaBancaria* _conta);
  ContaBancaria procurar(int numeroDaConta);
  std::vector<ContaBancaria> getContasBancarias() const; 
private:
  std::vector<ContaBancaria> ContasBancarias;

};  


#endif // !BANCO_H