#include <iostream>
#include <string>
#include <stdexcept>

#include "Pessoa.hpp"
#include "CPFInvalidoException.hpp"

int main(){
	Pessoa *p{nullptr};
	std::string nome;
	unsigned long cpf;
	unsigned short int idade;

	std::cout << "Digite o nome: ";
	std::cin >> nome;
	std::cout << "Digite o cpf: ";
	std::cin >> cpf;
	std::cout << "Digite a idade: ";
	std::cin >> idade;

	try
	{
		p = new Pessoa{nome, cpf};
		p->setIdade(idade);
		std::cout << p->getNome() 
			<< " " << p->getCpf() 
			<< " " << p->getIdade() << std::endl;
	}catch(std::invalid_argument& ia)
	{
		std::cout << "Argumento invalido: " << ia.what() << std::endl;
	}catch(CPFInvalidoException& ce)
	{
		std::cout << ce.what() << std::endl << "CPF com problema: " << ce.cpf << std::endl;
	}

	delete p;
	return 0;
}

