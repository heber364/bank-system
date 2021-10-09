#ifndef RELATORIO_H
#define RELATORIO_H
#include "../Imprimivel/imprimivel.hpp"
#include "../ContaBancaria/contabancaria.hpp"


class Relatorio{
public:
  void gerarRelatorio(Imprimivel&);
};

void Relatorio::gerarRelatorio(Imprimivel& _objImprimivel){
  _objImprimivel.mostrarDados();
}

#endif // !RELATORIO_H