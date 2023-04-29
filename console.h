
#ifndef POO_2_CONSOLE_H
#define POO_2_CONSOLE_H

#include "Produs.h"
#include <string>
#include <ostream>



class Console: public Produs{
    std::string procesor;
    int ram;
    std::string culoare;
public:
    Console(float pret, int cantitate, const std::string marca, const std::string nume,const std::string procesor, int ram, const std::string culoare) ;



    const std::string &getProcesor() const;

    void setProcesor(const std::string &procesor);

    int getRam() const;

    void setRam(int ram);

    const std::string &getCuloare() const;

    void setCuloare(const std::string &culoare);

    void Print(std::ostream &os) const override;

    Console& operator=(const Console& c);
};



#endif //POO_2_CONSOLE_H
