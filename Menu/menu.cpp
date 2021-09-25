#include "menu.hpp"
#include <iostream>

void Menu::printValorInvalido(){
  system("CLS");
  std::cout << "====================================" << std::endl;
  std::cout << "==== SELECIONE UMA OPCAO VALIDA ====" << std::endl;
  std::cout << "====================================" << std::endl;
  system("pause");
  system("CLS");
}

Menu::Menu(){
  system("CLS");
  
  bool programaFinalizado = false;

  do{
    int opt;
    std::cout << "====================================================================================" << std::endl;
    std::cout << "================================ ESCOLHA UMA OPCAO =================================" << std::endl;
    std::cout << "====================================================================================" << std::endl;
    std::cout << " [ 1 ] Criar nova conta   [ 2 ] Selecionar Conta                                    " << std::endl;
    std::cout << " [ 3 ] Remover Conta      [ 4 ] Gerar Relatorio do Banco  [ 0 ] Finalizar Aplicacao " << std::endl;
    std::cin >> opt;
    system("CLS");
    if (opt == 0){
      bool valorValido = false;
      do{
       int opt2;
        std::cout << "DESEJA MESMO FINALIZAR A APLICACAO?"<< std::endl;
        std::cout << "[ 1 ] NAO   [ 0 ] SIM " << std::endl;
        std::cin >> opt2;
      
        if (opt2 == 1){
          std::cout << "Voltando ao menu " << std::endl;
          valorValido = true;
          system("PAUSE");
          system("CLS");
        }else if(opt2 == 0){
          std::cout << "Finalizando aplicacao..." << std::endl;
          valorValido = true;
          programaFinalizado = true;
          system("PAUSE");
          system("CLS");
        }else{
          printValorInvalido();
        }
      } while (!valorValido);
    }else if(opt == 1){
      CriarConta _criarConta;
    }else if(opt == 2){
      SelecionarConta _selecionarConta;
    }else{
      printValorInvalido();
    }
    
      // case 1:
        
      //   break;
      // case 2:
      //   SelecionarConta _selecionarConta();
      //   break;
      // case 3:
      // // RemoverConta _removerConta;
      //   break;
      // case 4:
      //   //GerarRelatorio _gerarRelatorio();
      //   break;
      // case 0:
      //   //finalizarPrograma();
      // default:
      //   break;
  
  } while (!programaFinalizado);
  

}; 