#include <iostream>

using namespace std;

class Osoba{

public:

   string imie, nazwisko, data_ur, miasto;
   char plec;
   int id;

   //statyczne deklaracje
   static int ostatni_id;
   static int ile_obiektow;
   static void Info();

   Osoba();
   Osoba(string imie, string nazwisko="Kowalski", string data_ur="nie podano");
  ~Osoba();

  void przedstaw();

};
