#include "Console.h"
#include "exceptii.h"

Console::Console(float pret, int cantitate, const std::string marca, const std::string nume,
                 const std::string procesor, int ram, const std::string culoare) : Produs(pret, cantitate, marca,
                                                                                          nume), procesor(procesor),
                                                                                   ram(ram), culoare(culoare) {
    if(procesor == "" || culoare == "")
        throw NumeNull();
    if (ram <= 0)
        throw NrE0();
}

const std::string &Console::getProcesor() const {
    return procesor;
}

void Console::setProcesor(const std::string &procesor) {
    if(procesor == "")
        throw NumeNull();
    Console::procesor = procesor;
}

int Console::getRam() const {
    return ram;
}

void Console::setRam(int ram) {
    if (ram <= 0)
        throw NrE0();
    Console::ram = ram;
}

const std::string &Console::getCuloare() const {
    return culoare;
}

void Console::setCuloare(const std::string &culoare) {
    if(culoare == "")
        throw NumeNull();
    Console::culoare = culoare;
}

void Console::Print(std::ostream &os) const {
    Produs::Print(os);
    os << " procesor: " << procesor << " ram(GB): " << ram << " culoare: "<< culoare;
}

Console &Console::operator=(const Console &j) {
    Produs::operator=(j);
    procesor = j.getProcesor();
    culoare = j.getCuloare();
    ram = j.ram;
    return *this;
}

