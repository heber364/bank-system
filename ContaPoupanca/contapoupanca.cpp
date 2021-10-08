#include "contapoupanca.hpp"
#include <iostream>

//construtor
ContaPoupanca::ContaPoupanca(int _numeroDaConta, double _saldo): ContaBancaria( _numeroDaConta, _saldo){
  this->TipoDeConta = "Conta Poupanca";
}; 

void ContaPoupanca::sacar(double _valor){
  
  //verifica se o saldo não é negativo
  if (this->saldo >= 0){
    //verifica o valor sacado é menor ou igual ao valor do saldo mais o limite
    if (this->saldo + this->limite >= _valor){
      //verifica se só o saldo já é o suficiente para realizar o saque
      if (this->saldo >= _valor){
        this->saldo -= _valor;
        std::cout << "Saque de R$" << _valor << " realizado com sucesso!" << std::endl;
        std::cout << "====================================="              << std::endl;
        std::cout << "Saldo atual:    " << this->saldo                    << std::endl;
        std::cout << "Limite atual:   " << this->limite                   << std::endl;
        std::cout << "====================================="              << std::endl;
        system("pause");
        system("cls");
      //se o saldo n for suficiente, descontará uma parte do limite
      }else{
        this->limite -=  (_valor - this->saldo);
        this->saldo -= _valor;
        std::cout << "Saque de R$" << _valor << " realizado com sucesso!" << std::endl;
        std::cout << "====================================="              << std::endl;
        std::cout << "Saldo atual:    " << this->saldo                    << std::endl;
        std::cout << "Limite atual:   " << this->limite                   << std::endl;
        std::cout << "====================================="              << std::endl;
        system("pause");
        system("cls");
      }
    //caso o saldo e o limite juntos seja menor que o valor de saque 
    }else{
        std::cout << "ERRO!! Saque maior que limite e saldo juntos"               << std::endl;
        std::cout << "============================================"               << std::endl;
        std::cout << "(Saldo + limite) atual:    " << this->saldo + this->limite  << std::endl;
        std::cout << "Valor requerido:           " << _valor                      << std::endl;
        std::cout << "============================================"               << std::endl;
        system("pause");
        system("cls");
    }
  //caso o saldo já esteja negativo  
  }else{
    //caso o limite disponivel seja menor que o valor de saque requerido
    if (this->limite < _valor){
      std::cout << "ERRO!! Saque maior que limite disponivel!"    << std::endl;
      std::cout << "OBS.: Seu saldo esta negativo"                << std::endl;
      std::cout << "============================================" << std::endl;
      std::cout << "Limite atual:       " << this->limite         << std::endl;
      std::cout << "Valor requerido:    " << _valor               << std::endl;
      std::cout << "============================================" << std::endl;
      system("pause");
      system("cls");
    //caso o limite disponivel não seja menor que o valor de saque requerido
    }else{
      this->limite -= _valor;
      this->saldo -= _valor;
        std::cout << "Saque de R$" << _valor << " realizado com sucesso!" << std::endl;
        std::cout << "====================================="              << std::endl;
        std::cout << "Saldo atual:    " << this->saldo                    << std::endl;
        std::cout << "Limite atual:   " << this->limite                   << std::endl;
        std::cout << "====================================="              << std::endl;
        system("pause");
        system("cls");
    } 
  }
}

//metodo de depositar
void ContaPoupanca::depositar(double _valor){
  
  //verifica se o saldo esta negativo
  if(this->saldo < 0){
    //se o saldo, mais o valor depositado, continuar negativo, faz...
    if (this->saldo + _valor < 0){
      this->saldo += _valor;
      this->limite += _valor;
        std::cout << "Deposito de R$" << _valor << " realizado com sucesso!" << std::endl;
        std::cout << "====================================="                 << std::endl;
        std::cout << "Saldo atual:    " << this->saldo                       << std::endl;
        std::cout << "Limite atual:   " << this->limite                      << std::endl;
        std::cout << "====================================="                 << std::endl;
        system("pause");
        system("cls");
    //se o saldo, mais o valor deposito, ficar positivo, faz...
    }else{
      this->saldo += _valor;
      this->limite = 1000;
      std::cout << "Deposito de R$" << _valor << " realizado com sucesso!" << std::endl;
      std::cout << "====================================="                 << std::endl;
      std::cout << "Saldo atual:    " << this->saldo                       << std::endl;
      std::cout << "Limite atual:   " << this->limite                      << std::endl;
      std::cout << "====================================="                 << std::endl;
      system("pause");
      system("cls");
    } 
  }else{
    this->saldo+= _valor;
    std::cout << "Deposito de R$" << _valor << " realizado com sucesso!" << std::endl;
    std::cout << "====================================="                 << std::endl;
    std::cout << "Saldo atual:    " << this->saldo                       << std::endl;
    std::cout << "Limite atual:   " << this->limite                      << std::endl;
    std::cout << "====================================="                 << std::endl;
    system("pause");
    system("cls");
  }

}

//metodo que retorna o saldo
double ContaPoupanca::getLimite() const{
  return this->limite;
}


//metodo de mostrar dados
void ContaPoupanca::mostrarDados() const{
  std::cout << "=========================================="     << std::endl;
  std::cout << "Tipo de conta:   " << this->getTipoDeConta()    << std::endl;
  std::cout << "Numero da conta: " << this->getNumeroDaConta()  << std::endl;
  std::cout << "Saldo:           " << this->getSaldo()          << std::endl;
  std::cout << "Limite:          " << this->getLimite()         << std::endl;
  std::cout << "=========================================="     << std::endl;
}
