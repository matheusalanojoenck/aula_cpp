parametrosCompilacao=-Wall #-Wshadow

all: aula14

aula14: main.o Pessoa.o Disciplina.o SalaAula.o ConteudoMinistrado.o Retangulo.o
	g++ -o aula14 main.o Pessoa.o Disciplina.o SalaAula.o ConteudoMinistrado.o Retangulo.o $(parametrosCompilacao)

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

Retangulo.o: Retangulo.hpp Retangulo.cpp
	g++ -c Retangulo.cpp $(parametrosCompilacao)

clean:
	rm *.o aula14
