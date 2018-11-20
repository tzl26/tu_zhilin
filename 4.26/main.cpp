#include <iostream>

using namespace std;

int main()
{
    int a = 0;
    cout << "Please enter a five-digit number:";
    cin >> a;
    int b = 0;
    int c = 0;
    c = a;

    while (c != 0)
    {
        b = b*10+c%10;
        c/=10;
    }
    if(a==b)
        cout << "The number is palindrome number";
    if(a!=b)
        cout << "The number is not palindrome number ";
    return 0;
}
