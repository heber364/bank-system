#include "selecionarconta.hpp"
#include <iostream>


void SelecionarConta::setContaPrincipal(Banco* _banco){
  int numeroDaConta;
  std::cout << "Informe o numero da conta procurada:\nCaso deseja voltar ao menu anterior digite 0!" << std::endl;
  std::cin >> numeroDaConta;
  this->contaSelecionada[0] = _banco->procurar(numeroDaConta);
}

void SelecionarConta::setContaSecundaria(Banco* _banco){
  int numeroDaConta;
  std::cout << "Numero da conta que recebera a transferencia: " << std::endl;
  std::cin >> numeroDaConta;
  this->contaSelecionada[1] = _banco->procurar(numeroDaConta);
}


// void SelecionarConta::transfereDinheiro(int _valor, Banco* _banco){
//   this->contaSelecionada[0]->transferir(_valor, _banco);
//   std::cout << "Transferencia realizada com sucesso!\nExtrato da transferencia: ";
//   std::cout << "Valor: " << _valor << "Beneficiado: " << _banco.getContasBancarias()[posicaoDoObjetoProcurado2_SC].getNumeroDaConta() << std::endl;
//   system("PAUSE");
//   system("CLS");
// }


void SelecionarConta::menu(){
  std::cout << "---------------------------------"<< std::endl;
  std::cout << "----------MENU DA CONTA----------"<< std::endl;
  std::cout << "---------------------------------"<< std::endl;
  std::cout << "[ 1 ] Depositar [ 2 ] Sacar [ 3 ] Transferir [ 4 ] Gerar Relatório"<< std::endl;
  std::cout << "[ 5 ] Selecionar outra conta [ 0 ] Voltar ao Menu Principal "<< std::endl;
  std::cin >> opt;
}


void SelecionarConta::opcoesDoMenu(Banco *_banco){
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
        this->contaSelecionada[0]->depositar(valorDeDeposito);
        break;
      case 2:
        double valorDeSaque;
        std::cout << "Valor do saque: ";
        std::cin >> valorDeSaque;  
        this->contaSelecionada[0]->sacar(valorDeSaque);
        break;
      case 3:
        double valorDeTransferencia;
        std::cout << "Valor da tranferencia: ";
        std::cin >> valorDeTransferencia;
        setContaSecundaria(_banco);
        if (contaSelecionada[1] != NULL){
          contaSelecionada[0]->transferir(valorDeTransferencia, *contaSelecionada[1]);
        }
        
        
      case 4:
        std::cout <<"Saldo: " <<  contaSelecionada[0]->getSaldo() << std::endl;
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


SelecionarConta::SelecionarConta(Banco* _banco){

  do{
    setContaPrincipal(_banco);
    if (contaSelecionada[0] != NULL && contaSelecionada[0] != 0){
      opcoesDoMenu(_banco);
    }else if(contaSelecionada[0] == NULL){
      std::cout << "Numero de conta nao encontrado, por favor, tenta novamente!" << std::endl;
    }else if(contaSelecionada[0] == 0){
      this->finalizar = true;
    }
  
  } while (!finalizar);
  
 
}


SelecionarConta::~SelecionarConta(){};