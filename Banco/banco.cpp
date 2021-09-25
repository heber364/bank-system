#include "banco.hpp"
#include <vector>


void Banco::inserir(ContaBancaria* _conta){
  ContasBancarias.push_back(_conta);
}

void Banco::remover(ContaBancaria* _conta){
    for (int i = 0; i < this->ContasBancarias.size(); i++){
      if(_conta->getNumeroDaConta() == ContasBancarias[i]->getNumeroDaConta()){
        ContasBancarias.erase(ContasBancarias.begin()+i); 
	      std::cout<<"Conta foi excluida com Sucesso."<<std::endl;
      }
    }
};

//VERIFICAR ISSO COM ALGUM MONITOR

ContaBancaria* Banco::procurar(int _numeroDaConta){
  for(int i = 0; i <= ContasBancarias.size(); i++)//Percorre o vetor de contas
	{
		if(_numeroDaConta == ContasBancarias[i]->getNumeroDaConta())//Encontra a conta desejada
		{
			return(ContasBancarias[i]);//Retorna a conta desejada
		}
	}
	return(NULL);//Retorna vazio caso não encontre a conta
};