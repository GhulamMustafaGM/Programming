// StartPattern2

#include<iostream>
using namespace std;

int main()
{
    int a, b, c = 1;

    for( a = 0; a < 5; a++)
    {
        for( b = 0; b <= a; b++)
        {
            cout << "* ";
        }
        c = c + 2;
        cout << endl;
    }
    return 0;
}