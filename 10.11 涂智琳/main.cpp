#include <iostream>

using namespace std;

int main()
{
    Polynomial a,b,c,d;
    a.Input();
    b.Input();
    c = a + b;
    d = a - b;
    a.Output();
    b.Output();
    c.Output();
    d.Output();
    return 0;
}
