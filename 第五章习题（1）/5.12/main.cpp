#include <iostream>

using namespace std;

int main()
{
    for (int i = 1;i <= 10;i++)
    {
        cout << '*' << endl;

    for(int j = 1;j <= i;j++)
        cout << '*' ;
    }

    for (int a = 10;a >= 1;a--)
    {
        cout << '*' <<endl;
        for (int b = 10;b >= a;b--)
            cout << '*';
    }
    return 0;
}
