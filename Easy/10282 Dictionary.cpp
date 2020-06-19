#include<bits/stdc++.h>
#include<iostream>
#include<sstream>
#include<map>
#include<vector>
using namespace std;
typedef map<string,string> dict;
int main(){
    dict match;
    string str,str2,str3;
    // while loop for end of dictionary entries by Blank line
    while(getline(cin, str)){
        if(str =="\n") break;
        stringstream ss(str);
        ss >> str2 >> str3;
        match[str2]=str3;
     }
   // while loop for getting new inputs
   str.clear();
   while(getline(cin,str)){
     // search within the dictionary for the matching string in second column.
     dict :: iterator i;
     i= match.find(str);
     if(i!=match.end()){
         cout << (*i).second << endl;  // Multiple ways of writing.
         cout << i->second << endl;
     }
     else cout << "eh" << endl;
   }
return 0;
}
