
#include <iostream>

using namespace std;

int main()
{
    unsigned int count=1, a=1;
    for(count=1; (count<=10&&a==1); count++)
    {
        if(count==5)
            a=0;
        else
        cout <<count<<" "<<endl;
    }
    count--;
    cout << "Broke out of loop at count = " <<count<< endl;
    return 0;
}
