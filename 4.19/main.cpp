#include <iostream>

using namespace std;

int main()
{
    int i=0;
    int max1=0;
    int max2=0;
    int x=0;

    cout << "Please enter ten numbers:" << endl;
    cin >> x;
    max1=max2=x;

    for(i=1;i<10;i++)
    {
        cin >> x;
        if(x>max1)
        {
            max2=max1;
            max1=x;
        }
        else if(x>max2)
            max2=x;
        }
        cout << "The largest is:" <<max1<<endl;
        cout << "The second largest is:" <<max2<<endl;
    return 0;
}
