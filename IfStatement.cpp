// If Statement

#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
        unsigned long n, j;
        cout << "Enter a number: ";
        cin >> n; 

        for ( j =2; j <= n/2; j++ ) 
        if ( n%j == 0 ) 
   {
       cout << "It's not prime; divisible by " << j << endl;
       exit(0);
   }
        cout << "It's prime \n ";
        return 0; 
}
