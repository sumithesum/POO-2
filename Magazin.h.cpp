#include "Magazin.h"
#include "Produs.h"
#include <iostream>
#include <cstring>
#include <vector>
#include <string>
#include <set>

std::vector<std::shared_ptr<Produs>>Magazin:: produse;
Magazin::Magazin() = default;

void Magazin ::AddProdus(const std::shared_ptr<Produs> &produs) {
    produse.push_back(produs);
}

void Magazin::ShowAllProducs() {
    for (auto &produs : Magazin::produse) {
        std::cout << *produs << '\n';
    }
}