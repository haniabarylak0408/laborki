#include <iostream>

using namespace std;


class Zwierzak{

public:
  float masa;
  int wiek;
  void Patrz();
  void Oddychaj();
  void Zyj();
  Zwierzak();
  ~Zwierzak();

};

class Ssak : public Zwierzak{

public:
Ssak();
~Ssak();

void Biegaj();

};


class Ptak : public Zwierzak{

public:
Ptak();
~Ptak();

void Lataj();

};

class Ryba : public Zwierzak{

public:
Ryba();
~Ryba();

void Plywaj();

};

class Welonek : public Ryba{

public:
Welonek();
~Welonek();

};

class Nemo : public Ryba{

public:
Nemo();
~Nemo();

void Zyj();

};

class Karp : public Ryba{

public:
Karp();
~Karp();

};



class Lew : public Ssak{

public:
Lew();
~Lew();

};

class Pies : public Ssak{

public:
Pies();
~Pies();

};

class Slon : public Ssak{

public:
Slon();
~Slon();

};


class Papuga : public Ptak{

public:
Papuga();
~Papuga();

};

class Kanarek : public Ptak{

public:
Kanarek();
~Kanarek();

};

class Golab : public Ptak{

public:
Golab();
~Golab();
};
