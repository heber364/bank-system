#ifndef RELATORIO_H
#define RELATORIO_H
#include "../Imprimivel/imprimivel.hpp"
#include "../ContaBancaria/contabancaria.hpp"


class Relatorio{
public:
  void gerarRelatorio(Imprimivel& _objImprimivel);
};
#endif // !RELATORIO_H