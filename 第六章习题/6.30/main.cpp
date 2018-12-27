#include <iostream>

using namespace std;

int main()
{
    int n=0, b=0, c=0, d=0, e=0, f=0;
    cout <<"Please enter a number:";
    cin>>n;

    while(n!=-1)
    {
        b=n/10000;
        c=(n%10000-n%1000)/1000;
        d=(n%1000-n%100)/100;
        e=(n%100-n%10)/10;
        f=(n%10);
        if(b==0&&c==0&&d==0)
        cout<<f<<e;
        else if(b==0&&c==0)
            cout<<f<<e<<d;
        else if(b==0)
            cout<<f<<e<<d<<c;
        else
        cout<<f<<e<<d<<c<<b;

        cout <<"\nPlease enter a number:";
    cin>>n;
    }

    return 0;
}
