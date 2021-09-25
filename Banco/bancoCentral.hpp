#ifndef BANCOCENTRAL_H
#define BANCOCENTRAL_H

#include "../Banco/banco.hpp"

Banco bancoCentral;

void printBannerMenu(){
  std::cout<< "=====================================================================================================================" << std::endl;
  std::cout<< "=====================================================================================================================\n" << std::endl;

  std::cout<< "BBBBBBBBBBBBBBBBB                  AAA               NNNNNNNN        NNNNNNNN        CCCCCCCCCCCCC     OOOOOOOOO     " << std::endl;      
  std::cout<< "B::::::::::::::::B                A:::A              N:::::::N       N::::::N     CCC::::::::::::C   OO:::::::::OO   " << std::endl;  
  std::cout<< "B::::::BBBBBB:::::B              A:::::A             N::::::::N      N::::::N   CC:::::::::::::::C OO:::::::::::::OO " << std::endl; 
  std::cout<< "BB:::::B     B:::::B            A:::::::A            N:::::::::N     N::::::N  C:::::CCCCCCCC::::CO:::::::OOO:::::::O" << std::endl; 
  std::cout<< "  B::::B     B:::::B           A:::::::::A           N::::::::::N    N::::::N C:::::C       CCCCCCO::::::O   O::::::O" << std::endl; 
  std::cout<< "  B::::B     B:::::B          A:::::A:::::A          N:::::::::::N   N::::::NC:::::C              O:::::O     O:::::O" << std::endl; 
  std::cout<< "  B::::BBBBBB:::::B          A:::::A A:::::A         N:::::::N::::N  N::::::NC:::::C              O:::::O     O:::::O" << std::endl; 
  std::cout<< "  B:::::::::::::BB          A:::::A   A:::::A        N::::::N N::::N N::::::NC:::::C              O:::::O     O:::::O" << std::endl; 
  std::cout<< "  B::::BBBBBB:::::B        A:::::A     A:::::A       N::::::N  N::::N:::::::NC:::::C              O:::::O     O:::::O" << std::endl; 
  std::cout<< "  B::::B     B:::::B      A:::::AAAAAAAAA:::::A      N::::::N   N:::::::::::NC:::::C              O:::::O     O:::::O" << std::endl; 
  std::cout<< "  B::::B     B:::::B     A:::::::::::::::::::::A     N::::::N    N::::::::::NC:::::C              O:::::O     O:::::O" << std::endl; 
  std::cout<< "  B::::B     B:::::B    A:::::AAAAAAAAAAAAA:::::A    N::::::N     N:::::::::N C:::::C       CCCCCCO::::::O   O::::::O" << std::endl; 
  std::cout<< "BB:::::BBBBBB::::::B   A:::::A             A:::::A   N::::::N      N::::::::N  C:::::CCCCCCCC::::CO:::::::OOO:::::::O" << std::endl; 
  std::cout<< "B:::::::::::::::::B   A:::::A               A:::::A  N::::::N       N:::::::N   CC:::::::::::::::C OO:::::::::::::OO " << std::endl; 
  std::cout<< "B::::::::::::::::B   A:::::A                 A:::::A N::::::N        N::::::N     CCC::::::::::::C   OO:::::::::OO   " << std::endl; 
  std::cout<< "BBBBBBBBBBBBBBBBB   AAAAAAA                   AAAAAAANNNNNNNN         NNNNNNN        CCCCCCCCCCCCC     OOOOOOOOO\n   " << std::endl; 

  std::cout<< "=====================================================================================================================" << std::endl;
  std::cout<< "===========================================      SELECIONE UMA OPCAO      ===========================================" << std::endl;
  std::cout<< "=====================================================================================================================\n" << std::endl;
}

#endif // !BANCOCENTRAL_H