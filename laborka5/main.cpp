#include <iostream>
#include <fstream>
#include <stdio.h>
#include "osoba.hpp"

using namespace std;

void ZapiszPlik();
int OdczytPliku();


int main()
{
    cout <<endl << "Wartosc odczytana z pliku: " << OdczytPliku()<< endl;
    Osoba::ostatni_id=10;
    ZapiszPlik();

    Osoba ludek1;
    ludek1.przedstaw();
    Osoba::Info();

    Osoba ludek2("Hania", "Barylak","4 sierpnia 2003");
    ludek2.przedstaw();
    Osoba::Info();

        return 0;


}


void ZapiszPlik()
{
    ofstream zapis ("plik.txt", ios::trunc);
    zapis << Osoba::ostatni_id;
    zapis.close();
}

int OdczytPliku()
{
    string zmienna;
    ifstream odczyt ("plik.txt");
    odczyt >> zmienna;
    return atoi(zmienna.c_str());
}

