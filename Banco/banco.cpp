#include "banco.hpp"
#include <vector>

template <class CONTA_BANCARIA>
void Banco::inserir(CONTA_BANCARIA* _conta){
  this->ContasBancarias.push_back(*_conta);
};

template <class CONTA_BANCARIA>
std::vector<CONTA_BANCARIA> Banco::getContasBancarias() const{
  return this->ContasBancarias;
};

template <class CONTA_BANCARIA>
void Banco::remover(CONTA_BANCARIA* _conta){
    bool objEncontrado = false;
    int posicaoDoObjetoProcurado;

    for (int i = 0; i < this->ContasBancarias.size(); i++){
      if(this->ContasBancarias[i].getNumeroDaConta() == _conta->getNumeroDaConta()){
        posicaoDoObjetoProcurado = i;
        objEncontrado = true;
      }
    }

    if(objEncontrado){
      std::cout << "Conta encontrada na posicao " << posicaoDoObjetoProcurado << "!" << std::endl;
      this->ContasBancarias.erase(this->ContasBancarias.begin()+posicaoDoObjetoProcurado);
    }else{
      std::cout << "Conta nao foi encontrada!" << std::endl;
    }
 
};

template <class CONTA_BANCARIA>
CONTA_BANCARIA* Banco::procurar(int _numeroDaConta){
  bool objEncontrado = false;
  int posicaoDoObjetoProcurado;
  int i = 0;
  while ( i < this->ContasBancarias.size()){
    if(_numeroDaConta == this->ContasBancarias[i].getNumeroDaConta()){
      bool objEncontrado = true;
      posicaoDoObjetoProcurado = i;
    }
    i++;
  }
  if (objEncontrado){
    return &ContasBancarias[posicaoDoObjetoProcurado];
  } 
  
};