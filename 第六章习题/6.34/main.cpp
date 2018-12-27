#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int a=0, b=0;
    b=1+rand()%1000;
    cout<<"I have a number between 1 and 1000.\nCan you guess my number?\nPlease type your first guess."<<endl;
    cin >>a;
    while(a<b)
        {
            cout<<"Too low. Try again."<<endl;
            cin >>a;
        }
    while(a>b)
    {
        cout<<"Too high. Try again."<<endl;
        cin >>a;
    }
    if(a==b)
        cout<<"Excellent! You guessed the number!\nWould you like to play again (y or n)?"<<endl;
    return 0;
}
