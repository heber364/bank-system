#include "selecionarconta.hpp"
#include <iostream>

int numeroDaConta;
int posicaoDoObjetoProcurado;
int posicaoDoObjetoProcurado2;
int opt;
bool finalizar = false;
bool escolherOutraConta = false;

void inserirDados(){
  std::cout << "Informe o numero da conta procurada" << std::endl;
  std::cin >> numeroDaConta;
};


bool encontrouConta(Banco _banco){
  int i = 0;
  while ( i <  _banco.getContasBancarias().size()){
    if(numeroDaConta == _banco.getContasBancarias()[i].getNumeroDaConta()){
      return true;
      posicaoDoObjetoProcurado = i;
    }
    i++;
  }

};


bool encontrouConta2(int _numeroDaConta, Banco _banco){
  int i = 0;
  while ( i <  _banco.getContasBancarias().size()){
    if(_numeroDaConta == _banco.getContasBancarias()[i].getNumeroDaConta()){
      return true;
      posicaoDoObjetoProcurado2 = i;
    }
    i++;
  }

};


void transfereDinhiro(int _valor, int _numeroDaConta, Banco _banco){
  if (encontrouConta2(_numeroDaConta, _banco)){
    _banco.getContasBancarias()[posicaoDoObjetoProcurado].transferir(_valor, &_banco.getContasBancarias()[posicaoDoObjetoProcurado2]);
  }else{
    std::cout << " Conta nao encontrada, tente novamente!" << std::endl;
  }
};


void menu(){
  std::cout << "---------------------------------"<< std::endl;
  std::cout << "----------MENU DA CONTA----------"<< std::endl;
  std::cout << "---------------------------------"<< std::endl;
  std::cout << "[ 1 ] Depositar [ 2 ] Sacar [ 3 ] Transferir [ 4 ] Gerar Relatório"<< std::endl;
  std::cout << "[ 5 ] Selecionar outra conta [ 0 ] Voltar ao Menu Principal "<< std::endl;
  std::cin >> opt;
};


void opcoesDoMenu(int _opt, Banco _banco){
  do{
    menu();
    switch (_opt){
      case 1:
        double valorDeDeposito;
        std::cout << "Valor do deposito: ";
        std::cin >> valorDeDeposito;
        _banco.getContasBancarias()[posicaoDoObjetoProcurado].depositar(valorDeDeposito);
        break;
      case 2:
        double valorDeSaque;
        std::cout << "Valor do saque: ";
        std::cin >> valorDeSaque;  
        _banco.getContasBancarias()[posicaoDoObjetoProcurado].sacar(valorDeSaque);
        break;
      case 3:
        double valorDeTransferencia;
        int numeroDaConta2;
        std::cout << "Valor da tranferencia: ";
        std::cin >> valorDeTransferencia;
        std::cout << "Numero da conta que recebera a transferencia: ";
        std::cin >>  numeroDaConta2;
        transfereDinhiro(valorDeTransferencia, numeroDaConta2, _banco);
      case 4:
        Imprimivel* conta = new Imprimivel(&(_banco.getContasBancarias()[posicaoDoObjetoProcurado]));
        Relatorio relatorio;
        relatorio.gerarRelatorio(conta);
        break;
      case 5:
        escolherOutraConta = true;
        break;
      case 0:
        //voltando
      default:
        break;
    }
  } while (!escolherOutraConta);
}


SelecionarConta::SelecionarConta(Banco _banco){
  do{
    inserirDados();
    if (encontrouConta(_banco)){
      opcoesDoMenu(opt, _banco);
    }else{
      std::cout << "Numero de conta nao encontrado, por favor, tenta novamente!" << std::endl;
    }
  
  } while (!finalizar);
  
 
}