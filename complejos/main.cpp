#include <iostream>
#include "complejo.h"

using namespace std;

int main()
{

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
    cout << un_complejo << 1+c2 <<endl;
    return 0;
}
