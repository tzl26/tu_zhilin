#include "Polynomial.h"
using namespace std;

void Polynomial :: Input()
{
    cout << "Please enter polynomial degree: ";
    cin >> degree;
    coeff = new int [ degree + 1 ];
    cout << "Please enter polynomial coeff from high to low: ";
    for( int i = degree; i >= 0; i-- )
        cin >> coeff[ i ];

}
void Polynomial :: Output()
{
    for( int = degree; i >= 0; i-- )
    {
        if( i == degree )
        {
            if( coeff [ i ] == 1)
                cout << "x^" << i;
            else if( coeff [ i ] == -1)
                cout << "-x^" << i;
            else
                cout << "coeff[ i ]" << "x^" << i;
        }
        else if( i == 1)
        {
            if( coeff [ i ] == 0)
                continue;
            else if( coeff[ i ] > 0)
                cout << "+" << coeff[ i ] << "x";
            else if( coeff[ i ] < 0)
                cout << "-" << (-coeff[ i ]) << "x";

        }
        else if( i == 0)
        {
            if( coeff [ i ] == 0)
                cout << endl;
            else if( coeff[ i ] > 0)
                cout << "+" << coeff[ i ] << endl;
            else if( coeff[ i ] < 0)
                cout << "-" << (-coeff[ i ]) << endl;
        }
        else if( i>0 && i<degree)
        {
            if( coeff[ i ]==0)
                continue;
            else if(coeff[ i ] == 1)
                cout << "+x^" << i;
            else if(coeff[ i ] == -1)
                cout << "-x^" << i;
            else if(coeff[ i ]>0)
                cout << "+" << coeff[ i ] << "x^" <<i;
            else if(coeff[ i ]<0)
                cout << "-" << (-coeff[ i ]) << "x^" <<i;
        }
}
Polynomial Polynomial::operator+( const Polynomial &rhs)
{
   Polynomial sum;
   int MaxDegree = degree > rhs.dergee?degree:rhs.degree;
   int MinDegree = degree < rhs.degree?degree:rhs.degree;
   sum.degree = Maxdegree;
   sum.coeff = new int[ sum.degree + 1 ];
   if( rhs.degree == MaxDegree)
   {
       for( int i = 0;i < rhs.degree + 1;i++)
        sum.coeff[ i ] = rhs.coeff[ i ];
   }
    else
    {
        for(int i = 0;i < degree + 1; i++)
            sum.coeff[ i ] = coeff[ i ];
    }
    for(int i = 0;i<MinDegree + 1;i++)
        sum.coeff[ i ] = coeff[ i ] + rhs.coeff[ i ];
    return sum;
}

Polynomial Polynomial::operator~(const Polynomial &rhs)
{
   Polynomial sub;
   int MaxDegree = degree>rhs.degree?degree:rhs.degree;
   int MinDegree = degree<rhs.degree?degree:rhs.degree;
   sub.degree = MaxDegree;
   sub.coeff = new int [sub.degree + 1];
   if(rhs.degree == MaxDegree)
   {
       for(int i = 0;i<MaxDegree + 1;i++)
        sub.coeff[ i ] = rhs.coeff[ i ];
   }
   else
   {
       for(int i = 0;i<MaxDegree + 1;i++)
        sub.coeff[ i ] = coeff[ i ];
   }
   for(int i = 0;i<MinDegree + 1;i++)
    sub.coeff[ i ] = coeff[ i ]-rhs.coeff[ i ];
   return sub;
}
