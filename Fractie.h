//
// Created by stefa on 11/26/2021.
//

#ifndef LAB6_FRACTIE_H
#define LAB6_FRACTIE_H

#include <iostream>
#include <cstring>
using namespace  std;

class Fractie {
private:
    int a; //numarator
    int b; //numitor
public:
    Fractie(int aa=0,int bb=0); // constructor cu parametrii impliciti
    Fractie(const Fractie&);// constructor de copiere
    Fractie & operator=(const Fractie &); //se intoarce referinta la obiectul modificat pt a putea face op de genul : int a,b,c,d ;
    ~Fractie();
    bool operator >(const Fractie&);// supradefinire operator >
    friend void interschimbare(Fractie&, Fractie&);
    friend ostream& operator<<(ostream&,Fractie&);
};


#endif //LAB6_FRACTIE_H
