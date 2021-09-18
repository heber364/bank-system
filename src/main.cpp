#include <iostream>

#include <iostream>

#include "../ContaBancaria/contabancaria.hpp"
#include "../ContaBancaria/contabancaria.cpp"

#include "../ContaCorrente/contacorrente.hpp"
#include "../ContaCorrente/contacorrente.cpp"

#include "../ContaPoupanca/contapoupanca.hpp"
#include "../ContaPoupanca/contapoupanca.cpp"

#include "../Imprimivel/imprimivel.hpp"
#include "../Imprimivel/imprimivel.cpp"

#include "../Banco/banco.hpp"
#include "../Banco/banco.cpp"

#include "../Executavel/executavel.hpp"
#include "../Executavel/executavel.cpp"

#include "../Relatorio/relatorio.hpp"
#include "../Relatorio/relatorio.cpp"


int main(){

  Executavel* executavel = new(Executavel);

  delete executavel;
  return 0;
}
