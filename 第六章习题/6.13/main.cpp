
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
   double x=0, y=0;
   while(y!=0.5)
   {
   cout <<"Please enter a float number:";
   cin >>x;
   y=floor(x+0.5);
   cout <<"The original number is: "<< x <<"\nYour number is: "<<y<<"\n"<<endl;
   }

}
