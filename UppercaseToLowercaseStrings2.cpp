// Convert Uppercaser to Lowercase strings

#include<iostream>
#include<cstring>
#include<cstdio>

using namespace std;

int main()
{

	char strs[25];
    int a;

    cout << "Enter the string name in uppercase: ";
    gets(strs);

    for (a=0; a<strlen(strs); a++)
    {
        if(strs[a] >= 65 && strs[a] <= 92) 
        {
            strs[a] = strs[a] + 32;
        }
    }
    cout << "\nThe String in lowercase = " << strs;
	cout << endl;
}
