#ifndef BANCO_H
#define BANCO_H
#include <vector>

#include "../ContaBancaria/contabancaria.hpp"
#include "../Imprimivel/imprimivel.hpp"

class Banco{
public:
  template <class CONTA_BANCARIA>
  void inserir(CONTA_BANCARIA* _conta);

  template <class CONTA_BANCARIA>
  void remover(CONTA_BANCARIA* _conta);

  template <class CONTA_BANCARIA>
  CONTA_BANCARIA* procurar(int _numeroDaConta);

  template <class CONTA_BANCARIA>
  std::vector<CONTA_BANCARIA> getContasBancarias() const; 
private:

  std::vector<ContaBancaria*> ContasBancarias;

};  


#endif // !BANCO_H