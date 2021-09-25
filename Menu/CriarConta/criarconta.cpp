#include "criarconta.hpp"
#include <iostream>
#include <string>



void CriarConta::inserirDados(){
  std::cout << "Qual numero da sua nova conta: ";
  std::cin >> this->numeroDaConta;
  std::cout << "Qual o saldo inicial: ";
  std::cin >> this->saldo;
  system("cls");
};

void CriarConta::confirmaDados(){
  std::cout << "---------------------------------------------"<<std::endl;
  std::cout << "Confima os dados? [0] NAO [1] SIM [2] Voltar" << std::endl;
  std::cout << "---------------------------------------------"<<std::endl;
  std::cout << "Numero da conta: " << numeroDaConta << std::endl;
  std::cout << "Saldo Inicial: " << saldo << std::endl;
  std::cin >> this->opt;
  system("cls");
}

CriarConta::CriarConta(std::string _tipoDeConta):tipoDeConta(_tipoDeConta){ 
  //loop 1
  do{
    this->confirmado1 = false;                                                       //defini confirmado1 como false, uma vez que n confirmamos nossa escolhe do item abaixo          
    inserirDados(); //função para inserir dados da nova conta
    //loop2
    do{
      confirmaDados(); //função para confirmar dados inseridos
      switch (this->opt){
        case 0:                                                                     //se escolher 0, o usuário digitará novamente os dados
          std::cout << "Escreva os dados novamente!" << std::endl;
          this->confirmado1 = true;
          break;
        case 1:    
          if (this->tipoDeConta=="conta-corrente"){                                 //se a conta for corrente, será criado um objeto da classe corrente
            ContaCorrente* newContaCorrente = new ContaCorrente(numeroDaConta, saldo); //criando objeto
            bancoCentral.inserir(newContaCorrente);                                         //inserindo objeto no vetor de bancos

          }else if (this->tipoDeConta=="conta-poupanca"){                           //se a conta for poupança, será criado um objeto da classe poupança
            ContaPoupanca* newContaPoupanca = new ContaPoupanca(numeroDaConta, saldo); //criando objeto
            bancoCentral.inserir(newContaPoupanca);                                         //inserindo objeto no vetor de bancos
          }
                                                                                   
          std::cout << "Conta adicionada com sucesso!\n" << std::endl;
          //loop 3
          this->confirmado2 = false;                                                      //defini confirmado2 como false, uma vez que n confirmamos nossa escolhe do item abaixo
          do{
            std::cout << "Continuar adicionando conta? [0] NAO [1] SIM ";           //imprimi mensagem 
            std::cin >> this->opt2;                                                       //captura escolha do usuario
            system("cls");
            switch (this->opt2){                                      
              case 0:                                                               //se a escolha for 0, finalizamos o programa e confirmamos a escolha
                std::cout << "Voltando..." << std::endl;
                system("PAUSE");
                system("CLS");
                this->finalizado = true;
                this->confirmado2 = true;
                this->confirmado1 = true;
                
                break;
              case 1:                                                               //se a escolha for 1, confirmamos a escolha, porem n finalizamos ainda, uma vez que será feita a criação de novas contas
                this->confirmado2 = true; 
                this->confirmado1 = true;                                                 
                break;    
              default:                                                              //se escolher outro valor, não confirmamos e nem finalizamos, dessa forma, não sairemos do loop 3 
                std::cout << "Valor invalido!";
                system("PAUSE");
                system("CLS");
                
            }          
          } while (!this->confirmado2);                                                    //enquanto não for confirmado, o usuario continuará no loop 3
          break;
        case 2:                                                                     //se escolher 2, o usuário voltará sem criar aquela conta 
          this->finalizado = true;
          this->confirmado1 = true;
          break;
        default:                                                                    //se digitar um valor inválido, ele chama novamente a funçao confirma dados, até q a pessoa digite um valor válido
          std::cout << "Digite uma opcao valida" << std::endl;
          system("PAUSE");
          system("CLS");
          break;
      }
    } while (!this->confirmado1);  
  } while (!this->finalizado); //enquanto n finalizar o programa clicando em "VOLTAR" na opt, ou clicando em "NÃO" na opt2, continua o loop

  system("CLS");
};

CriarConta::~CriarConta(){};