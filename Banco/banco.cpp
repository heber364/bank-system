#include "banco.hpp"

void Banco::inserir(ContaBancaria* _conta){
  this->ContasBancarias.push_back(*_conta);
};

std::vector<ContaBancaria> Banco::getContasBancarias() const{
  return this->ContasBancarias;
}