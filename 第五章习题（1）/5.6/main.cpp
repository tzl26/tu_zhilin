#include <iostream>

using namespace std;

int main()
{
    int a = 0;
    int total = 0;
    int average = 0;
    int counter=1;


    for (counter;a!=9999;++counter)
    {
        cin>>a;

        total+=a;

    }

    average = (total-9999)/(counter-1);

    cout << "Average is:" <<average;

}
