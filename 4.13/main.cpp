#include <iostream>

using namespace std;

int main()
{
    double a=0;
    double b=0;
    double sum1=0;
    double sum2=0;
    cout << "Enter miles driven( -1 to quit):";
    cin >>a;

    while(a!=-1)
    {
        cout << "Enter gallons used:";
        cin >>b;

        cout << "MPG this trip:" << a/b << endl;

        sum1+=a;
        sum2+=b;

        cout << "Total MPG:" << sum1/sum2 << endl << endl;

        cout << "Enter the miles used (-1 to quit):";
        cin >> a;

    }


    return 0;
}
