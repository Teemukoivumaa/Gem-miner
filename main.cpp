#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main ()
{
        int tries, a, b, c;
        tries = 1; a = 1000;


    cout<< "Welcome to Gem Miner! In this game your trying to get a diamond."; cout << endl;
    cout<< "The chance of you getting it is 1/10000.";  cout << endl;

        while (b!=a)
        {
            cout << endl;
            srand((int)time(0)); b = rand()%1000+1;
            cout<< "Write something to mine."; cout << endl;
            cin>> c;

            if (b<a)
            cout<< "You didn't get the diamond yet! Try again. You have mined: " << tries << "times.";
            cout << endl;
            tries= tries+1;
        }
        cout << endl;
        if (b==a)
            cout<< "You got the diamond! You had to mine: " << tries << "times.";


    return 0;
}
