#include "executavel.hpp"

Executavel::Executavel(){
  ContaPoupanca minhaContaPoupanca(88096521,5000.00);
  ContaCorrente minhaContaCorrente(99083470,2000.00);

  minhaContaPoupanca.sacar(5700.00);
  minhaContaCorrente.sacar(1500.00);


  Relatorio relatorio;
  relatorio.gerarRelatorio(minhaContaPoupanca);
  relatorio.gerarRelatorio(minhaContaCorrente);

}