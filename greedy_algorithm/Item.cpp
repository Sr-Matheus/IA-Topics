#include "item.h"


Item::Item() : id(0), peso(0), valor(0) {}

Item::~Item(){}

Item::Item(int id, int peso, int valor) : id(id), peso(peso), valor(valor) 
{
    this->f_heuristica();
}


int Item::getId() const { return id; }
int Item::getPeso() const { return peso; }
int Item::getValor() const { return valor;}
double Item::getHeuristica() const { return heuristica;}


void Item::setId(int newId) { id = newId; }
void Item::setPeso(int newPeso) { peso = newPeso; }
void Item::setValor(int newValor) { valor = newValor; }

int Item::f_heuristica()
{
    this->heuristica = ( this->peso*2 + this->valor*3 )/5;
}

void Item::imprime_item() const
{
    std::cout << "ID: " << this->getId() << ", Peso: " << this->getPeso() << ", Valor: " << this->getValor() << ", Heuristica: " << this->getHeuristica() <<std::endl;
}