#include "criarconta.hpp"
#include <iostream>
#include <string>


CriarConta::CriarConta(std::string _tipoDeConta, Banco* _banco):tipoDeConta(_tipoDeConta){

  std::string NomeDoUsuario;
  int numeroDaConta;
  double saldo;
  bool finalizado = false;
  int opt;

  do{
    std::cout << "Usuario da conta(sem caracteres especiais): ";
    std::cin >> NomeDoUsuario;
    std::cout << "Qual numero da sua nova conta: ";
    std::cin >> numeroDaConta;
    std::cout << "Qual o saldo inicial: ";
    std::cin >> saldo;
    std::cout << "----------------------------------\n"<<std::endl;
    std::cout << "Confima os dados? [0] NAO [1] SIM [2] Voltar" << std::endl;
    std::cout << "----------------------------------"<<std::endl;
    std::cout << "Usuario da conta: " << NomeDoUsuario << std::endl;
    std::cout << "Numero da conta: " << numeroDaConta << std::endl;
    std::cout << "Saldo Inicial: " << saldo << std::endl;
    std::cin >> opt;


    switch (opt){
    case 0:
      std::cout << "Escreva os dados novamente!" << std::endl;
      system("PAUSE");
      system("CLS");
      break;
    case 1:
      int opt2;
      if (this->tipoDeConta=="conta-corrente"){
        ContaCorrente* NomeDoUsuario = new ContaCorrente(numeroDaConta, saldo);//FALAR COM MONITOR SOBRE ISSO
        _banco->inserir(NomeDoUsuario);

      }else if (this->tipoDeConta=="conta-poupanca"){
        ContaPoupanca* NomeDoUsuario = new ContaPoupanca(numeroDaConta, saldo);
        _banco->inserir(NomeDoUsuario); 
      }
      std::cout << "Continuar adicionando conta? [0] NAO [1] SIM ";
      std::cin >> opt2;
      switch (opt2){
        case 0:
          finalizado = true;
          break;
        case 1:
          break;
        default:
          std::cout << "Valor invalido!";
        }
      break;
    case 2:
      finalizado = true;
      break;
    default:
      std::cout << "Digite uma opcao valida" << std::endl;
    }
         
  } while (!finalizado);

  system("CLS");
};

CriarConta::~CriarConta(){};