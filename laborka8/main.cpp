#include <iostream>

using namespace std;



class Element{

public:
    string nazwa;
    Element(){

      nazwa = "Element";
      prad = 0;
      napiecie = 0;

    };
    virtual ~Element(){}
    virtual void wymuszenie(int napiecie = 0 , int prad = 0) = 0;
    friend int obwod (Element * wsk1, Element * wsk2);

protected:
    int prad;
    int napiecie;

};


class Rezystor :public Element{


public:
    Rezystor(string arg_nazwa, int R){

    nazwa = arg_nazwa;
    rezystencja = R;
    }

    void wymuszenie(int arg_prad=0, int arg_napiecie=0){

    prad=arg_prad;
    napiecie= arg_napiecie;
    cout << "Jestem elementem klasy REZYSTOR. Nazwa: "<<nazwa <<endl;
    cout << "Mam U = " << napiecie << " oraz I = " << prad <<endl<<endl;
    }
protected:
    int rezystencja;


};

class Cewka :public Element{


public:
    Cewka(string arg_nazwa, int L){

    nazwa = arg_nazwa;
    indukcyjnosc = L;
    }

    void wymuszenie(int arg_prad=0, int arg_napiecie=0){

    prad=arg_prad;
    napiecie= arg_napiecie;
    cout << "Jestem elementem klasy CEWKA. Nazwa: "<<nazwa<<endl;
    cout << "Mam U = " << napiecie << " oraz I = " << prad <<endl<<endl;
    }

protected:
    int indukcyjnosc;
};




class Kondensator :public Element{


public:
    Kondensator(string arg_nazwa, int C){

    nazwa = arg_nazwa;
    pojemnosc = C;
    }

    void wymuszenie(int arg_prad=0, int arg_napiecie=0){

    prad=arg_prad;
    napiecie= arg_napiecie;
    cout << "Jestem elementem klasy KONDENSATOR. Nazwa: "<<nazwa<<endl;
    cout << "Mam U = " << napiecie << " oraz I = " << prad<<endl<<endl;
    }

protected:
    int pojemnosc;
};

//funkcja zaprzyjazniona

int obwod(Element *wsk1, Element *wsk2){

if (wsk1->prad==wsk2->prad) return 1;
if (wsk1->napiecie==wsk2->napiecie) return 2;
if ((wsk1->prad==wsk2->prad)&&(wsk1->napiecie==wsk2->napiecie)) return 3;
return 0;

}


int main()
{

    cout << "ZACZYNAMY PRZEDNIA ZABAWE HEHE" <<endl;

    Element *tab[5];
    tab[0] = new Cewka("L1",1);
    tab[1] = new Kondensator("C1",2);
    tab[2] = new Rezystor("R1",5);
    tab[3] = new Kondensator("C2",2);
    tab[4] = new Cewka("L2",10);

    tab[0]->wymuszenie(5,10);
    tab[1]->wymuszenie(3,10);
    tab[2]->wymuszenie(3,10);
    tab[3]->wymuszenie(5,1);
    tab[4]->wymuszenie(2,2);

    cout << endl;
    for (int i=0; i<5; i++){

        for (int j=0;j<5;j++){

            if(i<j){

                switch(obwod(tab[i], tab[j]))
                {
                    case 1: { cout << "Element " << tab[i]->nazwa << " oraz element " << tab[j]->nazwa << " sa polaczone szeregowo (maja identyczne prad)" << endl; break; }
                    case 2: { cout << "Element " << tab[i]->nazwa << " oraz element " << tab[j]->nazwa << " sa polaczone rownolegle (maja identyczne napiecie)"<<endl; break;}
                    case 3: { cout << "Element " << tab[i]->nazwa << " oraz element " << tab[j]->nazwa << " maja identyczne prady i napiecia " << j << endl; break;}
                }
            }
        }
    }

    for (int i=0; i<5; i++){

            delete tab[i];
    }

    return 0;
}
