
#ifndef POO_2_MAGAZIN_H
#define POO_2_MAGAZIN_H

#include "Produs.h"
#include <memory>
#include <vector>

class Magazin {
    static std::vector<std::shared_ptr<Produs>> produse;
private:
    Magazin();
public:
    static void AddProdus( const std::shared_ptr<Produs>& produs);
    static void ShowAllProducs();
};
#endif //POO_2_MAGAZIN_H
