# **Sistema de Banco**

##  **_O objetivo do trabalho foi desenvolver o estudo de Orientação à Objetos utilizando a linguagem C++_** 

### Todo trabalho possui dois arquivos executaveis, o 'main.cpp' e o 'main2.cpp', ambos na pasta 'src' que se encontra na pasta raiz. 
---
### **MAIN.CPP**
### Não há aqui interação do usuário, apenas instancia um objeto de Classe 'executavel'. É possível ver oque acontece no seu construtor no caminho "Executavel/executavel.cpp"
---
### **MAIN2.CPP**
### Aqui é de fato o sistema do banco. Para compilar basta compilar apenas ele. Todos outros arquivos .cpp já estão inclusos nele. Ao executar você verá O MENU do BANCO com as seguintes opções:

- **Criar Conta**
- **Selecionar Conta**
- **Remover Conta**
- **Gerar Relatorio do Banco**
- **Finalizar Aplicação** 

### Cada função dessa acima foi elaborada em uma classe separadamente, na pasta **Menu**, e integradas pela classe **_Menu_** presenta na raiz da mesma pasta
***
### Além desse menu, existe também o MENU da CONTA, que é visto ao acessar o selecionar conta passando o numero da conta como parametro. Caso encontre a conta, você verá 5 opções:

- **Depositar;**
- **Sacar;**
- **Transferir;**
- **Gerar Relatório da Conta;**
- **Retornar ao MENU do BANCO.**

### Todos esses métodos foram criadas em classes e é possível ver acessandos todas as pastas da raiz do programa
---
### O sistema não tem nenhum tipo de segurança, como uma simples senha por exemplo, para acessar cada conta. A unica coisa necessaria é o numero da conta. Entretando o trabalho tem como objetivo desenvolver **Orientação de Objetos, Herança, Classes Abstratas, Poliformismo** entre outras práticas que foram aplicadas nesse projeto.


