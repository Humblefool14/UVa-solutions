#include<iostream>
#include<bits/stdc++.h>
#include<map>
using namespace std;
int main(){
   map<string,int> record;
   int n;
   cin >> n;
   string country;
   for(int i=0;i<n;i++){
        cin >>country;
        record[country]++;
        string temp;
        getline(cin,temp);
   }
   map <string,int> :: iterator i;      // https://thispointer.com/how-to-iterate-over-a-map-in-c/
   for(i=record.begin();i!=record.end();i++){
       cout << i->first << " " << i -> second << endl;
   }
 return 0;
}
