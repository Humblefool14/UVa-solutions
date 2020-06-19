#include<bits/stdc++.h>
#include<iostream>
#include<sstream>
#include<map>
#include<vector>
using namespace std;
typedef map<string,int> dict;
dict match;
int main(){
     int t;
     cin >> t;
     for(int i=0;i<t;i++){
         int N; // No.of subjects.
         cin >> N; // Input no.of subjects that Sparrow knows
         string str;
         int a;
         match.clear();
         for(int j=0;j<N;j++){
             // Input the mapping items.
            cin >> str >> a; // String // Integer
            match[str]=a;
        }
        int HW; // Int homework
        cin >>HW;
        str.clear();
        getline(cin,str);
       // search within the dictionary for the matching string in second column.
       cout << "Case" << " : "<< i;
       dict :: iterator it;
       it = match.find(str);
       if(it!=match.end()){
          if(it->second >HW ){
              cout << "Yesss" << endl;
          }
          if(it->second >HW && it->second <= HW+5){
              cout << "Late" << endl;
          }
          if(it->second >=5){
            cout << "Do Your Own Homework" << endl;
          }
       }
       else cout << "Do Your Own Homework" << endl;
     }
  return 0;
 }
