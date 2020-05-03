#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
     int arr[]={ 1, 2,3,4,-8,13,2,-20};

     int l = sizeof(arr)/sizeof(*arr);
     cout<< l << endl;
     int sum =0;
     int ans;

     for(int i =0; i<l;i++)
     {
         sum+=arr[i];
         ans =max(ans,sum);
         if (sum<0) sum=0;
     }

     cout << ans << endl;

return 0;
}
// Runs in O(n) time

// Use it for p507 :) 
