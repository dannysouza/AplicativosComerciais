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

    cout << "\n Cargo: ";
    cin >> cargo

    cout << "\n Salario: ";
    cin >> salario

    cout << "\n Carga horaria: ";
    cin >> cargaHoraria;

    cout << "\n Data de admissao: ";
    cin >> dataAdmissao;
    
    cliente += ".txt"; 
    ofstream arquivo;
    arquivo.open(cliente.c_str(), ios::app);
    arquivo << " Nome: " << cliente << "\n Telefone: " << telefone << "\n Cargo: " << cargo << "\n Salario: " << salario << "\n Carga horaria: " << cargaHoraria << "\n Data de admissao: " << dataAdmissao << endl;
    
    cout << "\n Cliente cadastrado com sucesso. ";
}


