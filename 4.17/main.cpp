#include <iostream>

using namespace std;

int main()
{
    unsigned int counter=1;
    int largest=0;
    while(counter <= 10)
    {
        cout << "Enter number: ";
        int number=0;
        cin >> number;
        if (number>largest)
            largest=number;
        ++counter;

    }
        cout << "The largest is:" << largest;

    return 0;
}
