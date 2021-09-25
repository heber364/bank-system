#ifndef GERARRELATORIO_H
#define GERARRELATORIO_H

#include <iostream>
#include "../../Banco/bancoCentral.hpp"

class GerarRelatorio{
public:
  GerarRelatorio();

};

GerarRelatorio::GerarRelatorio(){
  system("cls");
  if (bancoCentral.ContasBancarias.size()==0){
    std::cout << "Nao ha nenhuma conta registrada no banco" << std::endl;
  }else{
    for (int i = 0; i < bancoCentral.ContasBancarias.size(); i++){
      std::cout << "Conta - " << i + 1 << std::endl;
      bancoCentral.ContasBancarias[i]->mostrarDados();
      std::cout << std::endl;
    }
  }
  system("PAUSE");
  system("CLS");
  
}



#endif // !GERARRELATORIO_H
