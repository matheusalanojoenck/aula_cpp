#include "Grafo.hpp"

#include <iostream>

Grafo::Grafo(/* args */)
{
}

Grafo::~Grafo()
{
}

Vertice* Grafo::adicionarVertice()
{
    Vertice* v{new Vertice};
    vertices.push_back(v);
    return v; 
}

Aresta* Grafo::adicionarAresta(Vertice* v1, Vertice* v2)
{   
    Aresta* a{new Aresta{v1, v2}}; //criando nova aresta
    v1->adicionarAresta(a); //adicionando essa aresta nos v1
    v2->adicionarAresta(a); //adicionando essa aresta nos v2
    arestas.push_back(a); //lista geral de arestas do grafo

    return a;
}

void Grafo::removerAresta(Aresta* aresta)
{
    aresta->getVertice1()->removerAresta(aresta);
    aresta->getVertice2()->removerAresta(aresta);
    arestas.remove(aresta);

    delete aresta;
}

void Grafo::imprimirGrafo()
{
    std::list<Aresta*>::iterator it;

    for (it = this->arestas.begin(); it != this->arestas.end(); it++)
    {
        std::cout << "aresta: " << (*it)->getId() << " | ligação: " << (*it)->getVertice1()->getId() << " --- " << (*it)->getVertice2()->getId() << std::endl;
    }

    //std::cout << "Quantidade vertices no grafo: " << vertices.size() << std::endl;
    //std::cout << "Quantidade arestas no grafo: " << arestas.size() << std::endl;
}

