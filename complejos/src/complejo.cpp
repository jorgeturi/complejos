#include "complejo.h"

complejo::complejo()
{
    //ctor
}

void complejo::set_real(int n)
{
    real = n;
}

void complejo :: set_imaginario(int i)
{
    imaginario = i;
}

int complejo::get_real()
{
    return real;
}

int complejo::get_imaginario()
{
    return imaginario;
}

int* complejo::get(){
return a;
}


/*
ostream& operator<< (ostream& os, complejo &com)
{

    os << showpos << com.get_real() << " ";
    os << showpos <<com.get_imaginario() << " j" <<endl;

    return os;
}*/

ostream& operator<< (ostream& os ,complejo &com)
{

    os << showpos << com.get_real() << " ";
    os << showpos <<com.get_imaginario() << " j" <<endl;

    return os;
}





complejo& complejo::operator + (complejo &a)
{

    complejo &c3 = *this;

    c3.real = this->real + a.get_real();
    c3.imaginario = (this)->imaginario + a.get_imaginario();

    return c3;
}

/*
complejo complejo::operator + (const complejo& a, const complejo& b) {
    complejo resultado;
    resultado.set_real(a.get_real() + b.get_real());
    resultado.set_imaginario(a.get_imaginario() + b.get_imaginario());
    return resultado;
}*/


int operator + (int b, complejo a){

    return b+a.get_real();

}
