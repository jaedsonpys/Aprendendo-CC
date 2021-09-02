#include <iostream>
#include <string>

using namespace std;

struct Human{
    Human(string name, int age){ // Define os valores padrões com o construtor chamado Human()
        this->name = name; // O this é um ponteiro, e equivale ao self do Python
        this->age = age;
        height = 10.5;
    }

    void alterName(string newName){ // Alterando o nome da pessoa com o objeto alterName
        name = newName;
    }

    string name;
    int age;
    float height;
};

int main(){
    // Instanciando a estrutura Human para a váriavel "me", passando nome e idade como parâmetro
    Human me("João", 12);

    cout << me.name << endl;
    cout << me.age << endl;
    cout << me.height << endl;

    // Alterando dados
    me.name = "Jaedson";
    me.age = 24;
    me.height = 1.80f;

    me.alterName("Pedro"); // Chamando o objeto para alterar o nome, passando o novo nome como parâmetro

    cout << me.name << endl;
    cout << me.age << endl;
    cout << me.height << endl;

    return 0;
}