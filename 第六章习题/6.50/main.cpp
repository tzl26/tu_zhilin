#include <iostream>

using namespace std;

int squarebyvalue(int);
void squarebyference(int&);
int main()
{
    int count,count2;
    cin>>count>>count2;
    cout<<"number="<<count<<"before"<<endl;
    cout<<"return"<<squarebyvalue(count)<<endl;
    cout<<"after"<<count<<endl;

    cout<<"count2="<<count2<<"before"<<endl;
    squarebyference(count2);
     cout<<"after"<<count2<<endl;
}
int squarebyvalue(int count)
{
    return count*3;
}
void squarebyference(int &count2)
{
    count2*=3;
}
