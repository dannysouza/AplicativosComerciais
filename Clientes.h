#ifndef CLIENTES_H
#define CLIENTES_H

class Clientes 
{
public:
    Clientes();
    ~Clientes();

    void novoCliente();
    void listarClientes();
    void alterar();
    void apagar();
    
    void historicoDeClientes();
    void clientesEmAtraso();
    void clientesEmDia();
    
private:
    string cliente;
    int telefone;
    string email;
    Data dataCliente;
    
    vector<string> vetorClientes;
    
};

#endif // CLIENTES_H
