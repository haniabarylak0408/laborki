#include <iostream>
#include <stdlib.h>

using namespace std;

class Zwierze{

public:
   Zwierze() {cout << "Jestem w konstruktorze klasy Zwierze"<<endl;};
   virtual ~Zwierze(){cout << "Jestem w destruktorze klasy Zwierze"<<endl;};
   virtual void Opis() {cout << "KLASA ZWIERZE"<<endl;};

};

class Ssak : public Zwierze{

public:
   Ssak(){cout << "Jestem w konstruktorze klasy Ssak"<<endl;};
   ~Ssak(){cout << "Jestem w destruktorze klasy Ssak"<<endl;};
   virtual void Opis() {cout << "KLASA SSAK"<<endl;};

};

class Ptak : public Zwierze{

public:
   Ptak(){cout << "Jestem w konstruktorze klasy Ptak"<<endl;};
   ~Ptak(){cout << "Jestem w destruktorze klasy Ptak"<<endl;};
   virtual void Opis() {cout << "KLASA PTAK"<<endl;};

};

class Czlowiek : public Ssak{

public:
   Czlowiek(){cout << "Jestem w konstruktorze klasy Czlowiek"<<endl;};
   ~Czlowiek(){cout << "Jestem w destruktorze klasy Czlowiek"<<endl;};
   virtual void Opis() {cout << "KLASA CZLOWIEK"<<endl;};

};


Zwierze *funkcja (int wartosc){

switch(wartosc){

case 0:{
    return new Zwierze;
}
break;

case 1:{
    return new Ssak;
}
break;

case 2:{
    return new Ptak;
}
break;

case 3:{
    return new Czlowiek;
}
break;

case 4:{
    return NULL;
}
break;
}

};



int main(){

    int ilosc_it, akt_it, los;


    Zwierze *wsk = NULL;

    cout << "Podaj ilosc iteracji petli i zatwierdz klawiszem enter: " <<endl;
    cin >> ilosc_it;

    for( int akt_it=0; akt_it<ilosc_it; akt_it++){

       los=rand()%5;
       cout << "Wylosowano: " <<los<<endl;
       wsk=funkcja(los);

       if (wsk!=NULL){

        wsk->Opis();

       }

       else{

        cout << "NULL - brak obslugi - pusty wskaznik" <<endl;

       }

       delete wsk;

  }

   return 0;
}
