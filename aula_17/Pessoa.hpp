#ifndef PESSOA_H
#define PESSOA_H

#include<string>

class Pessoa{
	public:
		Pessoa();

		Pessoa(std::string nome);

		Pessoa(std::string nome, unsigned short int idade);

		Pessoa(std::string nome, unsigned short int idade, unsigned long cpf);

		~Pessoa();

		unsigned short int getIdade() const;
		void setIdade(unsigned short int idade);

		std::string getNome() const;
		void setNome(const std::string& nome);

		unsigned long getCpf() const;
		void setCpf(unsigned long cpf);
		
		void imprimeEnderecoMemoria();
	private:
		bool validarCPF(unsigned long cpfTeste);

		std::string nome;
		unsigned long cpf;
		unsigned char idade;
};

#endif
