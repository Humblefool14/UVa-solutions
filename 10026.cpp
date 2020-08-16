#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

struct job{
    int time ;
    int fine;
    int id;
};
bool comp(const job&j1, const job&j2)
{
    return j1.time * j2.fine < j2.time * j1.fine;
}
int main(){

int t;
int n;

cin >> t;
    while(t--)
    {
        cin >> n;

      // Array and add the elements
      vector <job> Job(n);
      for(int i=0; i<n;i++)
      {
           cin >> Job[i].time >> Job[i].fine;
           Job[i].id = i+1;
      }

        // Sorting
        // Stability sort
        // Preserve Lexographical id
       stable_sort(Job.begin(),Job.end(),comp);

       cout<< Job[0].id;
       for(int i =1; i<n;i++)
       cout << ""<< Job[i].id << endl;
       if(t)
       {
        cout << endl;
       }
    }
 return 0;
}
