#include "Produs.h"
#include "console.h"
#include "ProdusType.h"
#include "Magazin.h"
#include "Joc.h"
#include "exceptii.h"
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int Meniu() {
    while(true){
    int aux;
    int optiune;
    cout << "Alegeti optiunea pe care o doriti:" << endl;
    cout << " 1.Adaugati si afisati un nou  produs." << endl;
    cout << " 2.Adaugati si afisati n produse." << endl;
    cout << " 3.Oprire" << endl;
    cout << "Alegeti ce optiune va doriti:";
    cin >> optiune;
        switch (optiune) {
        case 1:
           {
            int cantitate, pret, varstaMinima, ram;
            std::string nume, marca, procesor, culoare;
            float rating;
            int optiune;
            cout << "Daca doriti sa adaugati un joc apasati 1\n";
            cout << "Daca doriti sa adaugati o consola apasati 2\n";
            cin >> optiune;
            if (optiune == 1) {
                cout << "Numele:";
                cin >> nume;
                cout << endl;
                cout << "Cantitatea:";
                cin >> cantitate;
                cout << endl;
                cout << "Pret:";
                cin >> pret;
                cout << endl;
                cout << "Marca:";
                cin >> marca;
                cout << endl;
                cout << "Rating:";
                cin >> rating;
                cout << endl;
                cout << "Vaarsta Minima:";
                cin >> varstaMinima;
                cout << endl;
                cout << endl;
                try {
                    Produs *aux = new Joc(pret, cantitate, marca, nume, rating, varstaMinima);
                    Joc *j = dynamic_cast<Joc *>(aux);
                    auto x = std::make_shared<Joc>(j->getPret(), j->getCantitate(), j->getMarca(), j->getName(),
                                                   j->getRating(), j->getVarstaMinima());
                    Magazin::AddProdus(x);
                }
                catch (const RatingNegPoz &e) {
                    cout << e.what() << "Ajustam ratingul sa fie intr [0,10]\n";
                    if (rating < 0)
                        rating = 0;
                    else if (rating > 10)
                        rating = 10;


                }
                catch (const NumeNull &e) {
                    cout << e.what() << "Intrudceti un nume diferit \n";
                    cin >> nume;
                    while (nume == "") {
                        cout << e.what() << "Intrudceti un nume diferit \n";
                        cin >> nume;
                    }


                }
                catch (const NrE0 &e) {
                    cout << e.what() << "Intrudceti un numar diferit \n";
                    if (pret < 0)
                        cin >> pret;
                    while (pret < 0) {
                        cout << e.what() << "Intrudceti un numar diferit \n";
                        cin >> pret;
                    }
                    if (cantitate < 0)
                        cin >> pret;
                    while (cantitate < 0) {
                        cout << e.what() << "Intrudceti un numar diferit \n";
                        cin >> cantitate;
                    }

                }

            }
            else {
                cout << "Numele:";
                cin >> nume;
                cout << endl;
                cout << "Cantitatea:";
                cin >> cantitate;
                cout << endl;
                cout << "Pret:";
                cin >> pret;
                cout << endl;
                cout << "Marca:";
                cin >> marca;
                cout << endl;
                cout << "Ram:";
                cin >> ram;
                cout << endl;
                cout << "Culoare:";
                cin >> culoare;
                cout << endl;
                cout << "Procesor:";
                cin >> procesor;
                try {
                    Produs *aux = new Console(pret, cantitate, marca, nume, procesor, ram, culoare);
                    Console *j = dynamic_cast<Console *>(aux);
                    auto x = std::make_shared<Console>(j->getPret(), j->getCantitate(), j->getMarca(), j->getName(),
                                                       j->getProcesor(), j->getRam(), j->getCuloare());
                    Magazin::AddProdus(x);
                }
                catch (const NumeNull &e) {
                    cout << e.what() << "Intrudceti un nume diferit \n";
                    cin >> nume;
                    while (nume == "") {
                        cout << e.what() << "Intrudceti un nume diferit \n";
                        cin >> nume;
                    }


                }
                catch (const NrE0 &e) {
                    cout << e.what() << "Intrudceti un numar diferit \n";
                    if (pret < 0)
                        cin >> pret;
                    while (pret < 0) {
                        cout << e.what() << "Intrudceti un numar diferit \n";
                        cin >> pret;
                    }
                    if (cantitate < 0)
                        cin >> pret;
                    while (cantitate < 0) {
                        cout << e.what() << "Intrudceti un numar diferit \n";
                        cin >> cantitate;
                    }
                }


            }
            Magazin::ShowAllProducs();
            break;}
            case 2:{
                int  n;
                cout << "Cate produse vreti sa adaugati?";
                cin >>n;
                cout << endl;

                for (int i = 0;i<n;i++)
                {
                    int cantitate, pret, varstaMinima, ram;
                    std::string nume, marca, procesor, culoare;
                    float rating;
                    int optiune;
                    cout << "Daca doriti sa adaugati un joc apasati 1\n";
                    cout << "Daca doriti sa adaugati o consola apasati 2\n";
                    cin >> optiune;
                    if (optiune == 1) {
                        cout << "Numele:";
                        cin >> nume;
                        cout << endl;
                        cout << "Cantitatea:";
                        cin >> cantitate;
                        cout << endl;
                        cout << "Pret:";
                        cin >> pret;
                        cout << endl;
                        cout << "Marca:";
                        cin >> marca;
                        cout << endl;
                        cout << "Rating:";
                        cin >> rating;
                        cout << endl;
                        cout << "Vaarsta Minima:";
                        cin >> varstaMinima;
                        cout << endl;
                        cout << endl;
                        try {
                            Produs *aux = new Joc(pret, cantitate, marca, nume, rating, varstaMinima);
                            Joc *j = dynamic_cast<Joc *>(aux);
                            auto x = std::make_shared<Joc>(j->getPret(), j->getCantitate(), j->getMarca(), j->getName(),
                                                           j->getRating(), j->getVarstaMinima());
                            Magazin::AddProdus(x);
                        }
                        catch (const RatingNegPoz &e) {
                            cout << e.what() << "Ajustam ratingul sa fie intr [0,10]\n";
                            if (rating < 0)
                                rating = 0;
                            else if (rating > 10)
                                rating = 10;


                        }
                        catch (const NumeNull &e) {
                            cout << e.what() << "Intrudceti un nume diferit \n";
                            cin >> nume;
                            while (nume == "") {
                                cout << e.what() << "Intrudceti un nume diferit \n";
                                cin >> nume;
                            }


                        }
                        catch (const NrE0 &e) {
                            cout << e.what() << "Intrudceti un numar diferit \n";
                            if (pret < 0)
                                cin >> pret;
                            while (pret < 0) {
                                cout << e.what() << "Intrudceti un numar diferit \n";
                                cin >> pret;
                            }
                            if (cantitate < 0)
                                cin >> pret;
                            while (cantitate < 0) {
                                cout << e.what() << "Intrudceti un numar diferit \n";
                                cin >> cantitate;
                            }

                        }

                    }
                    else {
                        cout << "Numele:";
                        cin >> nume;
                        cout << endl;
                        cout << "Cantitatea:";
                        cin >> cantitate;
                        cout << endl;
                        cout << "Pret:";
                        cin >> pret;
                        cout << endl;
                        cout << "Marca:";
                        cin >> marca;
                        cout << endl;
                        cout << "Ram:";
                        cin >> ram;
                        cout << endl;
                        cout << "Culoare:";
                        cin >> culoare;
                        cout << endl;
                        cout << "Procesor:";
                        cin >> procesor;
                        try {
                            Produs *aux = new Console(pret, cantitate, marca, nume, procesor, ram, culoare);
                            Console *j = dynamic_cast<Console *>(aux);
                            auto x = std::make_shared<Console>(j->getPret(), j->getCantitate(), j->getMarca(), j->getName(),
                                                               j->getProcesor(), j->getRam(), j->getCuloare());
                            Magazin::AddProdus(x);
                        }
                        catch (const NumeNull &e) {
                            cout << e.what() << "Intrudceti un nume diferit \n";
                            cin >> nume;
                            while (nume == "") {
                                cout << e.what() << "Intrudceti un nume diferit \n";
                                cin >> nume;
                            }


                        }
                        catch (const NrE0 &e) {
                            cout << e.what() << "Intrudceti un numar diferit \n";
                            if (pret < 0)
                                cin >> pret;
                            while (pret < 0) {
                                cout << e.what() << "Intrudceti un numar diferit \n";
                                cin >> pret;
                            }
                            if (cantitate < 0)
                                cin >> pret;
                            while (cantitate < 0) {
                                cout << e.what() << "Intrudceti un numar diferit \n";
                                cin >> cantitate;
                            }
                        }


                    }
                }
                Magazin::ShowAllProducs();
                break;}
                case 3:{
                    return 0;
                    break;
                }

    }
}}
int main(){
    Meniu();
    return 0;
}