#ifndef DISCIPLINA_H
#define DISCIPLINA_H

#include <string>
#include <list>

#include "ConteudoMinistrado.hpp"
#include "Pessoa.hpp"
//#include "SalaAula.hpp"
class SalaAula;//forward declaration
//o include de SalaAula deve ir agora para o cpp

class Disciplina{
	public:
		Disciplina(std::string nome);

		std::string getNome();
		void setNome(std::string nome);
		
		int getCargaHoraria();
		void setCargaHoraria(unsigned int cargaHoraria);
		
		Pessoa* getProfessor();
		void setProfessor(Pessoa* professor);

		void adicionarAluno(Pessoa* aluno);
		void removerAluno(Pessoa* aluno);
		void removerAluno(unsigned long cpf);
		std::list<Pessoa*>& getAlunos();

		void setSalaAula(SalaAula* salaAula);
		SalaAula* getSalaAula();

		void adicionarConteudoMinistrado(std::string conteudo, unsigned short cargaHorariaConteudo);
		void removeConteudoMinistrado(unsigned int id);
		std::list<ConteudoMinistrado*> getListaConteudos();
		void limparConteudos();

		void imprimeDados(std::string& cabecalho, unsigned int& cargaTotalCurso);
		void imprimirConteudosMinistrados();
	private:
		std::string nome;
		unsigned short int cargaHoraria;
		SalaAula* salaAula;

		Pessoa* professor;
		std::list<Pessoa*> alunos;

		std::list<ConteudoMinistrado*> conteudos;
};
#endif
