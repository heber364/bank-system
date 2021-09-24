#include "selecionarconta.hpp"
#include <iostream>


void SelecionarConta::inserirDados_SC(){
   std::cout << "Informe o numero da conta procurada" << std::endl;
   std::cin >> numeroDaConta;
}


void SelecionarConta::procurarConta1(Banco &_banco){
  int i = 0;
  while (i <=  _banco.getContasBancarias().size()){
    if(numeroDaConta == _banco.getContasBancarias()[i].getNumeroDaConta()){
      encontrouConta1 =  true;
      posicaoDoObjetoProcurado_SC = i;
      break;
    }else{
      encontrouConta1 =  false;
    }i++;
  }
}


void SelecionarConta::procurarConta2(int _numeroDaConta, Banco &_banco){ 
  int i = 0;
  while ( i <=  _banco.getContasBancarias().size()){
    if(_numeroDaConta == _banco.getContasBancarias()[i].getNumeroDaConta()){
      encontrouConta2 = true;
      posicaoDoObjetoProcurado2_SC = i;
    }else{
      encontrouConta2 = false;
    }
    i++;
  }
  return;
}


void SelecionarConta::transfereDinheiro(int _valor, int _numeroDaConta, Banco &_banco){
  procurarConta2(_numeroDaConta, _banco);
  if(encontrouConta2){
    _banco.getContasBancarias()[posicaoDoObjetoProcurado_SC].transferir(_valor, &_banco.getContasBancarias()[posicaoDoObjetoProcurado2_SC]);
    std::cout << "Transferencia realizada com sucesso!\nExtrato da transferencia: ";
    std::cout << "Valor: " << _valor << "Beneficiado: " << _banco.getContasBancarias()[posicaoDoObjetoProcurado2_SC].getNumeroDaConta() << std::endl;
    system("PAUSE");
    system("CLS");
  }else{
    std::cout << " Conta nao encontrada, tente novamente!" << std::endl;
  }
  return;
};


void SelecionarConta::menu(){
  std::cout << "---------------------------------"<< std::endl;
  std::cout << "----------MENU DA CONTA----------"<< std::endl;
  std::cout << "---------------------------------"<< std::endl;
  std::cout << "[ 1 ] Depositar [ 2 ] Sacar [ 3 ] Transferir [ 4 ] Gerar Relatório"<< std::endl;
  std::cout << "[ 5 ] Selecionar outra conta [ 0 ] Voltar ao Menu Principal "<< std::endl;
  std::cin >> opt;
}


void SelecionarConta::opcoesDoMenu(Banco &_banco){
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
       _banco.getContasBancarias()[posicaoDoObjetoProcurado_SC].depositar(valorDeDeposito);
        break;
      case 2:
        double valorDeSaque;
        std::cout << "Valor do saque: ";
        std::cin >> valorDeSaque;  
        _banco.getContasBancarias()[posicaoDoObjetoProcurado_SC].sacar(valorDeSaque);
        break;
      case 3:
        double valorDeTransferencia;
        int numeroDaConta2;
        std::cout << "Valor da tranferencia: ";
        std::cin >> valorDeTransferencia;
        std::cout << "Numero da conta que recebera a transferencia: ";
        std::cin >>  numeroDaConta2;
        transfereDinheiro(valorDeTransferencia, numeroDaConta2, _banco);
      case 4:
        std::cout <<"Saldo: " <<  _banco.getContasBancarias()[posicaoDoObjetoProcurado_SC].getSaldo() << std::endl;
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


SelecionarConta::SelecionarConta(Banco &_banco){

  do{
    inserirDados_SC();
    procurarConta1(_banco);
    if (encontrouConta1){
      opcoesDoMenu(_banco);
    }else{
      std::cout << "Numero de conta nao encontrado, por favor, tenta novamente!" << std::endl;
    }
  
  } while (!finalizar);
  
 
}


SelecionarConta::~SelecionarConta(){};