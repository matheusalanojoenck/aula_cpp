#include "Pessoa.hpp"

#include<iostream>

Pessoa::Pessoa(){
}

Pessoa::Pessoa(std::string nome)
	:nome{nome} {
}

Pessoa::Pessoa(std::string nome, unsigned short int idade)
	:nome{nome}, idade{(unsigned char)idade} {
}

Pessoa::Pessoa(std::string nome, unsigned short int idade, unsigned long cpf)
		: Pessoa(nome, idade) {
	if(validarCPF(cpf))
		this->cpf = cpf;
	else
		this->cpf = 0;
}

Pessoa::~Pessoa(){
	
}

std::string Pessoa::getNome() const{
	return this->nome;
}

void Pessoa::setNome(const std::string& nome){
	this->nome = nome;
}

unsigned long Pessoa::getCpf() const{
	return this->cpf;
}

void Pessoa::setCpf(unsigned long cpf){
	if(validarCPF(cpf))
		this->cpf = cpf;
}

unsigned short int Pessoa::getIdade() const{
	return this->idade;
}

void Pessoa::setIdade(unsigned short int idade){
	this->idade =  idade;
}

void Pessoa::imprimeEnderecoMemoria(){
	std::cout << this << std::endl;
}

bool Pessoa::validarCPF(unsigned long cpfTeste){
	int somatorioValidaUltimo;
	int modulo;
	int somatorioValidaPenultimo = 0;
	int ultimo = cpfTeste%10;
	cpfTeste = cpfTeste/10;
	int penultimo = cpfTeste%10;
	cpfTeste = cpfTeste/10;
	
	somatorioValidaUltimo = penultimo*2;
	for(int i=2; i <= 11; i++){
		modulo = cpfTeste%10;
		cpfTeste = cpfTeste/10;
		somatorioValidaPenultimo += modulo*i;
		somatorioValidaUltimo += modulo*(i+1);
	}
	modulo = somatorioValidaPenultimo%11;
	if(modulo < 2){
		if(!penultimo)
			return false;//cpf invalido
	}else{
		if(penultimo != 11 - modulo)
			return false;//cpf invalido
	}
	modulo = somatorioValidaUltimo%11;
	if(modulo < 2){
		if(!ultimo)
			return false;//cpf invalido
	}else{
		if(ultimo != 11-modulo)
			return false;//cpf invalido
	}
	return true;//cpf valido
}