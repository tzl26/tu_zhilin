#include <iostream>

using namespace std;

int main()
{
    int count=0;
    long int hypotenuseSquared=0, sidesSquared=0;

   cout <<"Side 1\tSide 2\tSide3"<<endl;
   for (long side1=1; side1<=500; side1++)
   {
      for (long side2=side1; side2<=500; side2++)
      {
         for ( long hypotenuse=side2; hypotenuse<=500; hypotenuse++)
         {
            hypotenuseSquared=hypotenuse*hypotenuse;
            sidesSquared=side1*side1+side2*side2;

            if (hypotenuseSquared==sidesSquared)
            {
               cout <<side1<<'\t'<<side2<<'\t'<< hypotenuse<<'\n';
               count++;
            }
         }
      }
   }
   cout <<"The final number we found is: "<<count<<endl;
   return 0;
}
