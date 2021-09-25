#include "banco.hpp"


void Banco::inserir(ContaBancaria* _conta){
  ContasBancarias.push_back(_conta);
}

void Banco::remover(ContaBancaria* _conta){
    for (int i = 0; i < ContasBancarias.size(); i++){
      if(_conta->getNumeroDaConta() == ContasBancarias[i]->getNumeroDaConta()){
        ContasBancarias.erase(ContasBancarias.begin()+i); 
	      std::cout<<"Conta foi excluida com Sucesso."<<std::endl;
				break;
      }
    }
};

ContaBancaria* Banco::procurar(int _numeroDaConta){
  for(int i = 0; i < ContasBancarias.size(); i++){
		if(_numeroDaConta == ContasBancarias[i]->getNumeroDaConta()){
			return ContasBancarias[i];
		}
	}
	return(NULL);
};