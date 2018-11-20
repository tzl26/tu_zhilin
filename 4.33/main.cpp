#include <iostream>

using namespace std;

int main()
{
    int a=0;
    int b=0;
    int c=0;

    cout << "Please enter the first border length:";
    cin >> a;

    cout << "Please enter the second border length:";
    cin >> b;

    cout << "Please enter the third border length:";
    cin >> c;

    if(a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a)
        cout << "Can form a right triangle.";
    else
        cout << "Can not form a right triangle.";

    return 0;
}
