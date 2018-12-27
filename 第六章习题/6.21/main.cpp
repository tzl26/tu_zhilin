#include <iostream>

using namespace std;

int iseven(int x)
{
    if(x%2!=0)
        cout<<"false";
    else
        cout<<"true";
}

int main()
{
   int x;
   cin>>x;
   iseven(x);
}
