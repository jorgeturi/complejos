#include "complejo.h"

complejo::complejo()
{
    real = new int;
    imaginario = new int;
}

void complejo::set_real(int n)
{
    *real = n;
}

void complejo :: set_imaginario(int i)
{
    *imaginario = i;
}

int complejo::get_real() const ///ESTO POR QUE LO PIDE LA CARGA DEL OP INT + COMPLEJO?
{
    return *real;
}

int complejo::get_imaginario() const
{
    return *imaginario;
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

    c3.set_real(*this->real + a.get_real());
    c3.set_imaginario( *this->imaginario + a.get_imaginario());

    return c3;
}


complejo complejo::operator * (const complejo& a) {
    complejo& resultado = *this;
    resultado.set_real(a.get_real() + *this->real);
    resultado.set_imaginario(a.get_imaginario() + 20);
    return resultado;
}

int complejo::operator * ( complejo& a) {
    int resultado = 0;
    complejo& invocador = *this;
    resultado = invocador.get_real() + invocador.get_imaginario() + a.get_real() + a.get_imaginario();

    return resultado;
}


int operator + (int b, const complejo& a){

    return b+a.get_real();

}


int complejo::operator(int)(complejo &a){
    return a.get_real();

}

