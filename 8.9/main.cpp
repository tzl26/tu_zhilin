#include <iostream>
using namespace std;

 int main()
 {
     long value1[]={200000};
     long value2;
     long *longPtr = value1;
     longPtr=& value1[0];

     for (size_t i=0;i<1;++i)
     cout<<"value1["<<i<<"]="<<value1[i]<<'\n';

     cout<<"The value of value2 is:"<<*longPtr<<'\n';
     cout<<"The address of value1 is:"<<&value1<<'\n';
     cout<<"The address of longPtr is:"<<&longPtr<<'\n';
}
