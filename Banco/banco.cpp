#include "banco.hpp"
#include "bancoCentral.hpp"

void Banco::inserir(ContaBancaria* _conta){
  ContasBancarias.push_back(_conta);
}

void Banco::remover(ContaBancaria* _conta){
    for (int i = 0; i < this->ContasBancarias.size(); i++){
      if(_conta == this->ContasBancarias[i]){
        this->ContasBancarias.erase(ContasBancarias.begin()+i); 
	      std::cout<<"Conta foi excluida com Sucesso."<<std::endl;
				break;
      }
    }
};

ContaBancaria* Banco::procurar(int _numeroDaConta){
  for(int i = 0; i < this->ContasBancarias.size(); i++){
		if(_numeroDaConta == this->ContasBancarias[i]->getNumeroDaConta()){
			return this->ContasBancarias[i];
		}
	}
	return NULL;
};

void Banco::mostrarDados() const{
  system("cls");
  if (this->ContasBancarias.size()==0){
    std::cout << "Nao ha nenhuma conta registrada no banco" << std::endl;
  }else{
    for (int i = 0; i < this->ContasBancarias.size(); i++){
      std::cout << "Conta - " << i + 1 << std::endl;
      ContasBancarias[i]->mostrarDados();
      std::cout<<std::endl;
    }
  }
  system("PAUSE");
  system("CLS");
};