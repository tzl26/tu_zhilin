#include <iostream>

using namespace std;

int main()
{
    int n=0;
    cout << "Enter a nonnegative integer:";
    cin >> n;

    int a=1;

    if (n==0)
    cout << "The value of factorial:" << endl;

    if(n>0)
    {
        while(n>0)
        {
            a*=n;
            n--;
        }
    }
    cout << "The value of factorial:" << a <<endl;

    return 0;
}
