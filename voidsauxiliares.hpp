#ifndef VOIDSAUXILIARES_H
#define VOIDSAUXILIARES_H

#include <iostream>

void printBannerBanco(){
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

void printValorInvalido(){
  system("CLS");
  std::cout << "====================================" << std::endl;
  std::cout << "==== SELECIONE UMA OPCAO VALIDA ====" << std::endl;
  std::cout << "====================================" << std::endl;
  system("pause");
  system("CLS");
}

void printBannerConta(){   
  std::cout<< "=======================================================================================================================" << std::endl;
  std::cout<< "=======================================================================================================================\n" << std::endl; 

  std::cout<< "       CCCCCCCCCCCCC     OOOOOOOOO     NNNNNNNN        NNNNNNNNTTTTTTTTTTTTTTTTTTTTTTT               AAA               " << std::endl;
  std::cout<< "    CCC::::::::::::C   OO:::::::::OO   N:::::::N       N::::::NT:::::::::::::::::::::T              A:::A              " << std::endl;
  std::cout<< " CC:::::::::::::::C OO:::::::::::::OO N::::::::N      N::::::NT:::::::::::::::::::::T              A:::::A             " << std::endl; 
  std::cout<< " C:::::CCCCCCCC::::CO:::::::OOO:::::::ON:::::::::N     N::::::NT:::::TT:::::::TT:::::T            A:::::::A            " << std::endl; 
  std::cout<< "C:::::C       CCCCCCO::::::O   O::::::ON::::::::::N    N::::::NTTTTTT  T:::::T  TTTTTT           A:::::::::A           " << std::endl;
  std::cout<< "C:::::C              O:::::O     O:::::ON:::::::::::N   N::::::N        T:::::T                 A:::::A:::::A          " << std::endl; 
  std::cout<< "C:::::C              O:::::O     O:::::ON:::::::N::::N  N::::::N        T:::::T                A:::::A A:::::A         " << std::endl; 
  std::cout<< "C:::::C              O:::::O     O:::::ON::::::N N::::N N::::::N        T:::::T               A:::::A   A:::::A        " << std::endl; 
  std::cout<< "C:::::C              O:::::O     O:::::ON::::::N  N::::N:::::::N        T:::::T              A:::::A     A:::::A       " << std::endl; 
  std::cout<< "C:::::C              O:::::O     O:::::ON::::::N   N:::::::::::N        T:::::T             A:::::AAAAAAAAA:::::A      " << std::endl; 
  std::cout<< "C:::::C              O:::::O     O:::::ON::::::N    N::::::::::N        T:::::T            A:::::::::::::::::::::A     " << std::endl; 
  std::cout<< "C:::::C       CCCCCCO::::::O   O::::::ON::::::N     N:::::::::N        T:::::T            A:::::AAAAAAAAAAAAA:::::A    " << std::endl;
  std::cout<< " C:::::CCCCCCCC::::CO:::::::OOO:::::::ON::::::N      N::::::::N      TT:::::::TT         A:::::A             A:::::A   " << std::endl;
  std::cout<< " CC:::::::::::::::C OO:::::::::::::OO N::::::N       N:::::::N       T:::::::::T        A:::::A               A:::::A  " << std::endl;
  std::cout<< "    CCC::::::::::::C   OO:::::::::OO   N::::::N        N::::::N      T:::::::::T       A:::::A                 A:::::A " << std::endl;
  std::cout<< "       CCCCCCCCCCCCC     OOOOOOOOO     NNNNNNNN         NNNNNNN      TTTTTTTTTTT      AAAAAAA                   AAAAAAA" << std::endl;
  
  std::cout<< "=======================================================================================================================" << std::endl;
  std::cout<< "============================================      SELECIONE UMA OPCAO      ============================================" << std::endl;
  std::cout<< "=======================================================================================================================\n" << std::endl;                                                                                                                     
                                                                                                                        
                                                                                                                        
}
#endif // !VOIDSAUXILIARES_H

