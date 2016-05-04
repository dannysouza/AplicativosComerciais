#ifndef LOJAMATRIZ_H
#define LOJAMATRIZ_H

class LojaMatriz : public Loja
{
    private:
        String email;
        int cnpj;
        float totalVendasOnline;
        
    public:
        LojaMatriz(const string, const int);
        LojaMatriz(const Loja &);
        ~LojaMatriz();
        
        virtual void alterarHorarioDeFuncionamento();
        void consultarEstoque();
        void vendaOnline();
};

#endif // LOJAMATRIZ_H
