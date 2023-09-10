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
        int get_real() const;
        int get_imaginario() const;
        int* get();

        friend ostream& operator << (ostream&, complejo&);
        //ostream& operator << (complejo&);
        complejo& operator + (complejo&);


        complejo operator - (complejo&);
        friend int operator + (int, const complejo&);
        complejo complejo_suma();


        complejo operator * (const complejo&);
        ///int operator * (const complejo&);


        int operator (int)(complejo &);


    protected:

    private:
        int* real;
        int* imaginario;


};

#endif // COMPLEJO_H
