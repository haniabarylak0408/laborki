#include <iostream>

using namespace std;


//KLASA WYJATEK
class Wyjatek{

private:
    int numer;
    string opis;

public:

    Wyjatek(int num, string des){

    numer = num;
    opis = des;
    };

    ~Wyjatek() {cout << "Jestem w destruktorze klasy wyjatek" << endl;}
    int getNum() {return numer;}
    string getOpis() {return opis;}
    };




//KLASA STOS
class Stos
{
	private:
		int *tablica;
	public:
		Stos() {
			cout << "Jestem w konstruktorze klasy stos" << endl;
			tablica = new int[10];
			};
		~Stos() {
			cout << "Jestem w destruktorze klasy stos" << endl;
			delete[] tablica;
			};
		void push(int arg, int i) {
			if(i>9) {
				Wyjatek *wyjatek = new Wyjatek(1, "Blad metody PUSH");
				throw wyjatek;
			}
			tablica[i]=arg;
		};
		int pop(int i) {
			if(i>9) {
				Wyjatek *wyjatek = new Wyjatek(2, "Blad metody POP");
				throw wyjatek;
			}
			return tablica[i];
		}
};

//KLASA SYMULACJA

class Symulacja
{
		Stos* stos;
	public:
		Symulacja(){ cout << "Konstruktor symulacja " <<endl; stos = new Stos();};
		~Symulacja(){ cout << "Destruktor symulacja" << endl; delete stos;}
		void symulacja();
};

void Symulacja::symulacja()
{
	for(int i=0;i<=10;i++) {
		try { stos->push(5,i); }
		catch (Wyjatek* w) {
			if (w != NULL) {
				cout << w->getOpis() << " nr bledu : "<< w->getNum() <<endl;
				delete w;
			}
		}
	}

	for(int i=0;i<=10;i++) {
		try { stos->pop(i); }
		catch(Wyjatek* w) {
			if (w != NULL) {
			cout << w->getOpis() << " nr bledu: "<< w->getNum() <<endl;
			delete w;
			}
		}
	}
}
int main()
{
    Symulacja symulacja;
	symulacja.symulacja();

    return 0;
}
