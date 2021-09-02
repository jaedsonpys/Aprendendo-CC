#include <iostream>

using namespace std;

int main(){
    while(true){ // Loop While
        int number = 0;

        cout << "Digite um número: ";
        cin >> number; // Aguarda um valor do usuário

        if(number == 85){ // Finaliza o loop while se a variavel number for igual a 85
            cout << "Fim do programa" << endl;
            break;
        }

        if(number > 20){ // Se for maior
            cout << "O número " << number << " é maior que 20" << endl;
        } else if(number == 20){ // Se for igual
            cout << number << " é igual a 20" << endl;
        } else { // Se for menor
            cout << "O número " << number << " não é maior que 20" << endl;
        }
    }
    
    return 0;
}