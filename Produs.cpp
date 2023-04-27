#include <iostream>
#include "Produs.h"

using namespace  std;



Produs::Produs(float pret, const string &nume) : pret(pret), nume(nume) {}

const std::string &Produs::getName() const {
    return nume;
}

float Produs::getPret() const {
    return pret;
}

void Produs::setName(std::string &nume) {
    Produs::nume = nume;
}

void Produs::setPret(float pretu) {
    Produs::pret = pretu;
}

void Produs::Print(std::ostream &os) const {
    os << "pret: " << pret << " nume: " << nume <<   endl;
}

ostream &operator<<(ostream &os, const Produs &produs) {
    produs.Print(os);
    return os;
}

Produs::~Produs() = default;
