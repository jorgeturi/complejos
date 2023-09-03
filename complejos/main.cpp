#include <iostream>
#include "complejo.h"

using namespace std;

int main()
{
    int a = 5;
    int& b = a;

    int* a1 = new int[3];
    a1[0] = 88;
    a1[1] = 25;

    int &j = a1[0];
    cout << j << endl;
    int &k = *a1;
    cout << k+1 << endl; // por que no veo A1[1]?
    cout << k[1] << endl;


    cout<< b<< "y a: " << a << endl << b+1 <<  "  " << a << endl;
    b = b +1;
    cout<< b<< "y a: " << a << endl << b+1 <<  "  " << a << endl;

    complejo un_complejo;
    un_complejo.set_imaginario(25);
    un_complejo.set_real(5);
    cout << un_complejo.get_real();
    cout << un_complejo.get_imaginario()<< endl;
    cout << un_complejo.get()<< endl;
    cout << "Hello world!" << endl;
    complejo c2;
    c2 = un_complejo + un_complejo;

    ///como le digo que 1 + c2 = quedarme con el modulo?
  //  cout << un_complejo << 1+c2 <<endl;
    return 0;
}
