parametrosCompilacao=-Wall #-Wshadow

all: aula12

aula12: main.o Pessoa.o Disciplina.o SalaAula.o
	g++ -o aula12 main.o Pessoa.o Disciplina.o SalaAula.o  $(parametrosCompilacao)

main.o: main.cpp
	g++ -c main.cpp $(parametrosCompilacao)

Pessoa.o: Pessoa.hpp Pessoa.cpp
	g++ -c Pessoa.cpp $(parametrosCompilacao)

Disciplina.o: Disciplina.hpp Disciplina.cpp
	g++ -c Disciplina.cpp $(parametrosCompilacao)

SalaAula.o: SalaAula.hpp SalaAula.cpp
	g++ -c SalaAula.cpp $(parametrosCompilacao)

clean:
	rm *.o aula12
