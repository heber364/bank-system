#include <iostream>

#include "ContaBancaria/contabancaria.h"
#include "ContaBancaria/contabancaria.cpp"

#include "ContaCorrente/contacorrente.h"
#include "ContaCorrente/contacorrente.cpp"

int main(){

ContaBancaria heber(123, 200);
ContaBancaria thaua(321, 50);

std::cout << "Saldo " << heber.getSaldo() << std::endl;
std::cout << "Saldo " << thaua.getSaldo() << std::endl;
heber.transferir(50, &thaua);
std::cout << "Saldo " << heber.getSaldo() << std::endl;
std::cout << "Saldo " << thaua.getSaldo() << std::endl;

ContaCorrente heber2(123, 400);
std::cout << "Saldo " << heber2.getSaldo() << std::endl;


return 0;
}