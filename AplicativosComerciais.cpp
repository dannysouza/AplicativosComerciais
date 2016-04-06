#include "AplicativosComerciais.h"
#include <cstring>
#include <string.h>

using namespace std;	

AplicativosComerciais::AplicativosComerciais()
{
}

AplicativosComerciais::~AplicativosComerciais()
{
}

void AplicativosComerciais::entrar()
{
	string usuario, senha;
	int opcao;
	
	do
	{
		cout << "\n (Digite 'x' para sair)";
		
		cout << "\n Usuario: ";
		cin >> usuario;
		cout << "\n Senha: ";
		cin >> senha;
	
		for(int i=0; vetorUsuarios.size(); i++)
		{
			if(usuario == vetorUsuarios[i])
			{
				validarInformacoes(usuario, senha);
					
				if(validarInformacoes(usuario, senha))
					telaInicial(usuario);
						
				else
					cout << "\n Senha incorreta. Tente novamente.";
			}
			
			else
				break;
		}
		while(usuario != 'x');
	}
	
		cout << "\n Usuario nao registrado. Deseja registrar um novo usuario com o nome inserido? ('s' para Sim ou 'n' para Nao)";
		cin >> opcao;
		
		do
		{
			switch(opcao)
			{
				case 's':
					novoUsuario(usuario);
					telaInicial(usuario);
					break;
					
				case 'n':
					break;
					
				default:
					cout << "\n Opcao invalida. Tente novamente.";
			}
		}
		while(opcao != 's' && opcao != 'n');
}

void AplicativosComerciais::novoUsuario(const string &usuario)
{
	string senha;
	
	cout << "\n Escolha uma senha de pelo menos 4 caracteres. ";
	do
	{
		cout << "\n (Digite 0 para sair)";
		cout << "\n\n Senha: ";
		cin >> senha;
		
		if(strlen(senha) >= 4)
		{
			vetorUsuarios.push_back(usuario);
			vetorSenhas.push_back(senha);
			
			cout << "\n Usuario criado.";
			break; 
		}
		else
			cout << "\n A senha que voce digitou e invalida. Insira uma senha de no minimo 4 caracteres.";
	}
	while(senha != 0);
}

bool AplicativosComerciais::validarInformacoes(const string &usuario, const string &senha)
{
	for(int i=0; vetorUsuarios.size(); i++)
	{
		if(usuario == vetorUsuarios[i] && senha == vetorSenhas[i])
		return true;
	}
	return false;
}

void AplicativosComerciais::telaInicial(const string &usuario)
{
	cout << "\n Bem-vindo, " << usuario;
    
    
}