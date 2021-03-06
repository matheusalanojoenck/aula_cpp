#ifndef DISCIPLINA_H
#define DISCIPLINA_H

#include <string>

#include "Pessoa.hpp"
#include "Curso.hpp"

class Disciplina{
	public:
		Disciplina(std::string nomeDisciplina, Curso& novoCurso);

		std::string getNome();
		void setNome(std::string novoNome);
		
		int getCargaHoraria();
		void setCargaHoraria(unsigned int novaCarga);

		Pessoa* getProfessor();
		void setProfessor(Pessoa* novoPefrossor);

		std::string getNomeProfessor();

		bool adicionarAluno(Pessoa* aluno);
		Pessoa** getVetorAlunos();
		unsigned int getNumAlunos();
		void imprimeDados(std::string& cabecalho, unsigned int cargaHorario);

	private:
		int numAlunos = 0;//quanos alunos foram adicionados
		Pessoa* professor;
		Pessoa* alunos[50];
		std::string nome;
		unsigned short int cargaHoraria;
		Curso& curso;

};
#endif
