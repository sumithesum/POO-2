
#ifndef POO_2_EXCEPTII_H
#define POO_2_EXCEPTII_H
#include <cstring>
#include <iostream>
class NrE0 : public std::exception {
public:
    NrE0() = default;

    const char* what() const noexcept override  {
        return "Valoarea nu poate fi 0.";
    }
};

class NumeNull : public std::exception {
public:
    NumeNull() = default;

    const char* what() const noexcept override  {
        return "Numle nu poate lipsi.";
    }
};
class RatingNegPoz : public std::exception {
public:
    RatingNegPoz() = default;

    const char* what() const noexcept override  {
        return "Ratingul trebuie sa fie in intervalul [0.10].";
    }
};
#endif //POO_2_EXCEPTII_H
