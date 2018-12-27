#include <iostream>

using namespace std;

int main()
{
    unsigned int values[5]={2, 4, 6, 8, 10};
    const int SIZE=5;
    unsigned int v=0;

    unsigned int *vPtr =values;
    for(int value : values)
        cout <<value<<" ";

    vPtr=&values[0];
    vPtr=values;

    cout <<"\nThe address of vPtr+3 is " <<vPtr+3<<endl;
    vPtr=&values[4];
    vPtr-=4;
    cout <<"The address of vPtr-=4 is "<<&vPtr<<endl;
    cout <<"The address is "<<vPtr<<endl;
    return 0;
}
