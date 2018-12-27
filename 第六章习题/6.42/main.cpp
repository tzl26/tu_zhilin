#include <iostream>
#include <cmath>

using namespace std;

int distance(double x1, double x2, double y1, double y2)
{

    return sqrt(pow((x1-x2), 2)+pow((y1-y2), 2));
}

int main()
{
    double x1=0, x2=0, y1=0, y2=0;
    cout <<"Please enter the first point numbers 'x1 y1': ";
    cin >>x1>>y1;
    cout <<"Please enter the second point numbers 'x2 y2': ";
    cin >>x2>>y2;
    distance(x1, x2, y1, y2);
    cout <<"The distance is:"<<sqrt(pow((x1-x2), 2)+pow((y1-y2), 2))<<endl;
    return 0;
}
