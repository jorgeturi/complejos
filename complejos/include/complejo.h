#ifndef COMPLEJO_H
#define COMPLEJO_H


class complejo
{
    public:
        complejo();
        void set_real(int);
        void set_imaginario(int);
        int get_real();
        int get_imaginario();

    protected:

    private:
        int real;
        int imaginario;

};

#endif // COMPLEJO_H
