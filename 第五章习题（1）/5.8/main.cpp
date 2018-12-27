#include <iostream>

using namespace std;

int main()
{
    int a = 0;
    int minimum = 0;
    int number = 0;
    cin >> a;

    for (int counter = 1;counter <= a;++counter)
    cin >> number;

    if(a >= number)

        minimum = number;
    else
        minimum = a;

    cout << "The minimum is:" << minimum ;

    return 0;
}
