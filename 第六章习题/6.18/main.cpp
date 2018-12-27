#include <iostream>

using namespace std;

int integerPower(int base, int exponent)
{
    float n=0;
    while(n<exponent/2)
   {
    base=base*base;
    n++;
   }
    cout <<"Final number is:"<<base<<endl;
}

int main()
{
    int a=0, b=0;
    cout <<"Enter base:";
    cin >>a;
    cout <<"Enter exponent:";
    cin >>b;
    integerPower(a, b);
    return 0;
}
