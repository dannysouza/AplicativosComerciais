#include "Loja.h"

#include <iostream>
#include <vector>

Loja::Loja(const string &nome, string end, string horario, string ramo, int tel)
{
	this->nomeLoja = nome;
	this->endereco = end;
	this->horarioDeFuncionamento = horario;
	this->telefone = tel;
	this->ramoDeAtividade = ramo;
}

Loja::Loja(const Loja &outro)
{
	this->nomeLoja = outro.nomeLoja;
	this->endereço = outro.endereço;
	this->horarioDeFuncionamento = outro.horarioDeFuncionamento;
	this->telefone = outro.telefone;
	this->ramoDeAtividade = outro.ramoDeAtividade;
}

Loja::~Loja()
{
}
	entrada.procurarProduto();
}

void Loja::cadastrarVenda()
{
	entrada.cadastrarVenda();
}

void Loja::cadastrarCliente()
{
    String cliente, dataCliente, email;
    int telefone; 
    
    cout << "\n Nome do cliente: ";
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

void Loja::listarClientes()
{
    for(int i=0; vetorClientes.size(); i++)
        cout << vetorClientes[i];
}

void Loja::contratarFuncionario()
{	
	int opç;
	String nome;
	float salario;
	double taxa;
	
	cout << "\n Selecione um funcionario: ";
	
	do
	{
		cout << "\n\n 1 - Atendente \n 2 - Gerente \n 0 - Sair";
		cin >> opc;
		
		cout << "\n Nome do funcionario: ";
		cin >> nome;
		cout << "\n Salario do funcionario: ";
		cin >> salario;
		
		switch (opc)
		{
			case 1:
				cout << "\n Taxa de comissao: ";
				cin >> taxa;
			
				vetorFuncionarios.push_back(new Atendente(nome, salario, taxa));
				break;
				
			case 2:
				vetorFuncionarios.push_back(new Gerente(nome, salario));
				break;
				
			default:
				cout << "\n Opçao invalida. Tente novamente.";
		}
		
		cout << "\n Deseja cadastrar outro funcionaro? (S/N) ";
		cin >> opc;
		
		switch (opc)
		{
			case 'n':
			case 'N':
				opc = 0;
				
			case 's':
			case 'S':
				cout << "\n Selecione um funcionario:";
				break;
				
			default:
				cout << "\n Opçao invalida. Tente novamente. "
		}
	}
	while (opc != 0);
}

void Loja::demitirFuncionario()
{
    cout << "\n Nome do funcionario: ";
    cin >> nome; 
    
    cout << "\n Tem certeza que deseja demitir " >> nome >> "? (S/N)";
    cin >> opc;
    
    switch (opc)
    {
        case 'n':
        case 'N':
            break;
            
        case 's':
        case 'S':
            // (Aplicação do método "erase")
            cout << nome << " demitido.";
            break;
            
        default:
            cout << "\n Opçao invalida. Tente novamente. ";
    }
}