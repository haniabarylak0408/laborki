#include <iostream>
#include <fstream>

using namespace std;


struct Kontakty{

string imie;
string nazwisko;
int wiek;
string telefon;

};

const int zakres = 5;
Kontakty Tablica[zakres];

void WprowadzDane(int x);
void WprowadzImie(int x);
void WprowadzNazwisko(int x);
void WprowadzWiek(int x);
void WprowadzTelefon(int x);
void WyswietlDane(int x);
void Zapis(){

  ofstream strumien("wizytowka3.txt", ios::app);

    for (int i=0; i<zakres; i++){

        strumien << Tablica[i].imie <<endl;
        strumien << Tablica[i].nazwisko <<endl;
        strumien << Tablica[i].wiek <<endl;
        strumien << Tablica[i].telefon <<endl;
    }
    strumien<< Tablica <<endl;


}


int main(){

    for (int i=0; i<zakres; i++){

        WprowadzDane(i);
    }

    for (int i=0; i<zakres; i++){

        WyswietlDane(i);
    }

    Zapis();

    return 0;
}


void WprowadzDane(int x){

   cout << "Prosze wprowadz dane osoby nr " << x+1 <<endl;
   WprowadzImie(x);
   WprowadzNazwisko(x);
   WprowadzWiek(x);
   WprowadzTelefon(x);

}

void WprowadzImie(int x){

   cout << "Podaj swoje imie: ";
   cin >> Tablica[x].imie;

}

void WprowadzNazwisko(int x){

   cout << "Podaj swoje nazwisko: ";
   cin >> Tablica[x].nazwisko;

}

void WprowadzWiek(int x){

   cout << "Podaj swoj wiek: ";
   cin >> Tablica[x].wiek;

}

void WprowadzTelefon(int x){

   cout << "Podaj swoj telefon: ";
   cin >> Tablica[x].telefon;

}

void WyswietlDane(int x){

cout << "Dane osoby nr " << x+1 <<endl;
cout << "Imie: " << Tablica[x].imie <<endl;
cout << "Nazwikso: " << Tablica[x].nazwisko <<endl;
cout << "Wiek: " << Tablica[x].wiek <<endl;
cout << "Telefon: " << Tablica[x].telefon <<endl;

}
