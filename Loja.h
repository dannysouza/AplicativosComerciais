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

        vector <String> vetorClientes;
        vector <Funcionario*> vetorFuncionarios; 
        
        Entradas entrada;

    public:
        inline Loja();
                Loja(const string &, string, string, string, int);
                Loja(const Loja &);
                ~Loja();
        
        void cadastrarVenda();
        void cadastrarCliente();
        void listarClientes();
        void contratarFuncionario();
        void demitirFuncionario();

        virtual void alterarHorarioDeFuncionamento() = 0;
};

#endif // LOJA_H
