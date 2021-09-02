// Gerar ID para usuários (uso de bibliotecas)

#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

int main(){
    while(true){
        int userID = rand();
        std::string userRes;

        cout << "Continuar? [s/n]: ";
        cin >> userRes;

        while(true){
            if(userRes == "n"){
                cout << "FIM" << endl;
                return 0;
            } else if(userRes == "s"){
                break;
            } else {
                cout << "Digite s ou n para prosseguir" << endl;
                cout << "Continuar? [s/n]: ";
                cin >> userRes;
            }
        }
        
        cout << "\nSeu novo ID é " << userID << endl;
    }
    return 0;
}