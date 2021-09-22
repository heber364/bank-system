#include "criarconta.hpp"
#include <iostream>
#include <string>

std::string NomeDoUsuario;
int numeroDaConta;
double saldo;
bool finalizado = false;
bool confirmado1 = false;
bool confirmado2 = false;
int opt;
int opt2;

void inserirDados(){
  std::cout << "Usuario da conta(sem caracteres especiais): ";
  std::cin >> NomeDoUsuario;
  std::cout << "Qual numero da sua nova conta: ";
  std::cin >> numeroDaConta;
  std::cout << "Qual o saldo inicial: ";
  std::cin >> saldo;
  system("cls");
};

void confirmaDados(){
  std::cout << "---------------------------------------------"<<std::endl;
  std::cout << "Confima os dados? [0] NAO [1] SIM [2] Voltar" << std::endl;
  std::cout << "---------------------------------------------"<<std::endl;
  std::cout << "Usuario da conta: " << NomeDoUsuario << std::endl;
  std::cout << "Numero da conta: " << numeroDaConta << std::endl;
  std::cout << "Saldo Inicial: " << saldo << std::endl;
  std::cin >> opt;
  system("cls");
}

CriarConta::CriarConta(std::string _tipoDeConta, Banco* _banco):tipoDeConta(_tipoDeConta){ 
  //loop 1
  do{
    confirmado1 = false;
    inserirDados(); //função para inserir dados da nova conta
    //loop2
    do{
      confirmaDados(); //função para confirmar dados inseridos
      switch (opt){
        case 0:                                                                     //se escolher 0, o usuário digitará novamente os dados
          std::cout << "Escreva os dados novamente!" << std::endl;
          confirmado1 = true;
          break;
        case 1:    
          if (this->tipoDeConta=="conta-corrente"){                                 //se a conta for corrente, será criado um objeto da classe corrente
            ContaCorrente* NomeDoUsuario = new ContaCorrente(numeroDaConta, saldo); //criando objeto
            _banco->inserir(NomeDoUsuario);                                         //inserindo objeto no vetor de bancos

          }else if (this->tipoDeConta=="conta-poupanca"){                           //se a conta for poupança, será criado um objeto da classe poupança
            ContaPoupanca* NomeDoUsuario = new ContaPoupanca(numeroDaConta, saldo); //criando objeto
            _banco->inserir(NomeDoUsuario);                                         //inserindo objeto no vetor de bancos
          }
          confirmado2 = false;                                                       //defini confirmado como false, uma vez que n confirmamos nossa escolhe do item abaixo
          
          //loop 3
          do{
            std::cout << "Continuar adicionando conta? [0] NAO [1] SIM ";           //imprimi mensagem 
            std::cin >> opt2;                                                       //captura escolha do usuario
            switch (opt2){                                      
              case 0:                                                               //se a escolha for 0, finalizamos o programa e confirmamos a escolha
                std::cout << "Voltando..." << std::endl;
                system("PAUSE");
                system("CLS");
                finalizado = true;
                confirmado2 = true;
                confirmado1 = true;
                
                break;
              case 1:                                                               //se a escolha for 1, confirmamos a escolha, porem n finalizamos ainda, uma vez que será feita a criação de novas contas
                confirmado2 = true; 
                confirmado1 = true;                                                 
                break;    
              default:                                                              //se escolher outro valor, não confirmamos e nem finalizamos, dessa forma, não sairemos do loop 3 
                std::cout << "Valor invalido!";
                system("PAUSE");
                system("CLS");
                
            }          
          } while (!confirmado2);                                                    //enquanto não for confirmado, o usuario continuará no loop 3
          break;
        case 2:                                                                     //se escolher 2, o usuário voltará sem criar aquela conta 
          finalizado = true;
          confirmado1 = true;
          break;
        default:                                                                    //se digitar um valor inválido, ele chama novamente a funçao confirma dados, até q a pessoa digite um valor válido
          std::cout << "Digite uma opcao valida" << std::endl;
          system("PAUSE");
          system("CLS");
          break;
      }
    } while (!confirmado1);  
  } while (!finalizado); //enquanto n finalizar o programa clicando em "VOLTAR" na opt, ou clicando em "NÃO" na opt2, continua o loop

  system("CLS");
};

CriarConta::~CriarConta(){};