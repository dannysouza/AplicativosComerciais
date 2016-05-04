#include "Loja.h"

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

void Loja::procurarProduto()
{
	entrada.procurarProduto();
}

void Loja::cadastrarVenda()
{
	entrada.cadastrarVenda();
}

void Loja::cadastrarCliente()
{
	String cliente;
	
	cout << "\n Nome do cliente: ";
	cin >> cliente; 
	
	clientes.push_back(cliente);
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
			
				funcionarios.push_back(new Atendente(nome, salario, taxa));
				break;
				
			case 2:
				funcionarios.push_back(new Gerente(nome, salario));
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