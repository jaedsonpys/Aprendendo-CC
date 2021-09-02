// Você precisa especificar qual o tipo da variavel, como inteiro, string, bool e outros

#include <iostream>

using namespace std;

int main(){
    int myInt = 10;
    myInt = 20;
    myInt = 30 + 50;

    cout << "Valor da várivel: " << myInt << endl;
    return 0;
}

/*

int myInt = 0;
float myFloat = 0.0f;
double myDouble = 0.0;

bool myBool = true;
char myChar = 't'; Apenas um caractere

unsigned int myUInt = 0; Não pode ser negativo

char myArray[11] = "0123456789";
// Valor não é dinâmico, apenas estático

// String dinâmica

#include <string>

std::>string myString = "Um texto qualquer";
// Valor dinâmico

*/