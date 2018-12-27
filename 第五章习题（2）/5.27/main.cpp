#include <iostream>

using namespace std;

int main()
{
    for(unsigned int count=1; count<=10; count++)
    {
        if(count!=5)
        cout <<count<<" ";
    }
    cout << "\nUse a new method to instead continue to skip printing 5." << endl;
    return 0;
}
