#ifndef GERARRELATORIO_H
#define GERARRELATORIO_H

#include <iostream>
#include "../../Banco/bancoCentral.hpp"
#include "../../Relatorio/relatorio.hpp"

class GerarRelatorio{
public:
  GerarRelatorio();

};

GerarRelatorio::GerarRelatorio(){
  bancoCentral.mostrarDados();
 }



#endif // !GERARRELATORIO_H