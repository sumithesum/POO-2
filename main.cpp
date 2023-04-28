#include "Produs.h"
#include "ProdusType.h"
#include <iostream>
#include "Joc.h"
#include <string>
#include "exceptii.h"
#include <fstream>
#include <vector>
#include "console.h"
#include <bits/stdc++.h>
using namespace std;

ifstream f("tastatura");
/*
void adaugati1produs(){

        int optiune;
        cout << "Daca doriti sa adaugati un joc apasati 1\n";
        cout << "Daca doriti sa adaugati o consola apasati 2\n";
        f >> optiune;
        if(optiune == 1) {
            int cantitate, pret, varstaMinima;
            std::string nume, marca,procesor,culoare;
            float rating;
            cout << "Numele:";
            f >> nume;
            cout << endl;
            cout << "Cantitatea:";
            f >> cantitate;
            cout << endl;
            cout << "Pret:";
            f >> pret;
            cout << endl;
            cout << "Procesor:";
            f >> marca;
            cout << endl;
            cout << "Ram:";
            f >> rating;
            cout << endl;
            cout << "Culoare:";
            f >> varstaMinima;
            cout << endl;
            try {
                Produs *aux = new Joc(pret, cantitate, marca, nume, rating, varstaMinima);
                Joc *j = dynamic_cast<Joc*>(aux);
                auto x = std::make_shared<Joc>(j->getPret(),j->getCantitate(),j->getMarca(),j->getName(),j->getRating(),j->getVarstaMinima())
                Magazin::AddProdus(x);
            }
            catch (const RatingNegPoz &e) {
                cout << e.what()<<"Ajustam ratingul sa fie intr [0,10]\n";
                if(rating < 0)
                    rating = 0;
                else if (rating > 10)
                    rating = 10;


            }
            catch (const NumeNull &e) {
                cout <<e.what()<<"Intrudceti un nume diferit \n";
                f >> nume;
                while (nume == "") {
                    cout << e.what() << "Intrudceti un nume diferit \n";
                    f >> nume;
                }


        }
            catch (const NrE0 &e) {
                cout <<e.what()<<"Intrudceti un numar diferit \n";
                if(pret  < 0 )
                    f >> pret;
                while (pret <0) {
                    cout << e.what() << "Intrudceti un numar diferit \n";
                    f >> pret;
                }
                if(cantitate < 0 )
                    f >> pret;
                while (cantitate <0) {
                    cout << e.what() << "Intrudceti un numar diferit \n";
                    f >> cantitate;
                }
                cout << aux;
            }
          else if(optiune == 2)
            {
                int cantitate, pret, varstaMinima;
                std::string nume, marca;
                float rating;
                cout << "Numele:";
                f >> nume;
                cout << endl;
                cout << "Cantitatea:";
                f >> cantitate;
                cout << endl;
                cout << "Pret:";
                f >> pret;
                cout << endl;
                cout << "Marca:";
                f >> marca;
                cout << endl;
                cout << "Rating:";
                f >> rating;
                cout << endl;
                cout << "Varsta minima:";
                f >> varstaMinima;
                cout << endl;
                try { Produs *aux = new Joc(pret, cantitate, marca, nume, rating, varstaMinima);
                    std::unique_ptr<Joc> aux1 = std::make_unique<Joc>(pret, cantitate, marca, nume, rating, varstaMinima);
                }
                catch (const RatingNegPoz &e) {
                    cout << e.what()<<"Ajustam ratingul sa fie intr [0,10]\n";
                    if(rating < 0)
                        rating = 0;
                    else if (rating > 10)
                        rating = 10;


                }
                catch (const NumeNull &e) {
                    cout <<e.what()<<"Intrudceti un nume diferit \n";
                    f >> nume;
                    while (nume == "") {
                        cout << e.what() << "Intrudceti un nume diferit \n";
                        f >> nume;
                    }


                }
                catch (const NrE0 &e) {
                    cout <<e.what()<<"Intrudceti un numar diferit \n";
                    if(pret  < 0 )
                        f >> pret;
                    while (pret <0) {
                        cout << e.what() << "Intrudceti un numar diferit \n";
                        f >> pret;
                    }
                    if(cantitate < 0 )
                        f >> pret;
                    while (cantitate <0) {
                        cout << e.what() << "Intrudceti un numar diferit \n";
                        f >> cantitate;
                    }
                }

                cout << aux;

        }


};



void Meniu(){
    int optiune;
    cout<<"Alegeti optiunea pe care o doriti:" <<endl;
    cout<<" 1.Adaugati si afisati un nou  produs."<<endl;
    cout<<" 2.Adaugati si afisati n produse."<<endl;
    cout<<" 3.Oprire"<<endl;
    cout << "Alegeti ce optiune va doriti:";f >> optiune;
    switch(optiune){
        case 1:
            adaugare1Produs();
            break;
        case 2:
            adaugareNProduse();
            break;;
        case 3:
            cout << endl;
            cout << "Paaaaaaaaaaaaaaaaaaaa";
            return 0;

    }
}


*/
int main(){
    Joc s(3, 2, "sa", "sal", 2.6, 1);
    cout << s;
    //Meniu();
    return 0;
}