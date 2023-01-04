#include <iostream>
#include "osoba.hpp"

using namespace std;

Osoba::Osoba(){

imie="nieznane";
nazwisko="nieznane";
miasto="nieznane";
data_ur="nieznana";
plec='X';
id=++ostatni_id;
ile_obiektow++;

}


Osoba::Osoba(string im, string n, string d){

imie=im;
nazwisko=n;
data_ur=d;
miasto="Poznan";
plec='X';
id=++ostatni_id;
ile_obiektow++;

}


Osoba::~Osoba(){

ile_obiektow--;

}

//definicja metody statycznej

int Osoba::ostatni_id;
int Osoba::ile_obiektow;
void Osoba::Info(){

   cout << "ostatni ID: " <<ostatni_id<<endl;

}

void Osoba::przedstaw(){

   cout << "ID: "<<id<<endl;
   cout << "Hej nazywam sie " <<imie<<" "<<nazwisko<<", jestem "<<plec<<endl;
   cout << "Moje miejsce zamieszkania to "<<miasto<<endl;
   cout << "Data urodzenia: " <<data_ur<<endl;

}
