#include "Clientes.h".
#include <fstream> 

Clientes::Clientes()
{
}

Clientes::~Clientes()
{
}

void Clientes::novoCliente()
{
    cout << "\n Nome: ";
    cin >> cliente;

    cout << "\n Telefone: ";
    cin >> telefone;

    cout << "\n E-mail: ";
    cin >> email

    cout << "\n Data do cadastro: ";
    cin >> dataCliente;
    
    ofstream arquivo;
    arquivo.open((cliente + ".txt").c_str(), ios::app);
    arquivo << " Nome: " << cliente << "\n Telefone: " << telefone << "\n E-mail: " << email << "\n Cliente desde : " << dataCliente << endl;
    
    vetorClientes.push_back(cliente);
    
    cout << "\n Cliente cadastrado com sucesso. ";
}

void Clientes::listarClientes()
{
    for(int i=0; vetorClientes.size(); i++)
        cout << vetorClientes[i];
}



