#include <iostream>

using namespace std;

int main(){
    int myArray[11];

    for(int i = 0; i < 10; i++){
        myArray[i] = i * 5; // Adicionando elementos no array
    }

    for(int i = 0; i < 10; i++){
        cout << myArray[i] << endl; // Mostrando elementos do array
    }

    return 0;
}