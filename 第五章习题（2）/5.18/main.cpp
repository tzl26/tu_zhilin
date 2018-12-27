#include <iostream>

using namespace std;

int main()
{
   int number=0, factor=0;
   cout << "Number\t\t二进制\t\t八进制\t十六进制\n";

   for (int loop=1; loop<=256; loop++)
   {
      cout <<dec<<loop<<"\t\t";
      number=loop;
      factor=256;
      cout <<(number==256?'1':'0');

      do
      {
         cout<<( number<factor&&number>=(factor/2)?'1':'0');
         factor/=2;
         number%=factor;
      } while (factor>1);
      cout <<'\t'<<oct<<loop;
      cout <<'\t'<<hex<<loop<<endl;
   }
   return 0;
}
