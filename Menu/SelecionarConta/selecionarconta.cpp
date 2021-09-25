#include <iostream>
#include "selecionarconta.hpp"



void SelecionarConta::setContaPrincipal(){
  int numeroDaConta;
  std::cout << "INFORME O NUMERO DA CONTA PROCURADA:" << std::endl;
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
  std::cout << "-------------------------------------------------------------------"<< std::endl;
  std::cout << "---------------------------MENU DA CONTA---------------------------"<< std::endl;
  std::cout << "------------------------------------------------------------------"<< std::endl;
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
        system("CLS");
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
        system("CLS");
        contaSelecionada->mostrarDados();
        system("PAUSE");
        system("CLS");
        break;
      case 5:
        escolherOutraConta = true;
        system("CLS");
        break;
      default:
        break;
    }
  } while (!escolherOutraConta);
  escolherOutraConta = false;
}


SelecionarConta::SelecionarConta(){

  do{
    setContaPrincipal();
    if (contaSelecionada != NULL && contaSelecionada != 0){
      system("CLS");
      opcoesDoMenu();
    }else if(contaSelecionada == NULL){
      system("CLS");
      int opt;
      std::cout << "O NUMERO DA CONTA  NAO ENCOTRADO! " << std::endl;
      std::cout << "[ qualquer outro numero ] TENTAR NOVAMENTE [ 0 ] SAIR" << std::endl; 
      std::cin >> opt;
      if (opt == 0){
        finalizar = true; 
        system("CLS");
      }
    
    }else if(contaSelecionada == 0){
      this->finalizar = true;
    }
  
  } while (!finalizar);
  
 
}


SelecionarConta::~SelecionarConta(){};