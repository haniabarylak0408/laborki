#include <iostream>

using namespace std;


class Punkt3D{

public:
    float x, y, z;
    Punkt3D(){

    x=y=z=0.0;

    };
    Punkt3D operator+(int arg);
    Punkt3D operator-(int arg);

};

class Wektor{

public:
    float dx, dy,dz;
    Wektor(){

    dx=0.0;
    dy=0.0;
    dz=0.0;

    };
};

Punkt3D Punkt3D::operator+(int arg){

Punkt3D tmp;
tmp.x=x+arg;
tmp.y=y+arg;
tmp.z=z+arg;
return tmp;
}

Punkt3D Punkt3D::operator-(int arg){

x=x-arg;
y=y-arg;
z=z-arg;
return *this;
}

//DODANIE OBIEKTU KLASY WEKTOR DO OBIEKTU KLASY PUNKT3D

Punkt3D operator+(Punkt3D pkt, Wektor wek){


pkt.x=+wek.dx;
pkt.y=+wek.dy;
pkt.z=+wek.dz;
return pkt;
}

//OPERATOR MNOZENIA SKALARNEGO

int operator*(Wektor wek1, Wektor wek2){

int tmp;
tmp = wek1.dx*wek2.dx + wek1.dy*wek2.dy + wek1.dz*wek2.dz;
return tmp;

}

//OPERATORY WYSWIETLANIA KLASY PUNKT3D

ostream& operator<<(ostream &wyjscie, Punkt3D &s ){

wyjscie<<"["<<s.x<<", "<<s.y<<", "<<s.z<<"]"<<endl;
return wyjscie;

}

//OPERATORY WYSWIETLANIA KLASY WEKTOR

ostream& operator<<(ostream &wyjscie, Wektor &s ){

wyjscie<<"["<<s.dx<<", "<<s.dy<<", "<<s.dz<<"]"<<endl;
return wyjscie;

}





int main()
{

    Punkt3D a;
    a.x=3.0;
    a.y=4.0;
    a.z=5.0;

    Punkt3D b;
    b.x=3.0;
    b.y=7.0;
    b.z=9.0;

    Wektor c;
    c.dx=1.0;
    c.dy=2.0;
    c.dz=3.0;

    Wektor d;
    c.dx=4.0;
    c.dy=5.0;
    c.dz=6.0;

    cout << "Teraz wyswietlimy sobie wszystkie dane: " <<endl;
    cout << "Punkt a = " <<a<<endl;
    cout << "Punkt b = " <<b<<endl;
    cout << "Wektor c = " <<c<<endl;
    cout << "Wektor d = " <<d<<endl<<endl;

    cout << "A teraz zrobimy sobie kilka dzialan na naszych punktach i wektorach: "<<endl;

    cout << "Translacja: "<<endl;
    Punkt3D translacja = a+c;
    cout << translacja<<endl;

    cout << "Skalar: "<<endl;
    int skalar = c*d;
    cout << skalar <<endl;

    cout << "Punkt b + skalar: "<<endl;
    Punkt3D nowy = b+skalar;
    cout << nowy;








    return 0;
}
