#include "menu.hpp"
#include <iostream>


Menu::Menu(){
  system("CLS");
  
  bool programaFinalizado = false;

  do{
    int opt;
    printBannerBanco();
    // std::cout << "=====================================================================================================================" << std::endl;
    std::cout << "    [ 1 ] CRIAR CONTA       [ 2 ] SELECIONAR CONTA        [ 3 ] REMOVER CONTA       [ 4 ] GERAR RELATORIO DO BANCO   \n" << std::endl;
    std::cout << "    [ 0 ] Finalizar Aplicacao " << std::endl;
    std::cin >> opt;
    system("CLS");
    if (opt == 0){
      bool valorValido = false;
      do{
       int opt2;
        std::cout << "DESEJA MESMO FINALIZAR A APLICACAO?"<< std::endl;
        std::cout << "[ 0 ] NAO   [ 1 ] SIM " << std::endl;
        std::cin >> opt2;
      
        if (opt2 == 0){
          std::cout << "Voltando ao menu " << std::endl;
          valorValido = true;
          system("PAUSE");
          system("CLS");
        }else if(opt2 == 1){
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
    }else if (opt == 3){
      RemoverConta _removerConta;
    }else if (opt == 4) { 
      GerarRelatorio _gerarRelatorio;
    }else{
      printValorInvalido();
    }
    
  
  } while (!programaFinalizado);
  

}; 