#ifndef POO_2_JOC_H
#define POO_2_JOC_H

#include "Produs.h"
#include <string>
#include <ostream>

class Joc : public Produs{
    float rating;
    int varsta_minima;
public:
    Joc(float pret,int cantitate , std::string marca,  std::string nume, float rating, int varstaMinima) ;

    float getRating() const ;

    void setRating(float rating) ;

    int getVarstaMinima() const;

    void setVarstaMinima(int varstaMinima);

    void Print(std::ostream &os) const override;

    Joc& operator=(const Joc& j);



};

#endif //POO_2_JOC_H
