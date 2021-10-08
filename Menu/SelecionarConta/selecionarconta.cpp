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
  printBannerConta();
  std::cout << "    [ 1 ] Depositar               [ 2 ] Sacar               [ 3 ] Transferir               [ 4 ] Gerar Relatorio   \n" << std::endl;
  std::cout << "    [ 5 ] Selecionar outra conta  [ 0 ] Voltar ao Menu Principal " << std::endl;

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
        system("CLS");
        break;
      case 2:
        double valorDeSaque;
        std::cout << "Valor do saque: ";
        std::cin >> valorDeSaque;  
        contaSelecionada->sacar(valorDeSaque);
        system("PAUSE");
        system("cls");
        break;
      case 3:
        double valorDeTransferencia;
        std::cout << "Valor da tranferencia: ";
        std::cin >> valorDeTransferencia;
        setContaSecundaria();
        if (contaSelecionada2 != NULL){
          if (valorDeTransferencia > contaSelecionada->getSaldo()){
            std::cout << "Valor de transferencia maior que o saldo em conta!" << std::endl;
            std::cout << "--------------------------------------------------" << std::endl;
            std::cout << "Saldo atual: " << contaSelecionada->getSaldo() << std::endl;
            std::cout << "Valor requerido: " << valorDeTransferencia << std::endl;
            system("pause");
            system("cls");
          }else{
            std::cout << "Transferencia realizada com sucesso!" << std::endl;
            contaSelecionada->transferir(valorDeTransferencia, *contaSelecionada2);
            system("pause");
            system("cls");
          }
          
        }else{
          system("cls");
          std::cout << "CONTA INEXISTENTE" << std::endl;
          system("PAUSE");
          system("cls");
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
        printValorInvalido();
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