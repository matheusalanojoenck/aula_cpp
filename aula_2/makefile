parametrosCompilacao=-Wall #-Wshadow

all: aula2

aula2: main.o Pessoa.o Retangulo.o
	g++ -o aula2 main.o Pessoa.o Retangulo.o $(parametrosCompilacao)

main.o: main.cpp
	g++ -c main.cpp $(parametrosCompilacao)

Pessoa.o: Pessoa.hpp Pessoa.cpp
	g++ -c  Pessoa.cpp $(parametrosCompilacao)

Retangulo.o: Retangulo.hpp Retangulo.cpp
	g++ -c  Retangulo.cpp $(parametrosCompilacao)

clean:
	rm *.o aula2
