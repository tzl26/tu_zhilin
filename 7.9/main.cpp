#include <array>
#include <iostream>
using namespace std;

int main()
{
   array<int,10>counts={};
   array<int,15>bonus={counts+1};
   array<double,12>monthlyTemperatures={0,1,2,3,4,5,6,7,8,9,10,11};

   array<int,5>bestScores={10,20,30,40,50};

   for (size_t i=0;i<bestScores.size();++i)
       cout<<"number"<<"\t"<<"value"<<endl;
   for (size_t j=0;j<bestScores.size();++j)
       cout<<j<<"\t"<<bestScores[j]<<endl;

}
