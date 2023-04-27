#include "Produs.h"
#include "iostream"

using namespace std;

int main(){


    Produs joc(20,"GTA5");
    cout << joc<<endl;
    joc.setPret(2);
    string nume1 = "Salut";
    joc.setName(nume1);
    cout << joc<<endl;
    joc.Print(cout);
    return  0;
}