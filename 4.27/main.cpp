#include <iostream>

using std::cout;
using std::cin;



void a(int c)
{
    if(c==1)
        cout<<1;
    if(c==0)
        cout<<0;
    else
    {
        a(c/2);
        cout<<(c%2);

    }
}


void b(double d,int e)
{
    if(e==1)
    {
        if(2*d>=1)
            cout<<1;
        else
            cout<<0;
    }
    else
    {
        if(2*d>=1)
        {
            cout<<1;
            b(2*d-1,e-1);
        }
    }
}


int main()
{
    double number1;
    int number2;
    cout<<"十进制数:";
    cin>>number1;

    int c=number1;
    double d=number1-c;
    if(d!=0)
    {
        cout<<"请输入要保留的小数位数:";
        cin>>number2;

    }


    cout<<"转换的二进制数为:";
    a(number1);
    if(d!=0)
    {
        cout<<'.';
        b(d,number2);
    }


    return 0;
}
