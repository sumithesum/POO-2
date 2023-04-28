#include <iostream>
#include "Joc.h"
#include "exceptii.h"
using namespace  std;

Joc::Joc(float pret,int cantitate ,const string marca, const string nume, float rating, int varstaMinima) : Produs(pret,cantitate ,marca,nume),rating(rating),varsta_minima(varstaMinima) {
    if (rating > 10 ||rating < 0 )
        throw RatingNegPoz();
    else
        Joc::rating = rating;
}

void Joc::setRating(float rating) {
    if (rating > 10 ||rating < 0 )
        throw RatingNegPoz();
    else
        Joc::rating = rating;
}

float Joc::getRating() const {
    return rating;
}

Joc &Joc::operator=(const Joc& j) {
    Produs::operator=(j);
    rating = j.rating;
    return *this;
}

void Joc::Print(std::ostream &os) const {
    Produs::Print(os);
    os<< " rating: " << rating << " varsta minima: "<<varsta_minima;
}






