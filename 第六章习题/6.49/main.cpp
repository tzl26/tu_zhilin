
#include <iostream>

using namespace std;


double circleArea(double r)
{
    return 3.1415926*r*r;
}
int main()
{
    double x;
    cout<<"r=";
cin>>x;
    cout << "S= " << circleArea(x) << endl;

}
