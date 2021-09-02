#include <iostream>
#include <string>

using namespace std;

void print(std::string word){ // Função que mostra um valor na tela
    cout << word << endl;
}

std::string input(std::string word){ // Criando uma função que espera um dado do usuario
    std::string outputResult;

    cout << word;
    cin >> outputResult;

    return outputResult;
}

int main(){
    std::string number = input("Digite um número: "); // Chamando uma função e guardando o retorno em uma váriavel
    print(number); // Chamando a váriavel e passando um parâmetro

    return 0;
}

// <tipo de retorno> <nome> (<argumentos>) {
//      <escopo>
//}

// Caso você não queira retornar nada, no tipo de retorno use void

// a variavel passada como argumento é uma cópia, e só é alterada dentro do escopo,
// para alterar o valor real, use um "&" depois do tipo de dado, por exemplo: int& x