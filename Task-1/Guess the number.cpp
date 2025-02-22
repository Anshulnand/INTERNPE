#include<iostream>
using namespace std;
#include<cstdlib>
#include<ctime>

int main()
{
    srand(time(0));
    int randomnum=rand()%50+1;
    int number;
    cout<<"Welcome to the Number guessing game!"<<endl;
    cout<<"Enter a number between 1 and 50 :";
    cin>>number;
    int tries=1;
    bool guess=true;
    while(guess)
    {
        if(randomnum<number)
        {
            cout<<"Number is smaller than "<<number<<endl;
            cout<<"Enter number again:";
            cin>>number;
            tries++;
            
        }
        else if( randomnum>number)
        {
            cout<<"Number is greater than "<< number<<endl;
            cout<<"Enter number again:";
            cin>>number;
            tries++;
            
        }
        if( number==randomnum)
        {
            cout<<"Number:"<<number<<" successfully guessed! "<<endl;
            cout<<"Took "<<tries<<" attempts";
            return true;
        }
    }
}
