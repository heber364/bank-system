#ifndef BANCO_H
#define BANCO_H
#include <iostream>
#include <vector>

#include "../ContaBancaria/contabancaria.hpp"
#include "../Imprimivel/imprimivel.hpp"

class Banco{
public:
  void inserir(ContaBancaria*);
  void remover(ContaBancaria*);
  ContaBancaria* procurar(int);

private:
  std::vector<ContaBancaria*> ContasBancarias;
};  


#endif // !BANCO_H