#ifndef BANCO_H
#define BANCO_H

#include <iostream>
#include <vector>
#include "../ContaBancaria/contabancaria.hpp"
#include "../Imprimivel/imprimivel.hpp"

class Banco{
public:
  std::vector<ContaBancaria*> ContasBancarias;

  void inserir(ContaBancaria*);

  void remover(ContaBancaria*);

  ContaBancaria* procurar(int);
  
};  


#endif // !BANCO_H