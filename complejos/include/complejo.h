#ifndef COMPLEJO_H
#define COMPLEJO_H

#include <iostream>
using namespace std;

class complejo
{
    public:
        complejo();

        void set_real(int);
        void set_imaginario(int);
        int get_real();
        int get_imaginario();
        int* get();

        //friend ostream& operator << (ostream&, complejo&);
        ostream& operator << (complejo&);
        complejo& operator + (complejo&);
        ///complejo operator + (complejo&, complejo&);
        complejo operator - (complejo&);
        int operator + (int&);
        complejo complejo_suma();

    protected:

    private:
        int real;
        int imaginario;
        int * a;

};

#endif // COMPLEJO_H
