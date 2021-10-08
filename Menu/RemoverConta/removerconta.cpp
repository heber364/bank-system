#include "removerconta.hpp"

void RemoverConta::setConta(){
  std::cout << "INSIRA O NUMERO DA CONTA A SER REMOVIDA: " << std::endl;
  std::cin >> this->numeroDaConta;
  this->contaSelecionada = bancoCentral.procurar(numeroDaConta);
}


void RemoverConta::confirmarRemocao(){
  bool sair = false;
  
  do{
    int opt;
    std::cout << "------------------------------------------"<<std::endl;
    std::cout << "CONFIRMA REMOCAO DE CONTA [0] NAO [1] SIM" << std::endl;
    std::cout << "------------------------------------------"<<std::endl;
    contaSelecionada->imprimeDados();

    std::cin >> opt;

    if (opt == 0){
      sair = true;
    }else if(opt == 1){
      system("CLS");
      bancoCentral.remover(contaSelecionada);
      sair = true;
      system("pause");
      finalizar = true;


    }else{
      printValorInvalido(); //função void do arquivo voidsAuxliares
    }    
  } while (!sair);
}


RemoverConta::RemoverConta(){
  finalizar = false;
  do{
    setConta();
    if (contaSelecionada != NULL){
      system("CLS");
      confirmarRemocao();
    }else{
      system("CLS");
      int opt;
      std::cout << "O NUMERO DA CONTA NAO ENCOTRADO! " << std::endl;
      std::cout << "[ qualquer outro numero ] TENTAR NOVAMENTE [ 0 ] SAIR" << std::endl; 
      std::cin >> opt;
      if (opt == 0){
        finalizar = true; 
        system("CLS");
      }
    }
  }while (!finalizar); 
  system("CLS");
}