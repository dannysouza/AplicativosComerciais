#include "LojaMatriz.h"

LojaMatriz::LojaMatriz(const string eml, const int cj)
:Loja("Empresa", "Endereço", "Horario", "Comercial", 00000000)
{
    this->email = eml;
    this->cnpj = cj; 
    this->totalVendasOnline = 0;
}

LojaMatriz::LojaMatriz(const LojaMatriz &outro)
{
	this->email = outro.email;
	this->cnpj = outro.cnpj;
}

LojaMatriz::~LojaMatriz()
{
}

void LojaMatriz::alterarHorarioDeFuncionamento()
{
    int opc;
    
    do
    {
        cout << "\n Escolha um novo horario de funcionamento: \n\n 1 - 07h a 19h \n 2 - 08h a 20h \n 3 - 09h a 21h 4 - 10h a 22h \n 5 - Estabelecimento 24h \n 0 - Sair"; 
        cin >> opc; 
        
        switch (opc)
        {
            case 1:
                horarioDeFuncionamento = "07h a 19h";
                break;
                
            case 2:
                horarioDeFuncionamento = "08h a 20h";
                break;
                
            case 3:
                horarioDeFuncionamento = "09h a 21h";
                break;
                
            case 4:
                horarioDeFuncionamento = "10h a 21h";
                break;
                
            case 5:
                horarioDeFuncionamento = "24 horas";
                break;
                
            default:
                cout << "\n Opçao invalida. Tente novamente.";
        }
    
    }
    while (opc != 0);
}

void LojaMatriz::vendaOnline()
{
    cout << ""
}

