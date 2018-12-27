#include <iostream>

using namespace std;

int main()
{
    int a = 0;
    int total=0;
    int b = 0;
    cin >> a;

    for (int counter=1;counter <= a;++counter)
    {
            cin >> b;
            total += b;


    }
      cout << "Sum is:" << total <<endl;


}
