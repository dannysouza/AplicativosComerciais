#ifndef APLICATIVOSCOMERCIAIS_H
#define APLICATIVOSCOMERCIAIS_H

class AplicativosComerciais
{
public:
	AplicativosComerciais();
	~AplicativosComerciais();

	void entrar();
	bool validarInformacoes(const string &, const string &);
    void novoUsuario(const string &);
    void telaInicial(const string &);
	
	
private:
	vector<string> vetorUsuarios;
	vector<string> vetorSenhas;
};

#endif // APLICATIVOSCOMERCIAIS_H
