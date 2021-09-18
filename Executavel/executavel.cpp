#include "executavel.hpp"

Executavel::Executavel(){
  ContaPoupanca* minhaContaPoupanca = new ContaPoupanca(88096521,5000.00);
  ContaCorrente* minhaContaCorrente = new ContaCorrente(99083470,2000.00);

  minhaContaPoupanca->sacar(5700.00);
  minhaContaCorrente->sacar(1500.00);

  Imprimivel* conta1 = new Imprimivel(minhaContaCorrente);
  Imprimivel* conta2 = new Imprimivel(minhaContaPoupanca);

  Relatorio relatorio1;
  relatorio1.gerarRelatorio(conta1);
  relatorio1.gerarRelatorio(conta2);

}