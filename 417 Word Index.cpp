#include<bits/stdc++.h>
#include<map>
#include<iostream>
#include<string>
using namespace std;

map <string, int> word;
int code=1;
                        // Global variable
void enumStrings(string x, int length)
{
        if (x.size() == length) // Use size_t for making it unsigned and unsigned comparisons
            {
                word[x] = code++;
               return;
            }
          char firstletter;
            if (x.empty())
                firstletter = 'a';
            else
            firstletter = x[x.size() - 1] + 1;
    for (char c = firstletter; c <= 'z'; ++c)
        enumStrings(x + c, length);
}
int main()
{
    // Form the map first
    for (int len = 1; len <= 5; ++len)
        enumStrings("", len);
    // Doing it for multiple length strings
    // Map formed
    string str;
    // Input strings
    while (cin >> str)
    {
        // compare bwt string anf map values
        cout << word[str] << endl;
    }
return 0;
}
