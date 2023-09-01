#include <iostream>
#include "complejo.h"

using namespace std;

int main()
{

    complejo un_complejo;
    cout << un_complejo.get_real()<< endl;
    cout << un_complejo.get_imaginario()<< endl;
    cout << un_complejo.get()<< endl;
    cout << "Hello world!" << endl;
    return 0;
}
