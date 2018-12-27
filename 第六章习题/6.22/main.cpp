#include <iostream>

using namespace std;

int square(int side)
{
    cout<<"Enter an amount: ";
    cin >>side;
    for(int i=1;i<=side;i++)
    {for(int j=1;j<side;j++)
        cout<<"*";
     cout<<"*"<<endl;
    }

    return side;

}

int main()
{
    int side=0;
    square(side);
    return 0;
}
