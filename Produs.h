
#ifndef POO_2_PRODUS_H
#define POO_2_PRODUS_H
#include <string>
#include <ostream>
#include <istream>
#include "ProdusType.h"

class Produs{
protected:
    int cantitate;
    float pret;
    std :: string nume;
    std :: string marca;
public:
    Produs(float pret,int cantitate,std :: string marca ,std::string nume);

    int getCantitate() const;

    void setCantitate(int cantitate);

    const std::string &getName() const;

    void setName(std :: string &nume);

    float getPret() const;

    void setPret(float pretu);


    const std::string &getMarca() const;

    void setMarca(std :: string &marca);


    virtual void Print(std::ostream &os) const;

    virtual ~Produs();

    friend std::ostream &operator<<(std::ostream &os, const Produs &produs);



    virtual Produs &operator=(const Produs &p);
};



#endif //POO_2_PRODUS_H
