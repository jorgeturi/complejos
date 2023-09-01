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
