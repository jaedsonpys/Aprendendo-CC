// Classes

#include <iostream>

using namespace std;

// Não há muitas diferenças entre Classe e Struct
class Human{
public:
    Human(string name, int age){
        this->name = name;
        this->age = age;
    }

    void ShowID(){
        cout << "Nome: " << name << endl;
        cout << "Idade: " << age << endl;
        cout << "End ID" << endl;
    }

private: // Tudo que está aqui abaixo, é privado e não pode ser acessado fora desta classe
    string name;
    int age;
public:
    string userCpf;
};

int main(){
    Human pedro("Pedro", 13);

    pedro.ShowID();
    pedro.userCpf = "345.345.345.34";

    cout << "CPF: " << pedro.userCpf << endl;

    /*
    Não é possivel acessar "name" nem "age" por que eles estão definidos como privados
    e não podem ser acessados fora da classe, apenas as que estão publicas podem.
    */

    return 0;
}