#include <iostream>
using namespace std;

bool isPrime( int n )//是否是素数，prime素数。
{
   for ( int loop2 = 2; loop2 <= n / 2; loop2++ )
   {
      if ( n % loop2 == 0 )
         return false;
   }

   return true;
}

int main()
{
   int count = 1;

   cout << "The prime numbers from 1 to 10000 are:" << endl;
   cout << "\t"<< 2; // 2 is only even prime

   for ( int loop = 3; loop < 10000; loop += 2 )
   {
      if ( isPrime( loop ) )
      {
         count++;
         cout << "\t" << loop;

         if ( count % 10 == 0 )
            cout << '\n';
      }
   }
   cout << endl << "Total of " << count
      << " prime numbers between 1 and 10000." << endl;
}
