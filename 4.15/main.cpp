#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    double x=0;
    double y=0;


   cout<<"Enter sales in dollars(-1 to quit):";
   cin>>x;

while(x!=-1)
{

   y=(x*0.09)+200;

   cout<<"Salary is:"<<y<<endl;

   cout<<"Enter sales in dollars(-1 to end):";
   cin>>x;


}

return 0;

}
