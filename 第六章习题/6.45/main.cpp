#include <iostream>

using namespace std;

int mystery(int a, int b)
{
    if(b==1)
        return a;
    else if(a==0||b==0)
        return 0;

    else if(b<0)
        return -(a+mystery(a, b+1));
    else
        return a+mystery(a, b-1);
}

int main()
{
    double x=0, y=0;
    cout <<"Enter two integers:";
    cin>>x>>y;
    while(y!=0.0001)
    {
        cout <<"The result is " <<mystery(x, y) <<endl;
        cout <<"Enter two integers:";
        cin>>x>>y;
    }
    return 0;
}
