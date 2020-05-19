#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main()
{
 int n;
 while(cin >>n,n!=0)
 // N > 0 can be used
 {
     vector<int> initial(n);
     vector<int> target(n);
     for(int i=0;i<n;i++)
     {
        cin >> initial[i] >> target[i];
     }
     sort(initial.begin(),initial.end());
     sort(target.begin(),target.end());
// Ensuring too sorts are equal
// if there are same no. of ppl going to location A to B
// And from Location B TO A
// ANswer is sorterd
     if(initial == target)
     {
          cout <<"Yes" << endl;
     }
     else cout << "NO" << endl;
 }
return 0;
}
