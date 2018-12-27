#include <iostream>

using namespace std;

int main()
{
    int product = 1;
    int number = 0;
    for (int counter = 1;counter <= 15;++counter)
    {
        number = counter % 2;

        if(number != 0)
        {
        product = product*counter;
        }
    }


    cout << "Product is :" << product << endl;
    return 0;
}
