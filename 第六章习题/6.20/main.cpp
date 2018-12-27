#include <iostream>

using namespace std;

    int multiple(int x,int y)
    {
        if(y%x!=0)
            cout<<"false";
        else
            cout<<"true";
    };
int main()
{
int x,y;
cin>>x>>y;
multiple(x,y);
}
