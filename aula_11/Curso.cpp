#include "Curso.hpp"
#include <iostream>

Curso::Curso(std::string nome, unsigned short cargaHorariaMinima, unsigned int anoCriacao){
    this->nome = nome;
    this->cargaHoraririaMinima = cargaHorariaMinima;
    this->anoCriacao = anoCriacao;
}

std::string Curso::getNomeCurso(){
    return this->nome;
}

void Curso::setNomeCurso(std::string nome){
    this->nome = nome;
}

unsigned short Curso::getCargaHorariaMinima(){
    return cargaHoraririaMinima;
}

void Curso::setCargaHoraria(unsigned int cargaHorariaMinima){
    this->cargaHoraririaMinima = cargaHorariaMinima;
}

unsigned short Curso::getAnoCriacao(){
    return anoCriacao;
}

void Curso::setAnoCriacao(unsigned short anoCriacao){
    this->anoCriacao = anoCriacao;
}

void Curso::adicionarDisciplina(Disciplina* disciplina){
    disciplinas.push_back(disciplina);
}

void Curso::removerDisciplina(Disciplina* disciplina){
    disciplinas.remove(disciplina);
}

void Curso::imprimeDados(){
	std::cout << "Nome: " << this->nome << std::endl;
	std::cout << "Carca Horaria Minima: " << this->cargaHoraririaMinima << std::endl;
	std::cout << "Ano de Criacao: " << this->anoCriacao << std::endl;
}

void Curso::imprimeDisciplinas(){
    std::list<Disciplina*>::iterator it;
	for(it = disciplinas.begin(); it != disciplinas.end(); it++){
		std::cout << (*it)->getNome() << std::endl;
	}
}
