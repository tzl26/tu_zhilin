#include <iostream>

using namespace std;

int isperfect()
{
    int a=0,i=1,f=0;
 for(a=2;a<=1000;a++)
 {
  f=0;
  for(i=1;i<a;i++)
  {
   if(a%i==0)
    f+=i;
  }
  if(f==a)
   cout<<a<<endl;
 }
 return a;
}

int main()
{
     isperfect();
     return 0;
}
