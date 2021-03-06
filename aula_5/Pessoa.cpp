#include "Pessoa.hpp"
#include <iostream>

Pessoa::Pessoa()
	: nome{""}, idade{(unsigned char)0}, cpf{0}
{
	std::cout << "Construtor 1" << std::endl;
}

Pessoa::Pessoa(std::string nomePessoa, unsigned short int idadePessoa)
	: nome{nomePessoa}, idade{(unsigned char)idadePessoa}
{
	std::cout << "Construtor 2" << std::endl;
}

Pessoa::Pessoa(std::string nomePessoa, unsigned short int idadePessoa, unsigned long cpfPessoa)
	: Pessoa(nomePessoa, idadePessoa)
{
	if (validarCPF(cpfPessoa))
	{
		cpf = cpfPessoa;
	}
	else
	{
		cpf = 0;
	}
	std::cout << "Construtor 3" << std::endl;
}

std::string Pessoa::getNome()
{
	return nome;
}

void Pessoa::setNome(std::string novoNome)
{
	nome = novoNome;
}

unsigned long Pessoa::getCpf()
{
	return cpf;
}

void Pessoa::setCpf(unsigned long novoCpf)
{
	if (validarCPF(novoCpf))
	{
		cpf = novoCpf;
	}
	else
	{
		cpf = 0;
	}
}

unsigned short int Pessoa::getIdade()
{
	return idade;
}

void Pessoa::setIdade(unsigned short int novaIdade)
{
	idade = (unsigned char)novaIdade;
}

bool Pessoa::validarCPF(unsigned long cpfTeste)
{
	int somatorioValidaUltimo;
	int modulo;
	int somatorioValidaPenultimo = 0;
	int ultimo = cpfTeste % 10;
	cpfTeste = cpfTeste / 10;
	int penultimo = cpfTeste % 10;
	cpfTeste = cpfTeste / 10;

	somatorioValidaUltimo = penultimo * 2;
	for (int i = 2; i <= 11; i++)
	{
		modulo = cpfTeste % 10;
		cpfTeste = cpfTeste / 10;
		somatorioValidaPenultimo += modulo * i;
		somatorioValidaUltimo += modulo * (i + 1);
	}
	modulo = somatorioValidaPenultimo % 11;
	if (modulo < 2)
	{
		if (!penultimo)
			return false; //cpf invalido
	}
	else
	{
		if (penultimo != 11 - modulo)
			return false; //cpf invalido
	}
	modulo = somatorioValidaUltimo % 11;
	if (modulo < 2)
	{
		if (!ultimo)
			return false; //cpf invalido
	}
	else
	{
		if (ultimo != 11 - modulo)
			return false; //cpf invalido
	}
	return true; //cpf valido
}
