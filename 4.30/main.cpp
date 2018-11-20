#include <iostream>

using namespace std;

int main()
{
    double r = 0;
    cout << "Radius of the circle:";
    cin >> r;

    double d = 0;
    double c = 0;
    double s = 0;
    d=2*r;
    c=2*3.14159*r;
    s=3.14159*r*r;

    cout << "The straight of the circle path:" << d <<endl;
    cout << "Circumference:" << c <<endl;
    cout << "The area of the circle:" << s <<endl;

    return 0;
}
