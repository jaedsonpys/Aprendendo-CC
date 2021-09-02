// Tabuada de x número completa

#include <iostream>

using namespace std;

int main(){
    while(true){
        int number;

        cout << "\nDigite um número (999 para finalizar): ";
        cin >> number;
        
        if(number == 999){
            cout << "Fim do programa" << endl;
            break;
        }

        cout << "=================="<< endl;
        cout << "Tabuada de "<< number << endl;
        cout << "=================="<< endl;
        for(int i = 0; i < 11; i++){
            int calcNumber = i * number;
            cout << number << " x " << i << " = " << calcNumber << endl;
        }
        cout << "===================" << endl;
    }
    return 0;
}