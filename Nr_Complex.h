//
// Created by stefa on 11/26/2021.
//

#ifndef LAB6_NR_COMPLEX_H
#define LAB6_NR_COMPLEX_H
#include <iostream>
#include <cstring>
#include <fstream>
using namespace  std;
class Nr_Complex {
private:
    int real;
    int imaginar;
public:
    Nr_Complex();
    Nr_Complex(int,int);
    Nr_Complex( const Nr_Complex&);
    ~Nr_Complex();
    Nr_Complex& operator=(const Nr_Complex&);
    friend bool operator >(Nr_Complex&,Nr_Complex&);
    friend ostream& operator<<   (ostream& out, Nr_Complex& obj);
};


#endif //LAB6_NR_COMPLEX_H
