parametrosCompilacao=-Wall #-Wshadow
nomeAula=aula22

all: $(nomeAula)

$(nomeAula): main.o Pessoa.o Disciplina.o SalaAula.o ConteudoMinistrado.o Console.o Professor.o Aluno.o
	g++ -o $(nomeAula) main.o Pessoa.o Disciplina.o SalaAula.o ConteudoMinistrado.o Console.o Professor.o Aluno.o $(parametrosCompilacao)

main.o: main.cpp
	g++ -c main.cpp $(parametrosCompilacao)

Pessoa.o: Pessoa.hpp Pessoa.cpp
	g++ -c Pessoa.cpp $(parametrosCompilacao)

Disciplina.o: Disciplina.hpp Disciplina.cpp
	g++ -c Disciplina.cpp $(parametrosCompilacao)

SalaAula.o: SalaAula.hpp SalaAula.cpp
	g++ -c SalaAula.cpp $(parametrosCompilacao)

ConteudoMinistrado.o: ConteudoMinistrado.hpp ConteudoMinistrado.cpp
	g++ -c ConteudoMinistrado.cpp $(parametrosCompilacao)

Console.o: Console.hpp Console.cpp
	g++ -c Console.hpp Console.cpp $(paramentrosCompilacao)

Professor.o: Professor.hpp Professor.cpp
	g++ -c Professor.hpp Professor.cpp $(paramentrosCompilacao)

Aluno.o: Aluno.hpp Aluno.cpp
	g++ -c Aluno.hpp Aluno.cpp $(paramentrosCompilacao)


clean:
	rm -f *.o *.gch $(nomeAula)
