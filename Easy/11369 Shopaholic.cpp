#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
 int t; // no.of testcases
 while(t--){
    int n;      // no,of items
    cin >>n;
    int items[n];
    for(int i=0;i<n;i++) cin >> items[i]; // Input no.of items
    sort(items,items+n); // sorting
    int discount=0;
    for(int i=n-3;i>=0;i-=3){     // start from 3rd of first expensive group.
        discount+=items[i];   // Add the discounts.
    }
   cout <<discount << endl;
  }
return 0;
}
