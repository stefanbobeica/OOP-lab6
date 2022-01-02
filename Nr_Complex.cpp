
#include "Nr_Complex.h"


Nr_Complex::Nr_Complex() {
 real=0;
 imaginar=0;
}
Nr_Complex::Nr_Complex(int real, int imaginar){
this->real=real;
this->imaginar=imaginar;
}
Nr_Complex::Nr_Complex(Nr_Complex const &obj) {
  this->real=obj.real;
  this->imaginar=obj.imaginar;
}
Nr_Complex &Nr_Complex::operator=(const Nr_Complex & obj) {
    this->imaginar=obj.imaginar;
    this->real=obj.real;
    return *this;
}

bool operator>(Nr_Complex& obj1, Nr_Complex& obj2) {

 return(obj1.real > obj2.real);

}

Nr_Complex::~Nr_Complex() {
//nimic alocat dinamic
}



ostream &operator<<(ostream& out, Nr_Complex &obj){
    out<<obj.real<<" + "<<obj.imaginar<<"i ";
}
