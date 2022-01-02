//
// Created by stefa on 11/26/2021.
//

#ifndef LAB6_Vector_H
#define LAB6_Vector_H
#include <iostream>
#include "Fractie.h"
#include "Nr_Complex.h"
using namespace  std;

template <class X>
class Vector
{  private:
    int dim;
    X *buf;
  public:
    Vector();
    Vector(int,X*);
    ~Vector();
    void ordonare();
    void afisare();
    X& operator=(X&);

};



#endif //LAB6_TEMPCLASS_H
