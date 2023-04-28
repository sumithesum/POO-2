#include <iostream>
#include "Produs.h"
#include "exceptii.h"
using namespace  std;



Produs::Produs(float pret,int cantitate,std :: string marca ,string nume) : pret(pret),cantitate(cantitate),marca(marca), nume(nume) {
    /*if(pret <= 0)
        throw NrE0();
    if(cantitate <= 0)
        throw NrE0();
    if(marca == "" || nume == "")
        throw NumeNull();*/
}

const std::string &Produs::getName() const {
    return nume;
}

float Produs::getPret() const {
    return pret;
}

void Produs::setName(std::string &nume) {
    if( nume == "")
        throw NumeNull();
    Produs::nume = nume;
}

void Produs::setPret(float pretu) {
    if(pretu <= 0)
        throw NrE0();
    Produs::pret = pretu;
}

const std::string &Produs::getMarca() const {
    return marca;
}

void Produs::setMarca(std::string &Marca) {
    if(marca == "")
        throw NumeNull();
    Produs::marca = Marca;
}

void Produs::Print(std::ostream &os) const {
    os << "nume: " << nume << " marca: " << marca<< " pret: " << pret << " cantitate: "<< cantitate ;
}

ostream &operator<<(ostream &os, const Produs &produs) {
    produs.Print(os);
    return os;
}

Produs::~Produs() = default;

Produs &Produs::operator=(const Produs &p) {
    nume = p.getName();
    marca = p.getMarca();
    pret = p.pret;
    cantitate = p.cantitate;
    return *this;
}

int Produs::getCantitate() const {
    return cantitate;
}

void Produs::setCantitate(int cantitate) {
    if(cantitate <= 0)
        throw NrE0();
    Produs::cantitate = cantitate;
}




