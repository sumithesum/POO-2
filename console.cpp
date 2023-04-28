#include "exceptii.h"
#include "console.h"

console::console(float pret,int cantitate ,const std::string marca, const std::string nume, const std::string procesor, int ram,
                 const std::string culoare) : Produs(pret,cantitate, marca, nume), procesor(procesor), ram(ram),
                                               culoare(culoare) {
    if(procesor == "" || culoare == "")
        throw NumeNull();
    if (ram <= 0)
        throw NrE0();
}
const std::string &console::getProcesor() const {
    return procesor;
}

void console::setProcesor(const std::string &procesor) {
    if(procesor == "")
        throw NumeNull();
    console::procesor = procesor;
}

int console::getRam() const {
    return ram;
}

void console::setRam(int ram) {
    if (ram <= 0)
        throw NrE0();
    console::ram = ram;
}

const std::string &console::getCuloare() const {
    return culoare;
}

void console::setCuloare(const std::string &culoare) {
    if(culoare == "")
        throw NumeNull();
    console::culoare = culoare;
}

void console::Print(std::ostream &os) const {
    Produs::Print(os);
    os << " procesor: " << procesor << " ram(GB): " << ram << " culoare: "<< culoare;
}

console &console::operator=(const console &j) {
    Produs::operator=(j);
    procesor = j.getProcesor();
    culoare = j.getCuloare();
    ram = j.ram;
    return *this;
}