
#include "Nr_Complex.h"
#include "Vector.h"
#include "Fractie.h"

using namespace  std;

int main() {
    int int_arr[5]={7,8,9,3,5};
    Vector<int> v_i(5,int_arr);
    cout<<"--Vector de int neordonat--"<<endl;
    v_i.afisare();
    cout<<"--Vector de int ordonat--"<<endl;
    v_i.ordonare();
    v_i.afisare();

    double double_arr[6]={7.6,3.9,3.2,5,9.2};
    Vector<double> v_d(5,double_arr);
    cout<<"--Vector de double neordonat--"<<endl;
    v_d.afisare();
    v_d.ordonare();
    cout<<"--Vector de double ordonat--"<<endl;
    v_d.afisare();

    Fractie arr_fractie[5];
    Fractie a(1,2);
    Fractie b(3, 4);
    Fractie c(9, 4);
    Fractie f(8, 9);
    Fractie e(3, 5);
    arr_fractie[0]=a;
    arr_fractie[1]=b;
    arr_fractie[2]=c;
    arr_fractie[3]=e;
    arr_fractie[4]=f;
    Vector<Fractie> v_f(6,arr_fractie);
    cout<<"--Vector de Fractie neordonat--"<<endl;
    v_f.afisare();
    v_f.ordonare();
    cout<<"--Vector de Fractie ordonat--"<<endl;
    v_f.afisare();
    Nr_Complex arr_complex[5];
    Nr_Complex a1(20,2);
    Nr_Complex b1(3, 4);
    Nr_Complex c1(9, 4);
    Nr_Complex d1(1, 19);
    Nr_Complex e1(8, 5);
    arr_complex[0]=a1;
    arr_complex[1]=b1;
    arr_complex[2]=c1;
    arr_complex[3]=d1;
    arr_complex[4]=e1;
    Vector<Nr_Complex> v_n_c(5,arr_complex);
    cout<<"--Vector de Nr_Complex neordonat--"<<endl;
    v_n_c.afisare();
    v_n_c.ordonare();
    cout<<"--Vector de Nr_Complex ordonat in functie de partea reala--"<<endl;
    v_n_c.afisare();


    return 0;
}
