#include "criarconta.hpp"
#include <iostream>
#include <string>

std::string NomeDoUsuario;
int numeroDaContaCC;
double saldo;
bool finalizado_CC = false;
bool confirmado1_CC = false;
bool confirmado2_CC = false;
int opt_CC;
int opt2_CC;

void inserirDadosCC(){
  std::cout << "Usuario da conta(sem caracteres especiais): ";
  std::cin >> NomeDoUsuario;
  std::cout << "Qual numero da sua nova conta: ";
  std::cin >> numeroDaContaCC;
  std::cout << "Qual o saldo inicial: ";
  std::cin >> saldo;
  system("cls");
};

void confirmaDadosCC(){
  std::cout << "---------------------------------------------"<<std::endl;
  std::cout << "Confima os dados? [0] NAO [1] SIM [2] Voltar" << std::endl;
  std::cout << "---------------------------------------------"<<std::endl;
  std::cout << "Usuario da conta: " << NomeDoUsuario << std::endl;
  std::cout << "Numero da conta: " << numeroDaContaCC << std::endl;
  std::cout << "Saldo Inicial: " << saldo << std::endl;
  std::cin >> opt_CC;
  system("cls");
}

CriarConta::CriarConta(std::string _tipoDeConta, Banco* _banco):tipoDeConta(_tipoDeConta){ 
  //loop 1
  do{
    confirmado1_CC = false;                                                            //defini confirmado1_CC como false, uma vez que n confirmamos nossa escolhe do item abaixo          
    inserirDadosCC(); //função para inserir dados da nova conta
    //loop2
    do{
      confirmaDadosCC(); //função para confirmar dados inseridos
      switch (opt_CC){
        case 0:                                                                     //se escolher 0, o usuário digitará novamente os dados
          std::cout << "Escreva os dados novamente!" << std::endl;
          confirmado1_CC = true;
          break;
        case 1:    
          if (this->tipoDeConta=="conta-corrente"){                                 //se a conta for corrente, será criado um objeto da classe corrente
            ContaCorrente* NomeDoUsuario = new ContaCorrente(numeroDaContaCC, saldo); //criando objeto
            _banco->inserir(NomeDoUsuario);                                         //inserindo objeto no vetor de bancos

          }else if (this->tipoDeConta=="conta-poupanca"){                           //se a conta for poupança, será criado um objeto da classe poupança
            ContaPoupanca* NomeDoUsuario = new ContaPoupanca(numeroDaContaCC, saldo); //criando objeto
            _banco->inserir(NomeDoUsuario);                                         //inserindo objeto no vetor de bancos
          }
                                                                                   
          std::cout << "Conta adicionada com sucesso!\n" << std::endl;
          //loop 3
          confirmado2_CC = false;                                                      //defini confirmado2_CC como false, uma vez que n confirmamos nossa escolhe do item abaixo
          do{
            std::cout << "Continuar adicionando conta? [0] NAO [1] SIM ";           //imprimi mensagem 
            std::cin >> opt2_CC;                                                       //captura escolha do usuario
            system("cls");
            switch (opt2_CC){                                      
              case 0:                                                               //se a escolha for 0, finalizamos o programa e confirmamos a escolha
                std::cout << "Voltando..." << std::endl;
                system("PAUSE");
                system("CLS");
                finalizado_CC = true;
                confirmado2_CC = true;
                confirmado1_CC = true;
                
                break;
              case 1:                                                               //se a escolha for 1, confirmamos a escolha, porem n finalizamos ainda, uma vez que será feita a criação de novas contas
                confirmado2_CC = true; 
                confirmado1_CC = true;                                                 
                break;    
              default:                                                              //se escolher outro valor, não confirmamos e nem finalizamos, dessa forma, não sairemos do loop 3 
                std::cout << "Valor invalido!";
                system("PAUSE");
                system("CLS");
                
            }          
          } while (!confirmado2_CC);                                                    //enquanto não for confirmado, o usuario continuará no loop 3
          break;
        case 2:                                                                     //se escolher 2, o usuário voltará sem criar aquela conta 
          finalizado_CC = true;
          confirmado1_CC = true;
          break;
        default:                                                                    //se digitar um valor inválido, ele chama novamente a funçao confirma dados, até q a pessoa digite um valor válido
          std::cout << "Digite uma opcao valida" << std::endl;
          system("PAUSE");
          system("CLS");
          break;
      }
    } while (!confirmado1_CC);  
  } while (!finalizado_CC); //enquanto n finalizar o programa clicando em "VOLTAR" na opt_CC, ou clicando em "NÃO" na opt2_CC, continua o loop

  system("CLS");
};

CriarConta::~CriarConta(){};