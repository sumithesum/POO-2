
#ifndef POO_2_PRODUS_H
#define POO_2_PRODUS_H
#include <string>
#include <ostream>

class Produs{
protected:
    float pret;
    std :: string nume;
public:

    Produs(float pret, const std::string &nume);

    const std::string &getName() const;

    void setName(std :: string &nume);

    float getPret() const;

    void setPret(float pretu);

    virtual void Print(std::ostream &os) const;

    virtual ~Produs();

    friend std::ostream &operator<<(std::ostream &os, const Produs &produs);
};



#endif //POO_2_PRODUS_H
