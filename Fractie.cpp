
#include "Fractie.h"
using namespace  std;

Fractie::Fractie(int a, int b):a(a),b(b) {

}
Fractie::~Fractie() {
//nu am nimic alocat dinamic
}
Fractie::Fractie(const Fractie &obj):a(obj.a),b(obj.b) {
}
Fractie& Fractie::operator=(const Fractie &obj) {
    a = obj.a;
    b = obj.b;
    return *this;
}
bool Fractie::operator>(const Fractie & obj){
    return( (float)a/b>(float)obj.a/obj.b);
}



ostream &operator<<(ostream &out, Fractie &obj) {
    out<<(float)obj.a/obj.b;
    return out;
}
