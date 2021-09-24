#ifndef SELECIONARCONTA_H
#define SELECIONARCONTA_H
#include "../../Banco/banco.hpp"
#include "../../Relatorio/relatorio.hpp"
#include "../../Imprimivel/imprimivel.hpp"


class SelecionarConta{
private:
  //atributos
  int opt;
  int numeroDaConta = 0;
  bool escolherOutraConta = false;
  bool finalizar = false; 
  bool encontrouConta1 = false;
  bool encontrouConta2 = false;
  int posicaoDoObjetoProcurado_SC;
  int posicaoDoObjetoProcurado2_SC;
private:
  //métodos
  void inserirDados_SC();
  void menu();
  void opcoesDoMenu(Banco &_banco);
  void procurarConta1(Banco &_banco);
  void procurarConta2(int _numeroDaConta, Banco& _banco);
  void transfereDinheiro(int _valor, int _numeroDaConta, Banco& _banco);
  
public:
  SelecionarConta(Banco& _banco);
  ~SelecionarConta();
};

#endif // !SELECIONARCONTA_H