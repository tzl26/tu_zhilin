#ifndef POLYNOMIAL_H
#define POLYNOMIAL_H

#include <iostream>

class Polynomial
{
    friend std::ostream &operator<<( std::ostream &, const Polynomial & );
    friend std::istream &operator<<( std::istream &, Polynomial & );
    friend Polynomial operator+( const Polynomial &, const Polynomial & );
    friend Polynomial operator-( const Polynomial &, const Polynomial & );
    friend Polynomial operator*( const Polynomial &, const Polynomial & );
    friend Polynomial operator+=( const Polynomial &, const Polynomial & );
    friend Polynomial operator-=( const Polynomial &, const Polynomial & );
    friend Polynomial operator*=( const Polynomial &, const Polynomial & );
    friend Polynomial operator=( const Polynomial &, const Polynomial & );

    public:
        void Input;
        void Output;
        Polynomial operator+ ( const Polynomial & );
        Polynomial operator- ( const Polynomial & );

    private:
        int degree;
        int coeff;
};

#endif // POLYNOMIAL_H
