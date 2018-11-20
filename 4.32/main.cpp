#include <iostream>

using namespace std;

int main()
{
    double a=0;
    double b=0;
    double c=0;

    cout << "Please enter the first border length:";
    cin >> a;

    cout << "Please enter the second border length:";
    cin >> b;

    cout << "Please enter the third border length:";
    cin >> c;

    if(a+b>c&&a+c>b&&b+c>a)
        cout << "Can form a triangle.";
    else
        cout << "Can not form a triangle.";




    return 0;
}
