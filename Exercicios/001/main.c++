// Programa para saber se número é par ou impar

#include <iostream>
#include <string>

using namespace std;

int main(){
    while(true){
        int n1;
        cout << "\nDigite um número: ";
        cin >> n1;

        if(n1 == 999){
            cout << "Fim do programa" << endl;
            break;
        }

        int restoDivisao = n1 % 2;
        if(restoDivisao == 0){
            cout << "O número " << n1 << " é par!";
        } else {
            cout << "O número " << n1 << " é impar!";
        }
    }
    return 0;
}