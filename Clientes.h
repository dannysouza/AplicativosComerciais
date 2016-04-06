#ifndef CLIENTES_H
#define CLIENTES_H

class Clientes 
{
public:
    Clientes();
    ~Clientes();

    void novoCliente();
    void procurar();
    void alterar();
    void apagar();
    
    void historicoDeClientes();
    void clientesEmAtraso();
    void clientesEmDia();
    
private:
    string cliente;
    int telefone;
    string cargo;
    float salario;
    Data dataAdmissao;
    int cargaHoraria;
    bool ativo;
    
};

#endif // CLIENTES_H
