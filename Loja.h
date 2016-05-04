#ifndef LOJA_H
#define LOJA_H

#include <string> 

#include "Funcionario.h"
#include "Estoque.h"
#include "Entradas.h"
#include "Saidas.h"

class Loja
{
protected:
	String nomeLoja;
	String endereco;
	String horarioDeFuncionamento;
	String ramoDeAtividade;
	
	int telefone;

	vector <String> clientes;
	vector <double> consumoClientes;
	vector <Funcionario*> funcionarios; 
	
	Entradas entrada;

public:
	inline Loja();
			Loja(const string &, string, string, string, int);
			Loja(const Loja &);
			~Loja();
	
	void procurarProduto();
	void cadastrarVenda();
	void cadastrarCliente();
	void contratarFuncionario();
	void demitirFuncionario();

	virtual void alterarHorarioDeFuncionamento() = 0;

};

#endif // LOJA_H
