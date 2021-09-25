#include <iostream>
#include "selecionarconta.hpp"

ContaBancaria* contaSelecionada;
ContaBancaria* contaSelecionada2;

void SelecionarConta::setContaPrincipal(){
  int numeroDaConta;
  std::cout << "Informe o numero da conta procurada:\nCaso deseja voltar ao menu anterior digite 0!" << std::endl;
  std::cin >> numeroDaConta;
  contaSelecionada = bancoCentral.procurar(numeroDaConta);
}


void SelecionarConta::setContaSecundaria(){
  int numeroDaConta;
  std::cout << "Numero da conta que recebera a transferencia: " << std::endl;
  std::cin >> numeroDaConta;
  contaSelecionada2 = bancoCentral.procurar(numeroDaConta);
}


void SelecionarConta::menu(){
  std::cout << "---------------------------------"<< std::endl;
  std::cout << "----------MENU DA CONTA----------"<< std::endl;
  std::cout << "---------------------------------"<< std::endl;
  std::cout << "[ 1 ] Depositar [ 2 ] Sacar [ 3 ] Transferir [ 4 ] Gerar Relatorio"<< std::endl;
  std::cout << "[ 5 ] Selecionar outra conta [ 0 ] Voltar ao Menu Principal "<< std::endl;
  std::cin >> opt;
}


void SelecionarConta::opcoesDoMenu(){
  do{
    menu();
    switch (opt){
      case 0:
        finalizar = true; 
        escolherOutraConta = true;
        break;
      case 1:
        double valorDeDeposito;
        std::cout << "Valor do deposito: ";
        std::cin >> valorDeDeposito;
        contaSelecionada->depositar(valorDeDeposito);
        break;
      case 2:
        double valorDeSaque;
        std::cout << "Valor do saque: ";
        std::cin >> valorDeSaque;  
        contaSelecionada->sacar(valorDeSaque);
        break;
      case 3:
        double valorDeTransferencia;
        std::cout << "Valor da tranferencia: ";
        std::cin >> valorDeTransferencia;
        setContaSecundaria();
        if (contaSelecionada2 != NULL){
          contaSelecionada->transferir(valorDeTransferencia, *contaSelecionada2);
        }
        
        
      case 4:
        std::cout <<"Saldo: " <<  contaSelecionada->getSaldo() << std::endl;
        system("pause");
        break;
      case 5:
        escolherOutraConta = true;
        break;
      default:
        break;
    }
  } while (!escolherOutraConta);
  escolherOutraConta = false;
}


SelecionarConta::SelecionarConta(){

  // ContaCorrente* heber = new ContaCorrente(123, 100);
  // ContaPoupanca* heber2 = new ContaPoupanca(321, 250);
  
  // bancoCentral.inserir(heber);
  // bancoCentral.inserir(heber2);
  // contaSelecionada = bancoCentral.procurar(123);

  do{
    setContaPrincipal();
    if (contaSelecionada != NULL && contaSelecionada != 0){
      opcoesDoMenu();
    }else if(contaSelecionada == NULL){
      std::cout << "Numero de conta nao encontrado, por favor, tenta novamente!" << std::endl;
    }else if(contaSelecionada == 0){
      this->finalizar = true;
    }
  
  } while (!finalizar);
  
 
}


SelecionarConta::~SelecionarConta(){};